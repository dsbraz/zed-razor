# LSP Razor

Language server used by this extension: **Roslyn Language Server** with Razor co-hosting.

## How it works

The [Roslyn Language Server](https://github.com/dotnet/roslyn) is Microsoft's official LSP server for C#. It supports Razor/Blazor through a **co-hosting** mechanism: extension DLLs are loaded by the Roslyn server, enabling full support for `.razor` and `.cshtml` files.

The extension automatically downloads the pre-built server from the [Crashdummyy/roslynLanguageServer](https://github.com/Crashdummyy/roslynLanguageServer) repository, which includes:
- `Microsoft.CodeAnalysis.LanguageServer` — the Roslyn server binary
- Razor support files, next to the server binary:
  - `Microsoft.CodeAnalysis.Razor.Compiler.dll`
  - `Microsoft.VisualStudioCode.RazorExtension.dll`
  - `Targets/Microsoft.NET.Sdk.Razor.DesignTime.targets`

## Supported features

| Feature | Status |
|---------|--------|
| Completions | ✅ |
| Diagnostics | ✅ |
| Hover | ✅ |
| Go to Definition | ✅ |
| Find References | ✅ |
| Rename Symbol | ✅ |
| Formatting | ✅ |
| Inlay Hints | ✅ |
| Signature Help | ✅ |
| Code Actions | ✅ |
| Semantic Highlighting | ✅ |

## Launch command

```bash
./Microsoft.CodeAnalysis.LanguageServer \
  --stdio \
  --logLevel Information \
  --extensionLogDirectory <log-dir> \
  --extension Microsoft.VisualStudioCode.RazorExtension.dll \
  --autoLoadProjects
```

`--autoLoadProjects` makes the server find and load the projects under the
workspace folders itself. Without it a Razor file belongs to no project and
every request fails with "Couldn't get a source generator run result for
project 'Miscellaneous Files'".

Older server builds kept these files in a `.razorExtension/` folder and took
`--razorSourceGenerator` and `--razorDesignTimePath` arguments. Current builds
reject both arguments and find the compiler and targets on their own.

## Custom configuration (Zed settings.json)

To use a custom binary or pass extra arguments:

```json
{
  "lsp": {
    "roslyn-razor": {
      "binary": {
        "path": "/custom/path/Microsoft.CodeAnalysis.LanguageServer",
        "arguments": ["--logLevel", "Debug"]
      }
    }
  }
}
```

## Installation directory

The server is downloaded automatically by Zed into the extension work directory:
`~/Library/Application Support/Zed/extensions/work/razor/` (macOS)

## Supported platforms

| Platform | Identifier |
|----------|------------|
| macOS ARM64 | `osx-arm64` |
| macOS x64 | `osx-x64` |
| Linux x64 | `linux-x64` |
| Linux ARM64 | `linux-arm64` |
| Windows x64 | `win-x64` |
| Windows ARM64 | `win-arm64` |
