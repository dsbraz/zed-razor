; =============================================================================
; Razor Syntax Highlighting Queries
; For use with tree-sitter-razor grammar in Zed editor
; =============================================================================

; ---------------------------------------------------------------------------
; Razor Directives
; ---------------------------------------------------------------------------
; The @ sigil (covers directives and code blocks; overridden below for
; implicit expressions and control structures)
"@" @keyword

; Directive keyword words (follow @)
[
  "page" "model" "using" "inject" "implements" "inherits"
  "layout" "namespace" "typeparam" "attribute" "preservewhitespace" "rendermode"
] @keyword

(directive_argument) @string

; ---------------------------------------------------------------------------
; Razor Code Blocks
; ---------------------------------------------------------------------------
["code" "functions" "section"] @keyword

(section_block
  name: (identifier) @label)

; Anonymous block
"@{" @keyword

; ---------------------------------------------------------------------------
; Razor Control Structures
; ---------------------------------------------------------------------------
; The @ in control structures — override the general "@" @keyword above
(razor_if "@" @keyword.control)
(razor_foreach "@" @keyword.control)
(razor_for "@" @keyword.control)
(razor_while "@" @keyword.control)
(razor_do_while "@" @keyword.control)
(razor_switch "@" @keyword.control)
(razor_try "@" @keyword.control)
(razor_lock "@" @keyword.control)
(razor_await "@" @keyword.control)

; Control structure keyword words
["if" "foreach" "for" "while" "do" "switch" "try" "lock" "await"] @keyword.control

; C# keywords used inside control structures (no @)
["else" "catch" "finally" "case" "default" "break"] @keyword.control

; ---------------------------------------------------------------------------
; Razor Expressions
; ---------------------------------------------------------------------------
(explicit_expression
  "@(" @punctuation.special
  ")" @punctuation.special)

(implicit_expression
  "@" @punctuation.special)

; ---------------------------------------------------------------------------
; HTML Elements
; ---------------------------------------------------------------------------
(html_start_tag
  "<" @punctuation.bracket
  name: (tag_name) @tag
  ">" @punctuation.bracket)

(html_end_tag
  "</" @punctuation.bracket
  name: (tag_name) @tag
  ">" @punctuation.bracket)

(html_self_closing_element
  "<" @punctuation.bracket
  name: (tag_name) @tag
  "/>" @punctuation.bracket)

(html_void_element
  "<" @punctuation.bracket
  name: (tag_name) @tag
  ">" @punctuation.bracket)

; Component references (PascalCase tags)
((html_start_tag
  name: (tag_name) @type)
  (#match? @type "^[A-Z]"))

((html_self_closing_element
  name: (tag_name) @type)
  (#match? @type "^[A-Z]"))

; ---------------------------------------------------------------------------
; HTML Attributes
; ---------------------------------------------------------------------------
(html_attribute
  name: (attribute_name) @attribute)

(html_attribute
  "=" @operator)

(quoted_attribute_value) @string

; Razor directive attributes (@onclick, @bind, etc.)
(razor_directive_attribute
  name: (directive_attribute_name) @keyword.directive)

(razor_directive_attribute
  "=" @operator)

; ---------------------------------------------------------------------------
; Comments
; ---------------------------------------------------------------------------
(html_comment) @comment
(razor_comment) @comment

; ---------------------------------------------------------------------------
; C# Content (injected)
; ---------------------------------------------------------------------------
(csharp_code) @embedded
(csharp_expression) @embedded
(implicit_expression_content) @embedded

; ---------------------------------------------------------------------------
; Punctuation
; ---------------------------------------------------------------------------
"{" @punctuation.bracket
"}" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket
";" @punctuation.delimiter

; ---------------------------------------------------------------------------
; Identifiers
; ---------------------------------------------------------------------------
(identifier) @variable
