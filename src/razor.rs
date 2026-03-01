use std::fs;

use zed_extension_api::{self as zed, settings::LspSettings, LanguageServerId, Result};

const SERVER_ID: &str = "roslyn-razor";
const GITHUB_RELEASES_BASE: &str =
    "https://github.com/Crashdummyy/roslynLanguageServer/releases/latest/download";
const SERVER_BINARY: &str = "Microsoft.CodeAnalysis.LanguageServer";

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

    fn build_command(server_dir: &str, rid: &str, user_args: Option<Vec<String>>) -> zed::Command {
        let binary = Self::binary_path(server_dir, rid);
        let razor_ext_dir = format!("{server_dir}/.razorExtension");

        let log_dir = format!("{server_dir}/logs");

        let mut args = vec![
            "--stdio".into(),
            "--logLevel".into(),
            "Information".into(),
            "--extensionLogDirectory".into(),
            log_dir,
            "--razorSourceGenerator".into(),
            format!("{razor_ext_dir}/Microsoft.CodeAnalysis.Razor.Compiler.dll"),
            "--razorDesignTimePath".into(),
            format!("{razor_ext_dir}/Targets/Microsoft.NET.Sdk.Razor.DesignTime.targets"),
            "--extension".into(),
            format!("{razor_ext_dir}/Microsoft.VisualStudioCode.RazorExtension.dll"),
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
        let razor_ext_rel = format!(
            "{server_dir_rel}/.razorExtension/Microsoft.VisualStudioCode.RazorExtension.dll"
        );
        let already_installed = fs::metadata(&binary_rel).is_ok_and(|m| m.is_file())
            && fs::metadata(&razor_ext_rel).is_ok_and(|m| m.is_file());

        if !already_installed {
            Self::download_server(language_server_id, rid, &server_dir_rel)?;
            Self::remove_outdated_servers(&server_dir_rel)?;
        }

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
