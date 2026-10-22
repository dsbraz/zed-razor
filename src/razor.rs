use std::fs;

use zed_extension_api::{self as zed, settings::LspSettings, LanguageServerId, Result};

const SERVER_ID: &str = "roslyn-razor";
const GITHUB_RELEASES_BASE: &str =
    "https://github.com/Crashdummyy/roslynLanguageServer/releases/latest/download";
const SERVER_BINARY: &str = "Microsoft.CodeAnalysis.LanguageServer";

// The Razor extension must live in its own directory. If it sits next to the Roslyn
// assemblies, its load context loads a second Microsoft.CodeAnalysis, so the Razor
// source generator (loaded as an analyzer) fails Roslyn's [Generator] attribute check,
// is never discovered, and every Razor request fails with "Couldn't get a source
// generator run result".
const RAZOR_EXT_DIR: &str = "razor-extension";
const RAZOR_EXT_DLL: &str = "Microsoft.VisualStudioCode.RazorExtension.dll";
const RAZOR_DLLS: [&str; 5] = [
    RAZOR_EXT_DLL,
    "Microsoft.CodeAnalysis.Razor.Compiler.dll",
    "Microsoft.CodeAnalysis.Razor.Workspaces.dll",
    "Microsoft.CodeAnalysis.Remote.Razor.dll",
    "Microsoft.AspNetCore.Razor.Utilities.Shared.dll",
];

// The server's design-time polyfill only adds .razor files and the Razor generator to
// projects that do not use the Razor SDK. Razor SDK projects targeting < net6.0 turn the
// source generator off (UseRazorSourceGenerator=false), so they need it as well.
const TARGETS_FILE: &str = "Targets/Microsoft.CSharpExtension.DesignTime.targets";
const TARGETS_FILE_PATCHED: &str = "Targets/Microsoft.CSharpExtension.DesignTime.Zed.targets";
const TARGETS_CONDITION: &str = "'$(UsingMicrosoftNETSdkRazor)' != 'true'";
const TARGETS_CONDITION_PATCHED: &str = "'$(UseRazorSourceGenerator)' != 'true'";
// Without the Razor SDK's source-generator targets nothing hands RootNamespace and the
// project directory to the generator, so every component lands in the wrong namespace
// and its code-behind base class (`@inherits FooBase`) is not found.
// Below C# 10 the generator cannot emit `#line (l,c)-(l,c)` pragmas and falls back to
// plain `#line N`, whose source mappings point bare `@expr` in markup at `__builder`
// (hover/definition break). Razor SDK projects targeting < net6.0 default to C# 7.3-9,
// so raise LangVersion for the design-time build only; real builds are untouched.
const TARGETS_EXTRA_ITEMS: &str = r#"  <ItemGroup Condition="'$(UseRazorSourceGenerator)' != 'true'">
    <CompilerVisibleProperty Include="RootNamespace" />
    <CompilerVisibleProperty Include="MSBuildProjectDirectory" />
  </ItemGroup>

  <Target Name="ZedRazorLangVersion" AfterTargets="DetectRazorOrCshtmlFiles" Condition="'$(UseRazorSourceGenerator)' != 'true' And '$(UsingMicrosoftNETSdkRazor)' == 'true' And '@(_RazorOrCshtmlFiles)' != '' And $([System.Text.RegularExpressions.Regex]::IsMatch('$(LangVersion)', '^(default|[1-9](\.\d+)?)?$'))">
    <PropertyGroup>
      <LangVersion>10.0</LangVersion>
    </PropertyGroup>
  </Target>
</Project>"#;

struct RazorExtension {
    cached_server_dir: Option<String>,
}

