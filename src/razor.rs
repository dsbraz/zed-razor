use std::fs;
use std::path::Path;

use zed_extension_api::{self as zed, settings::LspSettings, LanguageServerId, Result};

const SERVER_ID: &str = "roslyn-razor";
const GITHUB_RELEASES_BASE: &str =
    "https://github.com/Crashdummyy/roslynLanguageServer/releases/latest/download";
const SERVER_BINARY: &str = "Microsoft.CodeAnalysis.LanguageServer";
const PROXY_SCRIPT_NAME: &str = "razor-lsp-proxy.mjs";
const PROXY_SCRIPT: &str = include_str!("../lsp-razor/proxy.mjs");

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

        let url = format!("{GITHUB_RELEASES_BASE}/microsoft.codeanalysis.languageserver.{rid}.zip");

        zed::download_file(&url, server_dir, zed::DownloadedFileType::Zip)
            .map_err(|e| format!("Failed to download roslyn-razor server: {e}"))?;

        Ok(())
    }

    fn server_args(server_dir: &str, user_args: Option<Vec<String>>) -> Vec<String> {
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

        args
    }

    fn write_proxy_script(server_dir_rel: &str, server_dir_abs: &str) -> Result<String> {
        fs::create_dir_all(server_dir_rel)
            .map_err(|e| format!("Failed to create roslyn-razor server directory: {e}"))?;

        let proxy_rel = format!("{server_dir_rel}/{PROXY_SCRIPT_NAME}");
        fs::write(&proxy_rel, PROXY_SCRIPT)
            .map_err(|e| format!("Failed to write razor LSP proxy: {e}"))?;

        Ok(Path::new(server_dir_abs)
            .join(PROXY_SCRIPT_NAME)
            .to_string_lossy()
            .into_owned())
    }

    fn build_proxy_command(
        proxy_script: String,
        workspace_root: String,
        log_file: String,
        server_command: String,
        server_args: Vec<String>,
    ) -> Result<zed::Command> {
        let mut args = vec![
            proxy_script,
            "--workspace".into(),
            workspace_root,
            "--log".into(),
            log_file,
            "--server".into(),
            server_command,
            "--".into(),
        ];
        args.extend(server_args);

        Ok(zed::Command {
            command: zed::node_binary_path()?,
            args,
            env: Default::default(),
        })
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
        // Relative path for WASM sandbox file ops (download, make_executable, metadata)
        let server_dir_rel = Self::server_dir_name().to_string();

        // Absolute path for Command args.
        let base_dir = std::env::current_dir()
            .map_err(|e| format!("Failed to get extension work dir: {e}"))?;
        let server_dir_abs = base_dir
            .join(&server_dir_rel)
            .to_string_lossy()
            .into_owned();
        let proxy_script = Self::write_proxy_script(&server_dir_rel, &server_dir_abs)?;
        let log_dir_rel = format!("{server_dir_rel}/logs");
        let log_dir_abs = Path::new(&server_dir_abs)
            .join("logs")
            .to_string_lossy()
            .into_owned();
        fs::create_dir_all(&log_dir_rel)
            .map_err(|e| format!("Failed to create roslyn-razor log directory: {e}"))?;
        let proxy_log_file = Path::new(&log_dir_abs)
            .join("proxy.log")
            .to_string_lossy()
            .into_owned();
        let workspace_root = worktree.root_path();

        // Allow user to override with a custom binary
        let binary_settings = LspSettings::for_worktree(SERVER_ID, worktree)
            .ok()
            .and_then(|s| s.binary);

        let user_args = binary_settings.as_ref().and_then(|b| b.arguments.clone());

        if let Some(custom_path) = binary_settings.and_then(|b| b.path) {
            return Self::build_proxy_command(
                proxy_script,
                workspace_root,
                proxy_log_file,
                custom_path,
                user_args.unwrap_or_default(),
            );
        }

        let rid = Self::platform_rid()?;

        // Check cache (stored as absolute)
        if let Some(ref cached) = self.cached_server_dir {
            let binary = Self::binary_path(cached, rid);
            if fs::metadata(&binary).is_ok_and(|m| m.is_file()) {
                let server_args = Self::server_args(cached, user_args);
                return Self::build_proxy_command(
                    proxy_script,
                    workspace_root,
                    proxy_log_file,
                    binary,
                    server_args,
                );
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
        let binary = Self::binary_path(&server_dir_abs, rid);
        let server_args = Self::server_args(&server_dir_abs, user_args);
        Self::build_proxy_command(
            proxy_script,
            workspace_root,
            proxy_log_file,
            binary,
            server_args,
        )
    }
}

zed::register_extension!(RazorExtension);
