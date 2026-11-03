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

((csharp_statement) @injection.content
  (#set! injection.language "csharp"))

((csharp_code) @injection.content
  (#set! injection.language "csharp"))

((csharp_expression) @injection.content
  (#set! injection.language "csharp"))

; CSS and JavaScript inside <style> and <script>. A Razor expression in the middle (for
; example `return @count;`) splits the text into several text_content nodes, so they are
; combined into one parse: injected one by one, each piece would be an incomplete program.
(html_element
  (html_start_tag
    name: (tag_name) @_tag)
  (text_content) @injection.content
  (#eq? @_tag "style")
  (#set! injection.language "css")
  (#set! injection.combined))

(html_element
  (html_start_tag
    name: (tag_name) @_tag)
  (text_content) @injection.content
  (#eq? @_tag "script")
  (#set! injection.language "javascript")
  (#set! injection.combined))

; Inline event handlers: onclick="showTab('roles')", onchange="...", and so on, hold
; JavaScript. A Razor expression inside the value (onclick="open('@item.Id')") splits it
; the same way, so these are combined per attribute value too.
(html_attribute
  name: (attribute_name) @_name
  value: (quoted_attribute_value
    (attribute_value_content) @injection.content)
  (#match? @_name "^[Oo][Nn][A-Za-z]+$")
  (#set! injection.language "javascript")
  (#set! injection.combined))
