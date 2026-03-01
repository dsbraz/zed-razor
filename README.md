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
├── extension/          # Zed extension (extension manifest, Rust LSP bridge, language queries)
├── tree-sitter-razor/  # Tree-sitter grammar for Razor syntax
└── lsp-razor/          # Language server documentation and configuration reference
```

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

4. Select the `zed-razor/extension/` directory

Zed will compile the Tree-sitter grammar to WASM and start downloading the Roslyn language server (~150 MB) in the background on first use.

## Language Server

The extension automatically downloads the [Roslyn Language Server](https://github.com/dotnet/roslyn) with Razor co-hosting support from [Crashdummyy/roslynLanguageServer](https://github.com/Crashdummyy/roslynLanguageServer). No manual installation required.

Supported platforms: macOS (ARM64, x64), Linux (x64, ARM64), Windows (x64, ARM64).

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

PRs are welcome. The repository has three independent components — contributions can target any of them:

- **`extension/`** — Zed integration: LSP download logic (`src/razor.rs`), language queries (`languages/razor/*.scm`)
- **`tree-sitter-razor/`** — Parser grammar (`grammar.js`, `src/scanner.c`) and test corpus
- **`lsp-razor/`** — Language server documentation

## License

MIT