impl RazorExtension {
    fn server_dir_name() -> &'static str {
        "roslyn-razor-server"
    }

    fn platform_rid() -> Result<&'static str> {
        Ok(match zed::current_platform() {
            (zed::Os::Mac, zed::Architecture::Aarch64) => "osx-arm64",
            (zed::Os::Mac, zed::Architecture::X8664) => "osx-x64",
            (zed::Os::Linux, zed::Architecture::X8664) => "linux-x64",
            (zed::Os::Linux, zed::Architecture::Aarch64) => "linux-arm64",
            (zed::Os::Windows, zed::Architecture::X8664) => "win-x64",
            (zed::Os::Windows, zed::Architecture::Aarch64) => "win-arm64",
            _ => return Err("Unsupported platform for roslyn-razor".into()),
        })
    }

    fn binary_path(server_dir: &str, rid: &str) -> String {
        if rid.starts_with("win-") {
            format!("{server_dir}/{SERVER_BINARY}.exe")
        } else {
            format!("{server_dir}/{SERVER_BINARY}")
        }
    }

    fn download_server(
        language_server_id: &LanguageServerId,
        rid: &str,
        server_dir: &str,
    ) -> Result<()> {
        zed::set_language_server_installation_status(
            language_server_id,
            &zed::LanguageServerInstallationStatus::Downloading,
        );

        let url = format!(
            "{GITHUB_RELEASES_BASE}/microsoft.codeanalysis.languageserver.{rid}.zip"
        );

        zed::download_file(&url, server_dir, zed::DownloadedFileType::Zip)
            .map_err(|e| format!("Failed to download roslyn-razor server: {e}"))?;

        Ok(())
    }

    /// Copies the Razor assemblies into `RAZOR_EXT_DIR`. The originals stay in the server
    /// root: the server's own MEF composition still has to resolve
    /// `Microsoft.VisualStudioCode.RazorExtension` from there.
    fn copy_razor_dlls(server_dir: &str) -> Result<()> {
        let ext_dir = format!("{server_dir}/{RAZOR_EXT_DIR}");
        fs::create_dir_all(&ext_dir).map_err(|e| format!("Failed to create {ext_dir}: {e}"))?;

        for dll in RAZOR_DLLS {
            fs::copy(format!("{server_dir}/{dll}"), format!("{ext_dir}/{dll}"))
                .map_err(|e| format!("Failed to copy {dll} into {RAZOR_EXT_DIR}: {e}"))?;
        }
        Ok(())
    }

    /// Writes the patched design-time targets. Runs on every launch so extension updates
    /// reach already-downloaded servers.
    fn write_targets(server_dir: &str) -> Result<()> {
        let targets = fs::read_to_string(format!("{server_dir}/{TARGETS_FILE}"))
            .map_err(|e| format!("Failed to read {TARGETS_FILE}: {e}"))?;
        if !targets.contains(TARGETS_CONDITION) || !targets.contains("</Project>") {
            return Err(format!(
                "{TARGETS_FILE} no longer matches what the Razor design-time patch expects; the extension needs updating"
            ));
        }
        let patched = targets
            .replace(TARGETS_CONDITION, TARGETS_CONDITION_PATCHED)
            .replace("</Project>", TARGETS_EXTRA_ITEMS);
        fs::write(format!("{server_dir}/{TARGETS_FILE_PATCHED}"), patched)
            .map_err(|e| format!("Failed to write {TARGETS_FILE_PATCHED}: {e}"))
    }

    fn build_command(server_dir: &str, rid: &str, user_args: Option<Vec<String>>) -> zed::Command {
        let binary = Self::binary_path(server_dir, rid);
        let log_dir = format!("{server_dir}/logs");

        // --razorSourceGenerator/--razorDesignTimePath were dropped by newer server builds;
        // the Razor extension (copied into its own directory by copy_razor_dlls) carries the
        // Razor compiler, and the design-time targets come from the patched polyfill.
        let mut args = vec![
            "--stdio".into(),
            "--autoLoadProjects".into(),
            "--csharpDesignTimePath".into(),
            format!("{server_dir}/{TARGETS_FILE_PATCHED}"),
            "--logLevel".into(),
            "Information".into(),
            "--extensionLogDirectory".into(),
            log_dir,
            "--extension".into(),
            format!("{server_dir}/{RAZOR_EXT_DIR}/{RAZOR_EXT_DLL}"),
        ];

        if let Some(extra) = user_args {
            args.extend(extra);
        }

        // On Windows and non-native platforms, use dotnet exec
        if rid == "any" {
            let mut dotnet_args = vec!["exec".into(), binary];
            dotnet_args.extend(args);
            return zed::Command {
                command: "dotnet".into(),
                args: dotnet_args,
                env: Default::default(),
            };
        }

        zed::Command {
            command: binary,
            args,
            env: Default::default(),
        }
    }

    fn remove_outdated_servers(current_dir: &str) -> Result<()> {
        let entries =
            fs::read_dir(".").map_err(|e| format!("Failed to list working directory: {e}"))?;
        for entry in entries.flatten() {
            let name = entry.file_name();
            let name_str = name.to_string_lossy();
            if name_str.starts_with(Self::server_dir_name()) && name_str != current_dir {
                fs::remove_dir_all(entry.path()).ok();
            }
        }
        Ok(())
    }
}

