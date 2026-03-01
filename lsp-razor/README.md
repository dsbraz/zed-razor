# LSP Razor

Language Server usado pela extensão: **Roslyn Language Server** com Razor co-hosting.

## Como funciona

O [Roslyn Language Server](https://github.com/dotnet/roslyn) é o servidor LSP oficial da Microsoft para C#. Ele suporta Razor/Blazor através de um mecanismo de **co-hosting**: DLLs de extensão são carregadas pelo servidor Roslyn, habilitando suporte completo a arquivos `.razor` e `.cshtml`.

A extensão baixa automaticamente o servidor pré-compilado do repositório [Crashdummyy/roslynLanguageServer](https://github.com/Crashdummyy/roslynLanguageServer), que inclui:
- `Microsoft.CodeAnalysis.LanguageServer` — binário do servidor Roslyn
- `.razorExtension/` — DLLs de suporte a Razor:
  - `Microsoft.CodeAnalysis.Razor.Compiler.dll`
  - `Microsoft.VisualStudioCode.RazorExtension.dll`
  - `Targets/Microsoft.NET.Sdk.Razor.DesignTime.targets`

## Recursos suportados

| Recurso | Status |
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

## Comando de lançamento

```bash
./Microsoft.CodeAnalysis.LanguageServer \
  --stdio \
  --logLevel Information \
  --extensionLogDirectory <log-dir> \
  --razorSourceGenerator .razorExtension/Microsoft.CodeAnalysis.Razor.Compiler.dll \
  --razorDesignTimePath .razorExtension/Targets/Microsoft.NET.Sdk.Razor.DesignTime.targets \
  --extension .razorExtension/Microsoft.VisualStudioCode.RazorExtension.dll
```

## Configuração customizada (settings.json do Zed)

Para usar um binário próprio ou passar argumentos extras:

```json
{
  "lsp": {
    "roslyn-razor": {
      "binary": {
        "path": "/caminho/customizado/Microsoft.CodeAnalysis.LanguageServer",
        "arguments": ["--logLevel", "Debug"]
      }
    }
  }
}
```

## Onde o servidor é instalado

O servidor é baixado automaticamente pelo Zed no diretório de trabalho da extensão:
`~/Library/Application Support/Zed/extensions/work/razor/` (macOS)

## Plataformas suportadas

| Plataforma | Identificador |
|------------|---------------|
| macOS ARM64 | `osx-arm64` |
| macOS x64 | `osx-x64` |
| Linux x64 | `linux-x64` |
| Linux ARM64 | `linux-arm64` |
| Windows x64 | `win-x64` |
| Windows ARM64 | `win-arm64` |
