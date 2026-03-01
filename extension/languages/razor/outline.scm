; @code / @functions blocks
(code_block "code" @name) @item
(functions_block "functions" @name) @item

; Directives
(directive_page "page" @name) @item
(directive_model "model" @context (directive_argument) @name) @item
(directive_using "using" @context (directive_argument) @name) @item
(directive_inject "inject" @context (directive_argument) @name) @item

; @section blocks
(section_block "section" @context name: (identifier) @name) @item

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
