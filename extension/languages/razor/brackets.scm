; =============================================================================
; Razor Bracket Matching Queries
; =============================================================================

; HTML angle brackets
(html_start_tag "<" @open ">" @close)
(html_end_tag "</" @open ">" @close)
(html_self_closing_element "<" @open "/>" @close)
(html_void_element "<" @open ">" @close)

; Curly braces (C# code blocks)
("{" @open "}" @close)

; Parentheses (expressions, conditions)
("(" @open ")" @close)

; Razor comment delimiters
(("@*" @open "*@" @close)
  (#set! rainbow.exclude))
