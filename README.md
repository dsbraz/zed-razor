# zed-razor

Razor (`.razor`, `.cshtml`) support for the [Zed editor](https://zed.dev) — syntax highlighting, IntelliSense, diagnostics, go-to-definition, and more for ASP.NET Blazor/Razor Pages.

## Features

- **Syntax Highlighting** — Razor directives (`@page`, `@model`, `@inject`, `@code`, etc.), control structures (`@if`, `@foreach`, `@switch`), explicit/implicit expressions, HTML tags and Blazor components (PascalCase)
- **C# Language Injection** — Full C# highlighting inside `@code`, `@functions`, `@(...)` expressions and control structures
- **Bracket Matching** — `{}`, `()`, `[]`, `<>`, `<!-- -->` and `@* *@`
- **Auto-Indentation** — Smart indentation for HTML elements and C# blocks
- **Code Outline** — Navigate directives, `@code` blocks, sections and components
- **Language Server (LSP)** — Completions, diagnostics, hover, go-to-definition, find references, rename, formatting, inlay hints and code actions via Roslyn + Razor co-hosting (downloaded automatically)

## Repository Structure

```
zed-razor/
├── src/                # Rust LSP bridge (download + launch Roslyn)
├── languages/razor/    # Language queries (.scm) and config
├── lsp-razor/          # Language server documentation and configuration reference
└── extension.toml      # Extension manifest
```

The Tree-sitter grammar lives in a separate repository: [dsbraz/tree-sitter-razor](https://github.com/dsbraz/tree-sitter-razor).

## Installation

### From Zed Extension Registry (recommended)

Search for **Razor** in Zed's extension browser (`Cmd+Shift+X`).

### As a Dev Extension

1. Clone the repository:
   ```bash
   git clone https://github.com/dsbraz/zed-razor.git
   ```

2. Open the command palette (`Cmd+Shift+P` / `Ctrl+Shift+P`)

3. Run `zed: install dev extension`

4. Select the `zed-razor/` directory

Zed will compile the Tree-sitter grammar to WASM and start downloading the Roslyn language server (~150 MB) in the background on first use.

## Language Server

The extension automatically downloads the [Roslyn Language Server](https://github.com/dotnet/roslyn) with Razor co-hosting support from [Crashdummyy/roslynLanguageServer](https://github.com/Crashdummyy/roslynLanguageServer). No manual installation required.

Supported platforms: macOS (ARM64, x64), Linux (x64, ARM64), Windows (x64, ARM64).

After downloading, the extension copies the Razor assemblies into `razor-extension/` (the server's Razor extension must not share a directory with the Roslyn assemblies, otherwise the Razor source generator is never discovered). On every launch it writes `Targets/Microsoft.CSharpExtension.DesignTime.Zed.targets`, a copy of the server's design-time polyfill that also applies to Razor SDK projects targeting below net6.0 (e.g. `netcoreapp3.1` Blazor Server), where the SDK disables the Razor source generator, and that passes `RootNamespace` and `MSBuildProjectDirectory` to the generator so components get the right namespace and find their code-behind base classes. For those projects it also raises `LangVersion` to 10.0 in the language server's design-time build only (real builds are unaffected): below C# 10 the generator emits plain `#line` pragmas whose mappings break hover and go-to-definition on `@expressions` in markup. Side effect: the editor won't flag C# 9/10 syntax in such projects; `dotnet build` still does.

For manual configuration options, see [`lsp-razor/README.md`](lsp-razor/README.md).

## Configuration

Add to your Zed `settings.json` to customize language behavior:

```json
{
  "languages": {
    "Razor": {
      "tab_size": 4,
      "hard_tabs": false
    }
  },
  "lsp": {
    "roslyn-razor": {
      "binary": {
        "path": "/custom/path/to/Microsoft.CodeAnalysis.LanguageServer"
      }
    }
  }
}
```

## Contributing

PRs are welcome. Contributions can target:

- **LSP bridge** — `src/razor.rs` (download and launch logic)
- **Language queries** — `languages/razor/*.scm` (highlighting, injections, indentation)
- **Tree-sitter grammar** — [dsbraz/tree-sitter-razor](https://github.com/dsbraz/tree-sitter-razor)
- **LSP docs** — `lsp-razor/README.md`

## License

MIT
