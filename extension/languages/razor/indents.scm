; HTML elements
(html_element) @indent.begin
(html_self_closing_element) @indent.flat

; Opening braces — "@{" is a single token in razor_anonymous_block
["@{" "{"] @indent.begin
["}"] @indent.end

; Comments don't affect indentation
(html_comment) @indent.ignore
(razor_comment) @indent.ignore
