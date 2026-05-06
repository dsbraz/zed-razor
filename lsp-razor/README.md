# LSP Razor

Language server used by this extension: **Roslyn Language Server** with Razor co-hosting.

## How it works

The [Roslyn Language Server](https://github.com/dotnet/roslyn) is Microsoft's official LSP server for C#. It supports Razor/Blazor through a **co-hosting** mechanism: extension DLLs are loaded by the Roslyn server, enabling full support for `.razor` and `.cshtml` files.

Zed starts a small Node-based proxy before Roslyn. The proxy:
- relays JSON-RPC/LSP traffic between Zed and Roslyn;
- opens the detected `.sln`, `.slnx`, or `.csproj` with Roslyn via `solution/open` or `project/open`;
- handles Roslyn/Razor server-to-client endpoints that Zed does not implement directly, including Razor logs, generated HTML updates, project restore requests, and safe fallback responses for delegated HTML requests.

The extension automatically downloads the pre-built server from the [Crashdummyy/roslynLanguageServer](https://github.com/Crashdummyy/roslynLanguageServer) repository, which includes:
- `Microsoft.CodeAnalysis.LanguageServer` — the Roslyn server binary
- `.razorExtension/` — Razor support DLLs:
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

Zed launches:

```bash
node razor-lsp-proxy.mjs \
  --workspace <worktree-root> \
  --log <server-dir>/logs/proxy.log \
  --server <server-dir>/Microsoft.CodeAnalysis.LanguageServer \
  -- \
  --stdio \
  --logLevel Information \
  --extensionLogDirectory <server-dir>/logs \
  --razorSourceGenerator <server-dir>/.razorExtension/Microsoft.CodeAnalysis.Razor.Compiler.dll \
  --razorDesignTimePath <server-dir>/.razorExtension/Targets/Microsoft.NET.Sdk.Razor.DesignTime.targets \
  --extension <server-dir>/.razorExtension/Microsoft.VisualStudioCode.RazorExtension.dll
```

The Roslyn command behind the proxy is equivalent to:

```bash
./Microsoft.CodeAnalysis.LanguageServer \
  --stdio \
  --logLevel Information \
  --extensionLogDirectory <log-dir> \
  --razorSourceGenerator .razorExtension/Microsoft.CodeAnalysis.Razor.Compiler.dll \
  --razorDesignTimePath .razorExtension/Targets/Microsoft.NET.Sdk.Razor.DesignTime.targets \
  --extension .razorExtension/Microsoft.VisualStudioCode.RazorExtension.dll
```

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
