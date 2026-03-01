; =============================================================================
; Razor Outline Queries
; Used for the outline panel / symbol navigator
; =============================================================================

; @code blocks
(code_block
  "@code" @context) @item

; @functions blocks
(functions_block
  "@functions" @context) @item

; Directives
(directive_page
  "@page" @context) @item

(directive_model
  "@model" @context
  (directive_argument) @name) @item

(directive_using
  "@using" @context
  (directive_argument) @name) @item

(directive_inject
  "@inject" @context
  (directive_argument) @name) @item

; Top-level HTML elements
(html_element
  (html_start_tag
    "<" @context
    name: (tag_name) @name)) @item

; Component references (PascalCase)
((html_element
  (html_start_tag
    "<" @context
    name: (tag_name) @name)) @item
  (#match? @name "^[A-Z]"))

; @section blocks
(section_block
  "@section" @context
  name: (identifier) @name) @item
