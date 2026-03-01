/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// HTML void elements that don't have closing tags
const VOID_ELEMENTS = [
  'area', 'base', 'br', 'col', 'embed', 'hr', 'img', 'input',
  'link', 'meta', 'param', 'source', 'track', 'wbr',
];

module.exports = grammar({
  name: 'razor',

  externals: $ => [
    $.csharp_code,
    $.csharp_expression,
    $.implicit_expression_content,
    $._html_text,
    $._razor_comment_content,
    $.csharp_statement,
  ],

  extras: _ => [/\s/],

  word: $ => $.identifier,

  supertypes: $ => [
    $.directive,
    $.control_structure,
  ],

  conflicts: _ => [],

  rules: {
    document: $ => repeat($._node),

    _node: $ => choice(
      $.directive,
      $.code_block,
      $.functions_block,
      $.section_block,
      $.razor_anonymous_block,
      $.control_structure,
      $.explicit_expression,
      $.implicit_expression,
      $.razor_comment,
      $.html_comment,
      $.html_element,
      $.html_self_closing_element,
      $.html_void_element,
      $.text_content,
    ),

    // Like _node but also allows bare C# statements (for control structure bodies)
    _template_node: $ => choice(
      $.directive,
      $.code_block,
      $.functions_block,
      $.section_block,
      $.razor_anonymous_block,
      $.control_structure,
      $.explicit_expression,
      $.implicit_expression,
      $.razor_comment,
      $.html_comment,
      $.html_element,
      $.html_self_closing_element,
      $.html_void_element,
      $.text_content,
      $.razor_cs_statement,
    ),

    // C# statement in a template (control structure body) context
    razor_cs_statement: $ => $.csharp_statement,

    // =========================================================================
    // Directives (supertype)
    // =========================================================================
    directive: $ => choice(
      $.directive_page,
      $.directive_model,
      $.directive_using,
      $.directive_inject,
      $.directive_implements,
      $.directive_inherits,
      $.directive_layout,
      $.directive_namespace,
      $.directive_typeparam,
      $.directive_attribute,
      $.directive_preservewhitespace,
      $.directive_rendermode,
    ),

    directive_page: $ => seq('@', 'page', $.directive_argument),
    directive_model: $ => seq('@', 'model', $.directive_argument),
    directive_using: $ => seq('@', 'using', $.directive_argument),
    directive_inject: $ => seq('@', 'inject', $.directive_argument),
    directive_implements: $ => seq('@', 'implements', $.directive_argument),
    directive_inherits: $ => seq('@', 'inherits', $.directive_argument),
    directive_layout: $ => seq('@', 'layout', $.directive_argument),
    directive_namespace: $ => seq('@', 'namespace', $.directive_argument),
    directive_typeparam: $ => seq('@', 'typeparam', $.directive_argument),
    directive_attribute: $ => seq('@', 'attribute', $.directive_argument),
    directive_preservewhitespace: $ => seq('@', 'preservewhitespace', $.directive_argument),
    directive_rendermode: $ => seq('@', 'rendermode', $.directive_argument),

    directive_argument: _ => token(prec(1, /[^\n\r]+/)),

    // =========================================================================
    // Code Blocks
    // =========================================================================
    code_block: $ => seq(
      '@', 'code',
      '{',
      optional($.csharp_code),
      '}',
    ),

    functions_block: $ => seq(
      '@', 'functions',
      '{',
      optional($.csharp_code),
      '}',
    ),

    section_block: $ => seq(
      '@', 'section',
      field('name', $.identifier),
      '{',
      repeat($._template_node),
      '}',
    ),

    razor_anonymous_block: $ => seq(
      '@{',
      optional($.csharp_code),
      '}',
    ),

    // =========================================================================
    // Control Structures (supertype)
    // =========================================================================
    control_structure: $ => choice(
      $.razor_if,
      $.razor_else_if,
      $.razor_else,
      $.razor_foreach,
      $.razor_for,
      $.razor_while,
      $.razor_do_while,
      $.razor_switch,
      $.razor_try,
      $.razor_lock,
      $.razor_await,
      $.razor_using_statement,
    ),

    razor_if: $ => prec.right(seq(
      '@', 'if',
      '(',
      $.csharp_expression,
      ')',
      '{',
      repeat($._template_node),
      '}',
      repeat(choice($.razor_else_if, $.razor_else)),
    )),

    razor_else_if: $ => seq(
      'else',
      'if',
      '(',
      $.csharp_expression,
      ')',
      '{',
      repeat($._template_node),
      '}',
    ),

    razor_else: $ => seq(
      'else',
      '{',
      repeat($._template_node),
      '}',
    ),

    razor_foreach: $ => seq(
      '@', 'foreach',
      '(',
      $.csharp_expression,
      ')',
      '{',
      repeat($._template_node),
      '}',
    ),

    razor_for: $ => seq(
      '@', 'for',
      '(',
      $.csharp_expression,
      ')',
      '{',
      repeat($._template_node),
      '}',
    ),

    razor_while: $ => seq(
      '@', 'while',
      '(',
      $.csharp_expression,
      ')',
      '{',
      repeat($._template_node),
      '}',
    ),

    razor_do_while: $ => seq(
      '@', 'do',
      '{',
      repeat($._template_node),
      '}',
      'while',
      '(',
      $.csharp_expression,
      ')',
      ';',
    ),

    razor_switch: $ => seq(
      '@', 'switch',
      '(',
      $.csharp_expression,
      ')',
      '{',
      repeat($.switch_case),
      '}',
    ),

    switch_case: $ => seq(
      choice(
        seq('case', alias($.switch_case_value, $.csharp_expression), ':'),
        seq('default', ':'),
      ),
      repeat($._template_node),
    ),

    switch_case_value: _ => token(prec(1, /[^:\n\r]+/)),

    razor_try: $ => seq(
      '@', 'try',
      '{',
      repeat($._template_node),
      '}',
      repeat($.catch_clause),
      optional($.finally_clause),
    ),

    catch_clause: $ => seq(
      'catch',
      optional(seq('(', $.csharp_expression, ')')),
      '{',
      repeat($._template_node),
      '}',
    ),

    finally_clause: $ => seq(
      'finally',
      '{',
      repeat($._template_node),
      '}',
    ),

    razor_lock: $ => seq(
      '@', 'lock',
      '(',
      $.csharp_expression,
      ')',
      '{',
      repeat($._template_node),
      '}',
    ),

    razor_await: $ => seq(
      '@', 'await',
      $.implicit_expression_content,
    ),

    razor_using_statement: $ => seq(
      '@', 'using',
      '(',
      $.csharp_expression,
      ')',
      '{',
      repeat($._template_node),
      '}',
    ),

    // =========================================================================
    // Expressions
    // =========================================================================
    explicit_expression: $ => seq(
      '@(',
      $.csharp_expression,
      ')',
    ),

    implicit_expression: $ => seq(
      '@',
      $.implicit_expression_content,
    ),

    // =========================================================================
    // HTML Elements
    // =========================================================================
    html_element: $ => seq(
      $.html_start_tag,
      repeat($._node),
      $.html_end_tag,
    ),

    html_start_tag: $ => seq(
      '<',
      field('name', $.tag_name),
      repeat($._html_attribute),
      '>',
    ),

    html_end_tag: $ => seq(
      '</',
      field('name', $.tag_name),
      '>',
    ),

    html_self_closing_element: $ => seq(
      '<',
      field('name', $.tag_name),
      repeat($._html_attribute),
      '/>',
    ),

    html_void_element: $ => seq(
      '<',
      field('name', alias(choice(...VOID_ELEMENTS), $.tag_name)),
      repeat($._html_attribute),
      choice('>', '/>'),
    ),

    tag_name: _ => /[a-zA-Z][a-zA-Z0-9._-]*/,

    // =========================================================================
    // HTML Attributes
    // =========================================================================
    _html_attribute: $ => choice(
      $.html_attribute,
      $.razor_directive_attribute,
    ),

    html_attribute: $ => seq(
      field('name', $.attribute_name),
      optional(seq(
        '=',
        field('value', $._attribute_value),
      )),
    ),

    razor_directive_attribute: $ => seq(
      field('name', $.directive_attribute_name),
      optional(seq(
        '=',
        field('value', $._attribute_value),
      )),
    ),

    attribute_name: _ => /[a-zA-Z_][a-zA-Z0-9_:.-]*/,
    directive_attribute_name: _ => /@[a-zA-Z][a-zA-Z0-9_:.-]*/,

    _attribute_value: $ => choice(
      $.quoted_attribute_value,
      $.expression_attribute_value,
    ),

    quoted_attribute_value: $ => choice(
      seq('"', repeat(choice($.attribute_value_content, $.implicit_expression, $.explicit_expression)), '"'),
      seq("'", repeat(choice($.attribute_value_content, $.implicit_expression, $.explicit_expression)), "'"),
    ),

    // Stop at @, " and ' so Razor expressions can be parsed within attribute values
    attribute_value_content: _ => /[^"'@]+/,

    expression_attribute_value: $ => seq(
      '@(',
      $.csharp_expression,
      ')',
    ),

    // =========================================================================
    // Comments
    // =========================================================================
    razor_comment: $ => seq(
      '@*',
      optional($._razor_comment_content),
      '*@',
    ),

    html_comment: _ => token(seq(
      '<!--',
      repeat(choice(
        /[^-]/,
        /-[^-]/,
        /--[^>]/,
      )),
      '-->',
    )),

    // =========================================================================
    // Text Content
    // =========================================================================
    text_content: $ => $._html_text,

    // =========================================================================
    // Identifiers
    // =========================================================================
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});
