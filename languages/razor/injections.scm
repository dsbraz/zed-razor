(code_block
  (csharp_code) @injection.content
  (#set! injection.language "csharp"))

(functions_block
  (csharp_code) @injection.content
  (#set! injection.language "csharp"))

(razor_anonymous_block
  (csharp_code) @injection.content
  (#set! injection.language "csharp"))

(razor_if
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(razor_foreach
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(razor_for
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(razor_while
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(razor_do_while
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(razor_switch
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(razor_lock
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(razor_using_statement
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(catch_clause
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(switch_case
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(explicit_expression
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

(implicit_expression
  (implicit_expression_content) @injection.content
  (#set! injection.language "csharp"))

(razor_await
  (implicit_expression_content) @injection.content
  (#set! injection.language "csharp"))

(expression_attribute_value
  (csharp_expression) @injection.content
  (#set! injection.language "csharp"))

((razor_cs_statement) @injection.content
  (#set! injection.language "csharp"))

(html_element
  (html_start_tag
    name: (tag_name) @_tag)
  (text_content) @injection.content
  (#eq? @_tag "style")
  (#set! injection.language "css"))

(html_element
  (html_start_tag
    name: (tag_name) @_tag)
  (text_content) @injection.content
  (#eq? @_tag "script")
  (#set! injection.language "javascript"))
