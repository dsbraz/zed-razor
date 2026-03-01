; Default highlights for tree-sitter-razor
; The Zed extension overrides these with languages/razor/highlights.scm

; The @ sigil
"@" @keyword
"@{" @keyword

; Directive keyword words
[
  "page" "model" "using" "inject" "implements" "inherits"
  "layout" "namespace" "typeparam" "attribute" "preservewhitespace" "rendermode"
] @keyword

; Code block keywords
["code" "functions" "section"] @keyword

; Control structure keywords
["if" "foreach" "for" "while" "do" "switch" "try" "lock" "await"] @keyword

; C# keywords without @
["else" "catch" "finally" "case" "default"] @keyword

(html_start_tag
  name: (tag_name) @tag)

(html_end_tag
  name: (tag_name) @tag)

(html_self_closing_element
  name: (tag_name) @tag)

(html_void_element
  name: (tag_name) @tag)

(html_attribute
  name: (attribute_name) @attribute)

(razor_directive_attribute
  name: (directive_attribute_name) @attribute)

(quoted_attribute_value) @string
(directive_argument) @string

(html_comment) @comment
(razor_comment) @comment

(csharp_code) @embedded
(csharp_expression) @embedded
(implicit_expression_content) @embedded
