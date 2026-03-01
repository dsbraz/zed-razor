; =============================================================================
; Razor Language Injection Queries
; Injects C# highlighting into code blocks and expressions
; =============================================================================

; Inject C# into @code { ... } blocks
((code_block
  (csharp_code) @content)
  (#set! "language" "CSharp"))

; Inject C# into @functions { ... } blocks
((functions_block
  (csharp_code) @content)
  (#set! "language" "CSharp"))

; Inject C# into anonymous @{ ... } blocks
((razor_anonymous_block
  (csharp_code) @content)
  (#set! "language" "CSharp"))

; Inject C# into control structure conditions/expressions
((razor_if
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

((razor_foreach
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

((razor_for
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

((razor_while
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

((razor_do_while
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

((razor_switch
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

((razor_lock
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

((razor_using_statement
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

((catch_clause
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

((switch_case
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

; Inject C# into explicit expressions @(...)
((explicit_expression
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

; Inject C# into implicit expressions @variable.Property
((implicit_expression
  (implicit_expression_content) @content)
  (#set! "language" "CSharp"))

; Inject C# into @await expressions
((razor_await
  (implicit_expression_content) @content)
  (#set! "language" "CSharp"))

; Inject C# into expression attribute values
((expression_attribute_value
  (csharp_expression) @content)
  (#set! "language" "CSharp"))

; Inject CSS into <style> tags
((html_element
  (html_start_tag
    name: (tag_name) @_tag)
  (text_content) @content)
  (#eq? @_tag "style")
  (#set! "language" "css"))

; Inject JavaScript into <script> tags
((html_element
  (html_start_tag
    name: (tag_name) @_tag)
  (text_content) @content)
  (#eq? @_tag "script")
  (#set! "language" "javascript"))
