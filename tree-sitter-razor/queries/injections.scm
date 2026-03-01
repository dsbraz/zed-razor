; Default injections for tree-sitter-razor

((code_block
  (csharp_code) @content)
  (#set! "language" "c_sharp"))

((functions_block
  (csharp_code) @content)
  (#set! "language" "c_sharp"))

((razor_anonymous_block
  (csharp_code) @content)
  (#set! "language" "c_sharp"))

((explicit_expression
  (csharp_expression) @content)
  (#set! "language" "c_sharp"))

((implicit_expression
  (implicit_expression_content) @content)
  (#set! "language" "c_sharp"))
