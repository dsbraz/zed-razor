(code_block
  (csharp_code) @injection.content
  (#set! injection.language "csharp"))

(functions_block
  (csharp_code) @injection.content
  (#set! injection.language "csharp"))

(razor_anonymous_block
  (csharp_code) @injection.content
  (#set! injection.language "csharp"))

(explicit_expression
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(implicit_expression
  (implicit_expression_content) @injection.content
  (#set! injection.language "csharp"))

((razor_cs_statement) @injection.content
  (#set! injection.language "csharp"))
