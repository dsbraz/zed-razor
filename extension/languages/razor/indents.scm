; =============================================================================
; Razor Indentation Queries
; =============================================================================

; HTML elements increase indent
(html_element) @indent.begin
(html_self_closing_element) @indent.flat

; C# code blocks
(code_block
  "{" @indent.begin
  "}" @indent.end)

(functions_block
  "{" @indent.begin
  "}" @indent.end)

(section_block
  "{" @indent.begin
  "}" @indent.end)

(razor_anonymous_block
  "{" @indent.begin
  "}" @indent.end)

; Control structure braces
(razor_if
  "{" @indent.begin
  "}" @indent.end)

(razor_else
  "{" @indent.begin
  "}" @indent.end)

(razor_else_if
  "{" @indent.begin
  "}" @indent.end)

(razor_foreach
  "{" @indent.begin
  "}" @indent.end)

(razor_for
  "{" @indent.begin
  "}" @indent.end)

(razor_while
  "{" @indent.begin
  "}" @indent.end)

(razor_do_while
  "{" @indent.begin
  "}" @indent.end)

(razor_switch
  "{" @indent.begin
  "}" @indent.end)

(razor_try
  "{" @indent.begin
  "}" @indent.end)

(catch_clause
  "{" @indent.begin
  "}" @indent.end)

(finally_clause
  "{" @indent.begin
  "}" @indent.end)

(razor_lock
  "{" @indent.begin
  "}" @indent.end)

; Comments should not affect indentation
(html_comment) @indent.ignore
(razor_comment) @indent.ignore