impl zed::Extension for RazorExtension {
    fn new() -> Self {
        Self {
            cached_server_dir: None,
        }
    }

    fn language_server_command(
        &mut self,
        language_server_id: &LanguageServerId,
        worktree: &zed::Worktree,
    ) -> Result<zed::Command> {
        // Allow user to override with a custom binary
        let binary_settings = LspSettings::for_worktree(SERVER_ID, worktree)
            .ok()
            .and_then(|s| s.binary);

        let user_args = binary_settings
            .as_ref()
            .and_then(|b| b.arguments.clone());

        if let Some(custom_path) = binary_settings.and_then(|b| b.path) {
            return Ok(zed::Command {
                command: custom_path,
                args: user_args.unwrap_or_default(),
                env: Default::default(),
            });
        }

        let rid = Self::platform_rid()?;

        // Relative path for WASM sandbox file ops (download, make_executable, metadata)
        let server_dir_rel = Self::server_dir_name().to_string();

        // Absolute path for Command args (process runs with project as cwd)
        let base_dir = std::env::current_dir()
            .map_err(|e| format!("Failed to get extension work dir: {e}"))?;
        let server_dir_abs = base_dir
            .join(&server_dir_rel)
            .to_string_lossy()
            .into_owned();

        // Check cache (stored as absolute)
        if let Some(ref cached) = self.cached_server_dir {
            let binary = Self::binary_path(cached, rid);
            if fs::metadata(&binary).is_ok_and(|m| m.is_file()) {
                return Ok(Self::build_command(cached, rid, user_args));
            }
        }

        zed::set_language_server_installation_status(
            language_server_id,
            &zed::LanguageServerInstallationStatus::CheckingForUpdate,
        );

        // Check/download using relative paths (WASM sandbox)
        let binary_rel = Self::binary_path(&server_dir_rel, rid);
        let razor_ext_rel = format!("{server_dir_rel}/{RAZOR_EXT_DIR}/{RAZOR_EXT_DLL}");
        let already_installed = [&binary_rel, &razor_ext_rel]
            .iter()
            .all(|p| fs::metadata(p).is_ok_and(|m| m.is_file()));

        if !already_installed {
            Self::download_server(language_server_id, rid, &server_dir_rel)?;
            Self::copy_razor_dlls(&server_dir_rel)?;
            Self::remove_outdated_servers(&server_dir_rel)?;
        }
        Self::write_targets(&server_dir_rel)?;

        // make_file_executable requires relative path in WASM sandbox
        if !rid.starts_with("win-") {
            zed::make_file_executable(&binary_rel)?;
        }

        // Cache absolute path; build Command with absolute paths
        self.cached_server_dir = Some(server_dir_abs.clone());
        Ok(Self::build_command(&server_dir_abs, rid, user_args))
    }
}

zed::register_extension!(RazorExtension);
