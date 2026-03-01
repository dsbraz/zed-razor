#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 231
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_AT = 2,
  anon_sym_page = 3,
  anon_sym_model = 4,
  anon_sym_using = 5,
  anon_sym_inject = 6,
  anon_sym_implements = 7,
  anon_sym_inherits = 8,
  anon_sym_layout = 9,
  anon_sym_namespace = 10,
  anon_sym_typeparam = 11,
  anon_sym_attribute = 12,
  anon_sym_preservewhitespace = 13,
  anon_sym_rendermode = 14,
  sym_directive_argument = 15,
  anon_sym_code = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_functions = 19,
  anon_sym_section = 20,
  anon_sym_AT_LBRACE = 21,
  anon_sym_if = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_else = 25,
  anon_sym_foreach = 26,
  anon_sym_for = 27,
  anon_sym_while = 28,
  anon_sym_do = 29,
  anon_sym_SEMI = 30,
  anon_sym_switch = 31,
  anon_sym_case = 32,
  anon_sym_COLON = 33,
  anon_sym_default = 34,
  anon_sym_break = 35,
  sym_switch_case_value = 36,
  anon_sym_try = 37,
  anon_sym_catch = 38,
  anon_sym_finally = 39,
  anon_sym_lock = 40,
  anon_sym_await = 41,
  anon_sym_AT_LPAREN = 42,
  anon_sym_LT = 43,
  anon_sym_GT = 44,
  anon_sym_LT_SLASH = 45,
  anon_sym_SLASH_GT = 46,
  anon_sym_area = 47,
  anon_sym_base = 48,
  anon_sym_br = 49,
  anon_sym_col = 50,
  anon_sym_embed = 51,
  anon_sym_hr = 52,
  anon_sym_img = 53,
  anon_sym_input = 54,
  anon_sym_link = 55,
  anon_sym_meta = 56,
  anon_sym_param = 57,
  anon_sym_source = 58,
  anon_sym_track = 59,
  anon_sym_wbr = 60,
  sym_tag_name = 61,
  anon_sym_EQ = 62,
  sym_attribute_name = 63,
  sym_directive_attribute_name = 64,
  anon_sym_DQUOTE = 65,
  anon_sym_SQUOTE = 66,
  sym_attribute_value_content = 67,
  anon_sym_AT_STAR = 68,
  anon_sym_STAR_AT = 69,
  sym_html_comment = 70,
  sym_csharp_code = 71,
  sym_csharp_expression = 72,
  sym_implicit_expression_content = 73,
  sym__html_text = 74,
  sym__razor_comment_content = 75,
  sym_document = 76,
  sym__node = 77,
  sym_directive = 78,
  sym_directive_page = 79,
  sym_directive_model = 80,
  sym_directive_using = 81,
  sym_directive_inject = 82,
  sym_directive_implements = 83,
  sym_directive_inherits = 84,
  sym_directive_layout = 85,
  sym_directive_namespace = 86,
  sym_directive_typeparam = 87,
  sym_directive_attribute = 88,
  sym_directive_preservewhitespace = 89,
  sym_directive_rendermode = 90,
  sym_code_block = 91,
  sym_functions_block = 92,
  sym_section_block = 93,
  sym_razor_anonymous_block = 94,
  sym_control_structure = 95,
  sym_razor_if = 96,
  sym_razor_else_if = 97,
  sym_razor_else = 98,
  sym_razor_foreach = 99,
  sym_razor_for = 100,
  sym_razor_while = 101,
  sym_razor_do_while = 102,
  sym_razor_switch = 103,
  sym_switch_case = 104,
  sym_razor_try = 105,
  sym_catch_clause = 106,
  sym_finally_clause = 107,
  sym_razor_lock = 108,
  sym_razor_await = 109,
  sym_razor_using_statement = 110,
  sym_explicit_expression = 111,
  sym_implicit_expression = 112,
  sym_html_element = 113,
  sym_html_start_tag = 114,
  sym_html_end_tag = 115,
  sym_html_self_closing_element = 116,
  sym_html_void_element = 117,
  sym__html_attribute = 118,
  sym_html_attribute = 119,
  sym_razor_directive_attribute = 120,
  sym__attribute_value = 121,
  sym_quoted_attribute_value = 122,
  sym_expression_attribute_value = 123,
  sym_razor_comment = 124,
  sym_text_content = 125,
  aux_sym_document_repeat1 = 126,
  aux_sym_razor_if_repeat1 = 127,
  aux_sym_razor_switch_repeat1 = 128,
  aux_sym_razor_try_repeat1 = 129,
  aux_sym_html_start_tag_repeat1 = 130,
  aux_sym_quoted_attribute_value_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_AT] = "@",
  [anon_sym_page] = "page",
  [anon_sym_model] = "model",
  [anon_sym_using] = "using",
  [anon_sym_inject] = "inject",
  [anon_sym_implements] = "implements",
  [anon_sym_inherits] = "inherits",
  [anon_sym_layout] = "layout",
  [anon_sym_namespace] = "namespace",
  [anon_sym_typeparam] = "typeparam",
  [anon_sym_attribute] = "attribute",
  [anon_sym_preservewhitespace] = "preservewhitespace",
  [anon_sym_rendermode] = "rendermode",
  [sym_directive_argument] = "directive_argument",
  [anon_sym_code] = "code",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_functions] = "functions",
  [anon_sym_section] = "section",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_else] = "else",
  [anon_sym_foreach] = "foreach",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_SEMI] = ";",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_COLON] = ":",
  [anon_sym_default] = "default",
  [anon_sym_break] = "break",
  [sym_switch_case_value] = "csharp_expression",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_finally] = "finally",
  [anon_sym_lock] = "lock",
  [anon_sym_await] = "await",
  [anon_sym_AT_LPAREN] = "@(",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_area] = "tag_name",
  [anon_sym_base] = "tag_name",
  [anon_sym_br] = "tag_name",
  [anon_sym_col] = "tag_name",
  [anon_sym_embed] = "tag_name",
  [anon_sym_hr] = "tag_name",
  [anon_sym_img] = "tag_name",
  [anon_sym_input] = "tag_name",
  [anon_sym_link] = "tag_name",
  [anon_sym_meta] = "tag_name",
  [anon_sym_param] = "tag_name",
  [anon_sym_source] = "tag_name",
  [anon_sym_track] = "tag_name",
  [anon_sym_wbr] = "tag_name",
  [sym_tag_name] = "tag_name",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_directive_attribute_name] = "directive_attribute_name",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_attribute_value_content] = "attribute_value_content",
  [anon_sym_AT_STAR] = "@*",
  [anon_sym_STAR_AT] = "*@",
  [sym_html_comment] = "html_comment",
  [sym_csharp_code] = "csharp_code",
  [sym_csharp_expression] = "csharp_expression",
  [sym_implicit_expression_content] = "implicit_expression_content",
  [sym__html_text] = "_html_text",
  [sym__razor_comment_content] = "_razor_comment_content",
  [sym_document] = "document",
  [sym__node] = "_node",
  [sym_directive] = "directive",
  [sym_directive_page] = "directive_page",
  [sym_directive_model] = "directive_model",
  [sym_directive_using] = "directive_using",
  [sym_directive_inject] = "directive_inject",
  [sym_directive_implements] = "directive_implements",
  [sym_directive_inherits] = "directive_inherits",
  [sym_directive_layout] = "directive_layout",
  [sym_directive_namespace] = "directive_namespace",
  [sym_directive_typeparam] = "directive_typeparam",
  [sym_directive_attribute] = "directive_attribute",
  [sym_directive_preservewhitespace] = "directive_preservewhitespace",
  [sym_directive_rendermode] = "directive_rendermode",
  [sym_code_block] = "code_block",
  [sym_functions_block] = "functions_block",
  [sym_section_block] = "section_block",
  [sym_razor_anonymous_block] = "razor_anonymous_block",
  [sym_control_structure] = "control_structure",
  [sym_razor_if] = "razor_if",
  [sym_razor_else_if] = "razor_else_if",
  [sym_razor_else] = "razor_else",
  [sym_razor_foreach] = "razor_foreach",
  [sym_razor_for] = "razor_for",
  [sym_razor_while] = "razor_while",
  [sym_razor_do_while] = "razor_do_while",
  [sym_razor_switch] = "razor_switch",
  [sym_switch_case] = "switch_case",
  [sym_razor_try] = "razor_try",
  [sym_catch_clause] = "catch_clause",
  [sym_finally_clause] = "finally_clause",
  [sym_razor_lock] = "razor_lock",
  [sym_razor_await] = "razor_await",
  [sym_razor_using_statement] = "razor_using_statement",
  [sym_explicit_expression] = "explicit_expression",
  [sym_implicit_expression] = "implicit_expression",
  [sym_html_element] = "html_element",
  [sym_html_start_tag] = "html_start_tag",
  [sym_html_end_tag] = "html_end_tag",
  [sym_html_self_closing_element] = "html_self_closing_element",
  [sym_html_void_element] = "html_void_element",
  [sym__html_attribute] = "_html_attribute",
  [sym_html_attribute] = "html_attribute",
  [sym_razor_directive_attribute] = "razor_directive_attribute",
  [sym__attribute_value] = "_attribute_value",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_expression_attribute_value] = "expression_attribute_value",
  [sym_razor_comment] = "razor_comment",
  [sym_text_content] = "text_content",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_razor_if_repeat1] = "razor_if_repeat1",
  [aux_sym_razor_switch_repeat1] = "razor_switch_repeat1",
  [aux_sym_razor_try_repeat1] = "razor_try_repeat1",
  [aux_sym_html_start_tag_repeat1] = "html_start_tag_repeat1",
  [aux_sym_quoted_attribute_value_repeat1] = "quoted_attribute_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_page] = anon_sym_page,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_inject] = anon_sym_inject,
  [anon_sym_implements] = anon_sym_implements,
  [anon_sym_inherits] = anon_sym_inherits,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_typeparam] = anon_sym_typeparam,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_preservewhitespace] = anon_sym_preservewhitespace,
  [anon_sym_rendermode] = anon_sym_rendermode,
  [sym_directive_argument] = sym_directive_argument,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_functions] = anon_sym_functions,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_break] = anon_sym_break,
  [sym_switch_case_value] = sym_csharp_expression,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_AT_LPAREN] = anon_sym_AT_LPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_area] = sym_tag_name,
  [anon_sym_base] = sym_tag_name,
  [anon_sym_br] = sym_tag_name,
  [anon_sym_col] = sym_tag_name,
  [anon_sym_embed] = sym_tag_name,
  [anon_sym_hr] = sym_tag_name,
  [anon_sym_img] = sym_tag_name,
  [anon_sym_input] = sym_tag_name,
  [anon_sym_link] = sym_tag_name,
  [anon_sym_meta] = sym_tag_name,
  [anon_sym_param] = sym_tag_name,
  [anon_sym_source] = sym_tag_name,
  [anon_sym_track] = sym_tag_name,
  [anon_sym_wbr] = sym_tag_name,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_directive_attribute_name] = sym_directive_attribute_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_attribute_value_content] = sym_attribute_value_content,
  [anon_sym_AT_STAR] = anon_sym_AT_STAR,
  [anon_sym_STAR_AT] = anon_sym_STAR_AT,
  [sym_html_comment] = sym_html_comment,
  [sym_csharp_code] = sym_csharp_code,
  [sym_csharp_expression] = sym_csharp_expression,
  [sym_implicit_expression_content] = sym_implicit_expression_content,
  [sym__html_text] = sym__html_text,
  [sym__razor_comment_content] = sym__razor_comment_content,
  [sym_document] = sym_document,
  [sym__node] = sym__node,
  [sym_directive] = sym_directive,
  [sym_directive_page] = sym_directive_page,
  [sym_directive_model] = sym_directive_model,
  [sym_directive_using] = sym_directive_using,
  [sym_directive_inject] = sym_directive_inject,
  [sym_directive_implements] = sym_directive_implements,
  [sym_directive_inherits] = sym_directive_inherits,
  [sym_directive_layout] = sym_directive_layout,
  [sym_directive_namespace] = sym_directive_namespace,
  [sym_directive_typeparam] = sym_directive_typeparam,
  [sym_directive_attribute] = sym_directive_attribute,
  [sym_directive_preservewhitespace] = sym_directive_preservewhitespace,
  [sym_directive_rendermode] = sym_directive_rendermode,
  [sym_code_block] = sym_code_block,
  [sym_functions_block] = sym_functions_block,
  [sym_section_block] = sym_section_block,
  [sym_razor_anonymous_block] = sym_razor_anonymous_block,
  [sym_control_structure] = sym_control_structure,
  [sym_razor_if] = sym_razor_if,
  [sym_razor_else_if] = sym_razor_else_if,
  [sym_razor_else] = sym_razor_else,
  [sym_razor_foreach] = sym_razor_foreach,
  [sym_razor_for] = sym_razor_for,
  [sym_razor_while] = sym_razor_while,
  [sym_razor_do_while] = sym_razor_do_while,
  [sym_razor_switch] = sym_razor_switch,
  [sym_switch_case] = sym_switch_case,
  [sym_razor_try] = sym_razor_try,
  [sym_catch_clause] = sym_catch_clause,
  [sym_finally_clause] = sym_finally_clause,
  [sym_razor_lock] = sym_razor_lock,
  [sym_razor_await] = sym_razor_await,
  [sym_razor_using_statement] = sym_razor_using_statement,
  [sym_explicit_expression] = sym_explicit_expression,
  [sym_implicit_expression] = sym_implicit_expression,
  [sym_html_element] = sym_html_element,
  [sym_html_start_tag] = sym_html_start_tag,
  [sym_html_end_tag] = sym_html_end_tag,
  [sym_html_self_closing_element] = sym_html_self_closing_element,
  [sym_html_void_element] = sym_html_void_element,
  [sym__html_attribute] = sym__html_attribute,
  [sym_html_attribute] = sym_html_attribute,
  [sym_razor_directive_attribute] = sym_razor_directive_attribute,
  [sym__attribute_value] = sym__attribute_value,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_expression_attribute_value] = sym_expression_attribute_value,
  [sym_razor_comment] = sym_razor_comment,
  [sym_text_content] = sym_text_content,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_razor_if_repeat1] = aux_sym_razor_if_repeat1,
  [aux_sym_razor_switch_repeat1] = aux_sym_razor_switch_repeat1,
  [aux_sym_razor_try_repeat1] = aux_sym_razor_try_repeat1,
  [aux_sym_html_start_tag_repeat1] = aux_sym_html_start_tag_repeat1,
  [aux_sym_quoted_attribute_value_repeat1] = aux_sym_quoted_attribute_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_page] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inherits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preservewhitespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rendermode] = {
    .visible = true,
    .named = false,
  },
  [sym_directive_argument] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_functions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [sym_switch_case_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_area] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_base] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_br] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_col] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_embed] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_img] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_track] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wbr] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_value_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_html_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_csharp_code] = {
    .visible = true,
    .named = true,
  },
  [sym_csharp_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_expression_content] = {
    .visible = true,
    .named = true,
  },
  [sym__html_text] = {
    .visible = false,
    .named = true,
  },
  [sym__razor_comment_content] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_directive_page] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_model] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_using] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_inject] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_implements] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_inherits] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_typeparam] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_preservewhitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_rendermode] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_functions_block] = {
    .visible = true,
    .named = true,
  },
  [sym_section_block] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_anonymous_block] = {
    .visible = true,
    .named = true,
  },
  [sym_control_structure] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_razor_if] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_else_if] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_else] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_for] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_while] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_do_while] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_case] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_try] = {
    .visible = true,
    .named = true,
  },
  [sym_catch_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_finally_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_lock] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_await] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_using_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_explicit_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_html_element] = {
    .visible = true,
    .named = true,
  },
  [sym_html_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_html_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_html_self_closing_element] = {
    .visible = true,
    .named = true,
  },
  [sym_html_void_element] = {
    .visible = true,
    .named = true,
  },
  [sym__html_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_html_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_directive_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_text_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_razor_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_razor_switch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_razor_try_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_html_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 2},
  [3] =
    {field_name, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 75,
  [131] = 131,
  [132] = 68,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 200,
  [229] = 229,
  [230] = 229,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      ADVANCE_MAP(
        '"', 106,
        '\'', 107,
        '(', 24,
        ')', 25,
        '*', 10,
        '/', 8,
        ':', 27,
        ';', 26,
        '<', 31,
        '=', 103,
        '>', 32,
        '@', 18,
        'a', 143,
        'b', 113,
        'c', 138,
        'e', 136,
        'h', 141,
        'i', 134,
        'l', 130,
        'm', 124,
        'p', 118,
        's', 139,
        't', 144,
        'w', 120,
        '{', 21,
        '}', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '@') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '@') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(112);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(111);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        'a', 93,
        'b', 63,
        'c', 88,
        'e', 86,
        'h', 91,
        'i', 84,
        'l', 80,
        'm', 74,
        'p', 68,
        's', 89,
        't', 94,
        'w', 70,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(29);
      END_STATE();
    case 13:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 14:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '(') ADVANCE(30);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '{') ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_switch_case_value);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_switch_case_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_area);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_area);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_base);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_base);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_br);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_br);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_col);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_col);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_embed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_embed);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_hr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_hr);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_img);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_img);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_input);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_meta);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_param);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_source);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_track);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_track);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_wbr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_wbr);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_directive_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '@') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '@') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_STAR_AT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_html_comment);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'c', 3,
        'd', 4,
        'e', 5,
        'f', 6,
        'i', 7,
        'l', 8,
        'm', 9,
        'n', 10,
        'p', 11,
        'r', 12,
        's', 13,
        't', 14,
        'u', 15,
        'w', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'j') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_page);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_inject);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 128:
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_inherits);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 150:
      if (lookahead == 'w') ADVANCE(157);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_typeparam);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_rendermode);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_preservewhitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 15, .external_lex_state = 2},
  [2] = {.lex_state = 15, .external_lex_state = 2},
  [3] = {.lex_state = 15, .external_lex_state = 2},
  [4] = {.lex_state = 15, .external_lex_state = 2},
  [5] = {.lex_state = 15, .external_lex_state = 2},
  [6] = {.lex_state = 15, .external_lex_state = 2},
  [7] = {.lex_state = 15, .external_lex_state = 2},
  [8] = {.lex_state = 15, .external_lex_state = 2},
  [9] = {.lex_state = 15, .external_lex_state = 2},
  [10] = {.lex_state = 15, .external_lex_state = 2},
  [11] = {.lex_state = 15, .external_lex_state = 2},
  [12] = {.lex_state = 15, .external_lex_state = 2},
  [13] = {.lex_state = 15, .external_lex_state = 2},
  [14] = {.lex_state = 15, .external_lex_state = 2},
  [15] = {.lex_state = 15, .external_lex_state = 2},
  [16] = {.lex_state = 15, .external_lex_state = 2},
  [17] = {.lex_state = 15, .external_lex_state = 2},
  [18] = {.lex_state = 15, .external_lex_state = 2},
  [19] = {.lex_state = 15, .external_lex_state = 2},
  [20] = {.lex_state = 15, .external_lex_state = 2},
  [21] = {.lex_state = 15, .external_lex_state = 2},
  [22] = {.lex_state = 15, .external_lex_state = 2},
  [23] = {.lex_state = 15, .external_lex_state = 2},
  [24] = {.lex_state = 15, .external_lex_state = 2},
  [25] = {.lex_state = 15, .external_lex_state = 2},
  [26] = {.lex_state = 15, .external_lex_state = 2},
  [27] = {.lex_state = 15, .external_lex_state = 2},
  [28] = {.lex_state = 15, .external_lex_state = 2},
  [29] = {.lex_state = 15, .external_lex_state = 2},
  [30] = {.lex_state = 15, .external_lex_state = 2},
  [31] = {.lex_state = 15, .external_lex_state = 2},
  [32] = {.lex_state = 15, .external_lex_state = 2},
  [33] = {.lex_state = 15, .external_lex_state = 2},
  [34] = {.lex_state = 15, .external_lex_state = 2},
  [35] = {.lex_state = 15, .external_lex_state = 2},
  [36] = {.lex_state = 15, .external_lex_state = 2},
  [37] = {.lex_state = 15, .external_lex_state = 2},
  [38] = {.lex_state = 15, .external_lex_state = 3},
  [39] = {.lex_state = 15, .external_lex_state = 2},
  [40] = {.lex_state = 15, .external_lex_state = 2},
  [41] = {.lex_state = 15, .external_lex_state = 2},
  [42] = {.lex_state = 15, .external_lex_state = 2},
  [43] = {.lex_state = 15, .external_lex_state = 2},
  [44] = {.lex_state = 15, .external_lex_state = 2},
  [45] = {.lex_state = 15, .external_lex_state = 2},
  [46] = {.lex_state = 15, .external_lex_state = 2},
  [47] = {.lex_state = 15, .external_lex_state = 2},
  [48] = {.lex_state = 15, .external_lex_state = 2},
  [49] = {.lex_state = 15, .external_lex_state = 2},
  [50] = {.lex_state = 15, .external_lex_state = 2},
  [51] = {.lex_state = 15, .external_lex_state = 2},
  [52] = {.lex_state = 15, .external_lex_state = 2},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 15, .external_lex_state = 2},
  [55] = {.lex_state = 15, .external_lex_state = 2},
  [56] = {.lex_state = 15, .external_lex_state = 2},
  [57] = {.lex_state = 15, .external_lex_state = 2},
  [58] = {.lex_state = 15, .external_lex_state = 2},
  [59] = {.lex_state = 15, .external_lex_state = 2},
  [60] = {.lex_state = 15, .external_lex_state = 2},
  [61] = {.lex_state = 15, .external_lex_state = 2},
  [62] = {.lex_state = 15, .external_lex_state = 2},
  [63] = {.lex_state = 15, .external_lex_state = 2},
  [64] = {.lex_state = 15, .external_lex_state = 2},
  [65] = {.lex_state = 15, .external_lex_state = 2},
  [66] = {.lex_state = 15, .external_lex_state = 2},
  [67] = {.lex_state = 15, .external_lex_state = 2},
  [68] = {.lex_state = 15, .external_lex_state = 2},
  [69] = {.lex_state = 15, .external_lex_state = 2},
  [70] = {.lex_state = 15, .external_lex_state = 2},
  [71] = {.lex_state = 15, .external_lex_state = 2},
  [72] = {.lex_state = 15, .external_lex_state = 2},
  [73] = {.lex_state = 15, .external_lex_state = 2},
  [74] = {.lex_state = 15, .external_lex_state = 2},
  [75] = {.lex_state = 15, .external_lex_state = 2},
  [76] = {.lex_state = 15, .external_lex_state = 2},
  [77] = {.lex_state = 15, .external_lex_state = 2},
  [78] = {.lex_state = 15, .external_lex_state = 2},
  [79] = {.lex_state = 15, .external_lex_state = 2},
  [80] = {.lex_state = 15, .external_lex_state = 2},
  [81] = {.lex_state = 15, .external_lex_state = 2},
  [82] = {.lex_state = 15, .external_lex_state = 2},
  [83] = {.lex_state = 15, .external_lex_state = 2},
  [84] = {.lex_state = 15, .external_lex_state = 2},
  [85] = {.lex_state = 15, .external_lex_state = 2},
  [86] = {.lex_state = 15, .external_lex_state = 2},
  [87] = {.lex_state = 15, .external_lex_state = 2},
  [88] = {.lex_state = 15, .external_lex_state = 2},
  [89] = {.lex_state = 15, .external_lex_state = 2},
  [90] = {.lex_state = 15, .external_lex_state = 2},
  [91] = {.lex_state = 15, .external_lex_state = 2},
  [92] = {.lex_state = 15, .external_lex_state = 2},
  [93] = {.lex_state = 15, .external_lex_state = 2},
  [94] = {.lex_state = 15, .external_lex_state = 2},
  [95] = {.lex_state = 15, .external_lex_state = 2},
  [96] = {.lex_state = 15, .external_lex_state = 2},
  [97] = {.lex_state = 15, .external_lex_state = 2},
  [98] = {.lex_state = 15, .external_lex_state = 2},
  [99] = {.lex_state = 15, .external_lex_state = 2},
  [100] = {.lex_state = 15, .external_lex_state = 2},
  [101] = {.lex_state = 15, .external_lex_state = 2},
  [102] = {.lex_state = 15, .external_lex_state = 2},
  [103] = {.lex_state = 15, .external_lex_state = 2},
  [104] = {.lex_state = 15, .external_lex_state = 2},
  [105] = {.lex_state = 15, .external_lex_state = 2},
  [106] = {.lex_state = 15, .external_lex_state = 2},
  [107] = {.lex_state = 15, .external_lex_state = 2},
  [108] = {.lex_state = 15, .external_lex_state = 2},
  [109] = {.lex_state = 15, .external_lex_state = 2},
  [110] = {.lex_state = 15, .external_lex_state = 2},
  [111] = {.lex_state = 15, .external_lex_state = 2},
  [112] = {.lex_state = 15, .external_lex_state = 2},
  [113] = {.lex_state = 15, .external_lex_state = 2},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 15},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 15},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 6},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 6},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 6},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 6},
  [162] = {.lex_state = 0, .external_lex_state = 6},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0, .external_lex_state = 6},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0, .external_lex_state = 6},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0, .external_lex_state = 6},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0, .external_lex_state = 6},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 13},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 15},
  [216] = {.lex_state = 0, .external_lex_state = 6},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 6},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 6},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0, .external_lex_state = 6},
  [230] = {.lex_state = 0, .external_lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_page] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_inject] = ACTIONS(1),
    [anon_sym_implements] = ACTIONS(1),
    [anon_sym_inherits] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_typeparam] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_preservewhitespace] = ACTIONS(1),
    [anon_sym_rendermode] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_functions] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_AT_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_area] = ACTIONS(1),
    [anon_sym_base] = ACTIONS(1),
    [anon_sym_br] = ACTIONS(1),
    [anon_sym_col] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
    [anon_sym_hr] = ACTIONS(1),
    [anon_sym_img] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_track] = ACTIONS(1),
    [anon_sym_wbr] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_AT_STAR] = ACTIONS(1),
    [anon_sym_STAR_AT] = ACTIONS(1),
    [sym_html_comment] = ACTIONS(1),
    [sym_csharp_code] = ACTIONS(1),
    [sym_csharp_expression] = ACTIONS(1),
    [sym_implicit_expression_content] = ACTIONS(1),
    [sym__html_text] = ACTIONS(1),
    [sym__razor_comment_content] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(168),
    [sym__node] = STATE(32),
    [sym_directive] = STATE(32),
    [sym_directive_page] = STATE(63),
    [sym_directive_model] = STATE(63),
    [sym_directive_using] = STATE(63),
    [sym_directive_inject] = STATE(63),
    [sym_directive_implements] = STATE(63),
    [sym_directive_inherits] = STATE(63),
    [sym_directive_layout] = STATE(63),
    [sym_directive_namespace] = STATE(63),
    [sym_directive_typeparam] = STATE(63),
    [sym_directive_attribute] = STATE(63),
    [sym_directive_preservewhitespace] = STATE(63),
    [sym_directive_rendermode] = STATE(63),
    [sym_code_block] = STATE(32),
    [sym_functions_block] = STATE(32),
    [sym_section_block] = STATE(32),
    [sym_razor_anonymous_block] = STATE(32),
    [sym_control_structure] = STATE(32),
    [sym_razor_if] = STATE(67),
    [sym_razor_else_if] = STATE(67),
    [sym_razor_else] = STATE(67),
    [sym_razor_foreach] = STATE(67),
    [sym_razor_for] = STATE(67),
    [sym_razor_while] = STATE(67),
    [sym_razor_do_while] = STATE(67),
    [sym_razor_switch] = STATE(67),
    [sym_razor_try] = STATE(67),
    [sym_razor_lock] = STATE(67),
    [sym_razor_await] = STATE(67),
    [sym_razor_using_statement] = STATE(67),
    [sym_explicit_expression] = STATE(32),
    [sym_implicit_expression] = STATE(32),
    [sym_html_element] = STATE(32),
    [sym_html_start_tag] = STATE(8),
    [sym_html_self_closing_element] = STATE(32),
    [sym_html_void_element] = STATE(32),
    [sym_razor_comment] = STATE(32),
    [sym_text_content] = STATE(32),
    [aux_sym_document_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_AT_LBRACE] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_AT_STAR] = ACTIONS(15),
    [sym_html_comment] = ACTIONS(17),
    [sym__html_text] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(26), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_else,
    ACTIONS(32), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(38), 1,
      anon_sym_AT_STAR,
    ACTIONS(41), 1,
      sym_html_comment,
    ACTIONS(44), 1,
      sym__html_text,
    STATE(8), 1,
      sym_html_start_tag,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_LT_SLASH,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [81] = 14,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(49), 1,
      anon_sym_break,
    ACTIONS(51), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    ACTIONS(47), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(5), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [162] = 14,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(57), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    ACTIONS(53), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(6), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [243] = 14,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    ACTIONS(53), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [324] = 14,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(63), 1,
      anon_sym_break,
    STATE(8), 1,
      sym_html_start_tag,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [405] = 14,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(65), 1,
      anon_sym_LT_SLASH,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(72), 1,
      sym_html_end_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [484] = 14,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(65), 1,
      anon_sym_LT_SLASH,
    ACTIONS(67), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(105), 1,
      sym_html_end_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(7), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [563] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(29), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [639] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [715] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [791] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [867] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(22), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [943] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(23), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1019] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(24), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1095] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(25), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1171] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(26), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1247] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(27), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1323] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(28), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1399] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(34), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1475] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(30), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1551] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1627] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1703] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1779] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1855] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [1931] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2007] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2083] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2159] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2235] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(10), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2311] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2387] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(11), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2463] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2539] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(37), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2615] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 1,
      sym_html_comment,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(12), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2691] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(19), 1,
      sym__html_text,
    ACTIONS(59), 1,
      sym_html_comment,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_html_start_tag,
    STATE(63), 12,
      sym_directive_page,
      sym_directive_model,
      sym_directive_using,
      sym_directive_inject,
      sym_directive_implements,
      sym_directive_inherits,
      sym_directive_layout,
      sym_directive_namespace,
      sym_directive_typeparam,
      sym_directive_attribute,
      sym_directive_preservewhitespace,
      sym_directive_rendermode,
    STATE(67), 12,
      sym_razor_if,
      sym_razor_else_if,
      sym_razor_else,
      sym_razor_foreach,
      sym_razor_for,
      sym_razor_while,
      sym_razor_do_while,
      sym_razor_switch,
      sym_razor_try,
      sym_razor_lock,
      sym_razor_await,
      sym_razor_using_statement,
    STATE(2), 15,
      sym__node,
      sym_directive,
      sym_code_block,
      sym_functions_block,
      sym_section_block,
      sym_razor_anonymous_block,
      sym_control_structure,
      sym_explicit_expression,
      sym_implicit_expression,
      sym_html_element,
      sym_html_self_closing_element,
      sym_html_void_element,
      sym_razor_comment,
      sym_text_content,
      aux_sym_document_repeat1,
  [2767] = 25,
    ACTIONS(155), 1,
      anon_sym_page,
    ACTIONS(157), 1,
      anon_sym_model,
    ACTIONS(159), 1,
      anon_sym_using,
    ACTIONS(161), 1,
      anon_sym_inject,
    ACTIONS(163), 1,
      anon_sym_implements,
    ACTIONS(165), 1,
      anon_sym_inherits,
    ACTIONS(167), 1,
      anon_sym_layout,
    ACTIONS(169), 1,
      anon_sym_namespace,
    ACTIONS(171), 1,
      anon_sym_typeparam,
    ACTIONS(173), 1,
      anon_sym_attribute,
    ACTIONS(175), 1,
      anon_sym_preservewhitespace,
    ACTIONS(177), 1,
      anon_sym_rendermode,
    ACTIONS(179), 1,
      anon_sym_code,
    ACTIONS(181), 1,
      anon_sym_functions,
    ACTIONS(183), 1,
      anon_sym_section,
    ACTIONS(185), 1,
      anon_sym_if,
    ACTIONS(187), 1,
      anon_sym_foreach,
    ACTIONS(189), 1,
      anon_sym_for,
    ACTIONS(191), 1,
      anon_sym_while,
    ACTIONS(193), 1,
      anon_sym_do,
    ACTIONS(195), 1,
      anon_sym_switch,
    ACTIONS(197), 1,
      anon_sym_try,
    ACTIONS(199), 1,
      anon_sym_lock,
    ACTIONS(201), 1,
      anon_sym_await,
    ACTIONS(203), 1,
      sym_implicit_expression_content,
  [2843] = 6,
    ACTIONS(209), 1,
      anon_sym_catch,
    ACTIONS(211), 1,
      anon_sym_finally,
    STATE(85), 1,
      sym_finally_clause,
    ACTIONS(207), 2,
      anon_sym_AT,
      anon_sym_LT,
    STATE(43), 2,
      sym_catch_clause,
      aux_sym_razor_try_repeat1,
    ACTIONS(205), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [2875] = 6,
    ACTIONS(209), 1,
      anon_sym_catch,
    ACTIONS(211), 1,
      anon_sym_finally,
    STATE(85), 1,
      sym_finally_clause,
    ACTIONS(207), 2,
      anon_sym_AT,
      anon_sym_LT,
    STATE(41), 2,
      sym_catch_clause,
      aux_sym_razor_try_repeat1,
    ACTIONS(205), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [2907] = 6,
    ACTIONS(209), 1,
      anon_sym_catch,
    ACTIONS(211), 1,
      anon_sym_finally,
    STATE(92), 1,
      sym_finally_clause,
    ACTIONS(215), 2,
      anon_sym_AT,
      anon_sym_LT,
    STATE(43), 2,
      sym_catch_clause,
      aux_sym_razor_try_repeat1,
    ACTIONS(213), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [2939] = 6,
    ACTIONS(209), 1,
      anon_sym_catch,
    ACTIONS(211), 1,
      anon_sym_finally,
    STATE(83), 1,
      sym_finally_clause,
    ACTIONS(219), 2,
      anon_sym_AT,
      anon_sym_LT,
    STATE(39), 2,
      sym_catch_clause,
      aux_sym_razor_try_repeat1,
    ACTIONS(217), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [2971] = 4,
    ACTIONS(225), 1,
      anon_sym_catch,
    ACTIONS(223), 2,
      anon_sym_AT,
      anon_sym_LT,
    STATE(43), 2,
      sym_catch_clause,
      aux_sym_razor_try_repeat1,
    ACTIONS(221), 13,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_finally,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [2998] = 4,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(230), 2,
      anon_sym_AT,
      anon_sym_LT,
    STATE(46), 3,
      sym_razor_else_if,
      sym_razor_else,
      aux_sym_razor_if_repeat1,
    ACTIONS(228), 11,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3024] = 4,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(230), 2,
      anon_sym_AT,
      anon_sym_LT,
    STATE(47), 3,
      sym_razor_else_if,
      sym_razor_else,
      aux_sym_razor_if_repeat1,
    ACTIONS(228), 11,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3050] = 4,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(234), 2,
      anon_sym_AT,
      anon_sym_LT,
    STATE(47), 3,
      sym_razor_else_if,
      sym_razor_else,
      aux_sym_razor_if_repeat1,
    ACTIONS(232), 11,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3076] = 4,
    ACTIONS(240), 1,
      anon_sym_else,
    ACTIONS(238), 2,
      anon_sym_AT,
      anon_sym_LT,
    STATE(47), 3,
      sym_razor_else_if,
      sym_razor_else,
      aux_sym_razor_if_repeat1,
    ACTIONS(236), 11,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3102] = 4,
    ACTIONS(9), 1,
      anon_sym_else,
    ACTIONS(245), 2,
      anon_sym_AT,
      anon_sym_LT,
    STATE(45), 3,
      sym_razor_else_if,
      sym_razor_else,
      aux_sym_razor_if_repeat1,
    ACTIONS(243), 11,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3128] = 2,
    ACTIONS(249), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(247), 14,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_catch,
      anon_sym_finally,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3149] = 2,
    ACTIONS(253), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(251), 14,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_catch,
      anon_sym_finally,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3170] = 2,
    ACTIONS(257), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(255), 14,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_catch,
      anon_sym_finally,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3191] = 2,
    ACTIONS(261), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(259), 14,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_catch,
      anon_sym_finally,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3212] = 2,
    ACTIONS(265), 1,
      sym_tag_name,
    ACTIONS(263), 14,
      anon_sym_area,
      anon_sym_base,
      anon_sym_br,
      anon_sym_col,
      anon_sym_embed,
      anon_sym_hr,
      anon_sym_img,
      anon_sym_input,
      anon_sym_link,
      anon_sym_meta,
      anon_sym_param,
      anon_sym_source,
      anon_sym_track,
      anon_sym_wbr,
  [3232] = 2,
    ACTIONS(269), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(267), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3251] = 2,
    ACTIONS(273), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(271), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3270] = 2,
    ACTIONS(277), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(275), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3289] = 2,
    ACTIONS(281), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(279), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3308] = 2,
    ACTIONS(285), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(283), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3327] = 2,
    ACTIONS(289), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(287), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3346] = 2,
    ACTIONS(293), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(291), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3365] = 2,
    ACTIONS(297), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(295), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3384] = 2,
    ACTIONS(301), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(299), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3403] = 2,
    ACTIONS(305), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(303), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3422] = 2,
    ACTIONS(309), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(307), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3441] = 2,
    ACTIONS(313), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(311), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3460] = 2,
    ACTIONS(317), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(315), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3479] = 2,
    ACTIONS(321), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(319), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3498] = 2,
    ACTIONS(325), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(323), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3517] = 2,
    ACTIONS(329), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(327), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3536] = 2,
    ACTIONS(333), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(331), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3555] = 2,
    ACTIONS(337), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(335), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3574] = 2,
    ACTIONS(341), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(339), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3593] = 2,
    ACTIONS(345), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(343), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3612] = 2,
    ACTIONS(349), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(347), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3631] = 2,
    ACTIONS(353), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(351), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3650] = 2,
    ACTIONS(357), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(355), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3669] = 2,
    ACTIONS(361), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(359), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3688] = 2,
    ACTIONS(365), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(363), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3707] = 2,
    ACTIONS(369), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(367), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3726] = 2,
    ACTIONS(373), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(371), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3745] = 2,
    ACTIONS(377), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(375), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3764] = 2,
    ACTIONS(381), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(379), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3783] = 2,
    ACTIONS(207), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(205), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3802] = 2,
    ACTIONS(385), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(383), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3821] = 2,
    ACTIONS(215), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(213), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3840] = 2,
    ACTIONS(389), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(387), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3859] = 2,
    ACTIONS(393), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(391), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3878] = 2,
    ACTIONS(397), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(395), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3897] = 2,
    ACTIONS(401), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(399), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3916] = 2,
    ACTIONS(405), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(403), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3935] = 2,
    ACTIONS(409), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(407), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3954] = 2,
    ACTIONS(413), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(411), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3973] = 2,
    ACTIONS(417), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(415), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [3992] = 2,
    ACTIONS(421), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(419), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4011] = 2,
    ACTIONS(425), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(423), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4030] = 2,
    ACTIONS(429), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(427), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4049] = 2,
    ACTIONS(433), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(431), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4068] = 2,
    ACTIONS(437), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(435), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4087] = 2,
    ACTIONS(441), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(439), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4106] = 2,
    ACTIONS(445), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(443), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4125] = 2,
    ACTIONS(449), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(447), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4144] = 2,
    ACTIONS(453), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(451), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4163] = 2,
    ACTIONS(457), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(455), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4182] = 2,
    ACTIONS(461), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(459), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4201] = 2,
    ACTIONS(465), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(463), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4220] = 2,
    ACTIONS(469), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(467), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4239] = 2,
    ACTIONS(473), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(471), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4258] = 2,
    ACTIONS(477), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(475), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4277] = 2,
    ACTIONS(481), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(479), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4296] = 2,
    ACTIONS(485), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(483), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4315] = 2,
    ACTIONS(489), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(487), 12,
      sym__html_text,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
      anon_sym_break,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4334] = 2,
    ACTIONS(491), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(493), 7,
      sym__html_text,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4348] = 2,
    ACTIONS(495), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(497), 7,
      sym__html_text,
      anon_sym_AT_LBRACE,
      anon_sym_else,
      anon_sym_AT_LPAREN,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      sym_html_comment,
  [4362] = 4,
    ACTIONS(501), 1,
      sym_attribute_name,
    ACTIONS(504), 1,
      sym_directive_attribute_name,
    ACTIONS(499), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(114), 4,
      sym__html_attribute,
      sym_html_attribute,
      sym_razor_directive_attribute,
      aux_sym_html_start_tag_repeat1,
  [4379] = 4,
    ACTIONS(509), 1,
      sym_attribute_name,
    ACTIONS(511), 1,
      sym_directive_attribute_name,
    ACTIONS(507), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(114), 4,
      sym__html_attribute,
      sym_html_attribute,
      sym_razor_directive_attribute,
      aux_sym_html_start_tag_repeat1,
  [4396] = 5,
    ACTIONS(513), 1,
      anon_sym_AT,
    ACTIONS(516), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(521), 1,
      sym_attribute_value_content,
    ACTIONS(519), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(116), 3,
      sym_explicit_expression,
      sym_implicit_expression,
      aux_sym_quoted_attribute_value_repeat1,
  [4415] = 5,
    ACTIONS(509), 1,
      sym_attribute_name,
    ACTIONS(511), 1,
      sym_directive_attribute_name,
    ACTIONS(524), 1,
      anon_sym_GT,
    ACTIONS(526), 1,
      anon_sym_SLASH_GT,
    STATE(114), 4,
      sym__html_attribute,
      sym_html_attribute,
      sym_razor_directive_attribute,
      aux_sym_html_start_tag_repeat1,
  [4434] = 4,
    ACTIONS(509), 1,
      sym_attribute_name,
    ACTIONS(511), 1,
      sym_directive_attribute_name,
    ACTIONS(528), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(115), 4,
      sym__html_attribute,
      sym_html_attribute,
      sym_razor_directive_attribute,
      aux_sym_html_start_tag_repeat1,
  [4451] = 5,
    ACTIONS(509), 1,
      sym_attribute_name,
    ACTIONS(511), 1,
      sym_directive_attribute_name,
    ACTIONS(530), 1,
      anon_sym_GT,
    ACTIONS(532), 1,
      anon_sym_SLASH_GT,
    STATE(117), 4,
      sym__html_attribute,
      sym_html_attribute,
      sym_razor_directive_attribute,
      aux_sym_html_start_tag_repeat1,
  [4470] = 5,
    ACTIONS(534), 1,
      anon_sym_AT,
    ACTIONS(536), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(538), 1,
      anon_sym_SQUOTE,
    ACTIONS(540), 1,
      sym_attribute_value_content,
    STATE(123), 3,
      sym_explicit_expression,
      sym_implicit_expression,
      aux_sym_quoted_attribute_value_repeat1,
  [4488] = 5,
    ACTIONS(534), 1,
      anon_sym_AT,
    ACTIONS(536), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      sym_attribute_value_content,
    STATE(122), 3,
      sym_explicit_expression,
      sym_implicit_expression,
      aux_sym_quoted_attribute_value_repeat1,
  [4506] = 5,
    ACTIONS(534), 1,
      anon_sym_AT,
    ACTIONS(536), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(544), 1,
      anon_sym_DQUOTE,
    ACTIONS(546), 1,
      sym_attribute_value_content,
    STATE(116), 3,
      sym_explicit_expression,
      sym_implicit_expression,
      aux_sym_quoted_attribute_value_repeat1,
  [4524] = 5,
    ACTIONS(534), 1,
      anon_sym_AT,
    ACTIONS(536), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      sym_attribute_value_content,
    STATE(116), 3,
      sym_explicit_expression,
      sym_implicit_expression,
      aux_sym_quoted_attribute_value_repeat1,
  [4542] = 4,
    ACTIONS(548), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(550), 1,
      anon_sym_DQUOTE,
    ACTIONS(552), 1,
      anon_sym_SQUOTE,
    STATE(133), 3,
      sym__attribute_value,
      sym_quoted_attribute_value,
      sym_expression_attribute_value,
  [4557] = 4,
    ACTIONS(548), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(550), 1,
      anon_sym_DQUOTE,
    ACTIONS(552), 1,
      anon_sym_SQUOTE,
    STATE(134), 3,
      sym__attribute_value,
      sym_quoted_attribute_value,
      sym_expression_attribute_value,
  [4572] = 4,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(556), 1,
      anon_sym_case,
    ACTIONS(558), 1,
      anon_sym_default,
    STATE(129), 2,
      sym_switch_case,
      aux_sym_razor_switch_repeat1,
  [4586] = 2,
    ACTIONS(562), 1,
      anon_sym_EQ,
    ACTIONS(560), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      sym_directive_attribute_name,
  [4596] = 2,
    ACTIONS(566), 1,
      anon_sym_EQ,
    ACTIONS(564), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      sym_directive_attribute_name,
  [4606] = 4,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
    ACTIONS(570), 1,
      anon_sym_case,
    ACTIONS(573), 1,
      anon_sym_default,
    STATE(129), 2,
      sym_switch_case,
      aux_sym_razor_switch_repeat1,
  [4620] = 2,
    ACTIONS(351), 1,
      sym_attribute_value_content,
    ACTIONS(353), 4,
      anon_sym_AT,
      anon_sym_AT_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4630] = 4,
    ACTIONS(556), 1,
      anon_sym_case,
    ACTIONS(558), 1,
      anon_sym_default,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
    STATE(126), 2,
      sym_switch_case,
      aux_sym_razor_switch_repeat1,
  [4644] = 2,
    ACTIONS(323), 1,
      sym_attribute_value_content,
    ACTIONS(325), 4,
      anon_sym_AT,
      anon_sym_AT_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4654] = 1,
    ACTIONS(578), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      sym_directive_attribute_name,
  [4661] = 1,
    ACTIONS(580), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      sym_directive_attribute_name,
  [4668] = 1,
    ACTIONS(582), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      sym_directive_attribute_name,
  [4675] = 1,
    ACTIONS(584), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      sym_directive_attribute_name,
  [4682] = 1,
    ACTIONS(586), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      sym_directive_attribute_name,
  [4689] = 1,
    ACTIONS(588), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4695] = 1,
    ACTIONS(590), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4701] = 1,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4707] = 2,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      anon_sym_if,
  [4714] = 2,
    ACTIONS(596), 1,
      anon_sym_RBRACE,
    ACTIONS(598), 1,
      sym_csharp_code,
  [4721] = 2,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
  [4728] = 2,
    ACTIONS(604), 1,
      sym_directive_argument,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
  [4735] = 2,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(610), 1,
      sym_csharp_code,
  [4742] = 2,
    ACTIONS(612), 1,
      anon_sym_STAR_AT,
    ACTIONS(614), 1,
      sym__razor_comment_content,
  [4749] = 2,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    ACTIONS(618), 1,
      sym_csharp_code,
  [4756] = 1,
    ACTIONS(620), 1,
      sym_csharp_expression,
  [4760] = 1,
    ACTIONS(622), 1,
      sym_directive_argument,
  [4764] = 1,
    ACTIONS(624), 1,
      sym_csharp_expression,
  [4768] = 1,
    ACTIONS(626), 1,
      sym_directive_argument,
  [4772] = 1,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
  [4776] = 1,
    ACTIONS(630), 1,
      sym_directive_argument,
  [4780] = 1,
    ACTIONS(632), 1,
      anon_sym_LBRACE,
  [4784] = 1,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
  [4788] = 1,
    ACTIONS(636), 1,
      sym_identifier,
  [4792] = 1,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
  [4796] = 1,
    ACTIONS(640), 1,
      sym_implicit_expression_content,
  [4800] = 1,
    ACTIONS(642), 1,
      sym_csharp_expression,
  [4804] = 1,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
  [4808] = 1,
    ACTIONS(646), 1,
      sym_csharp_expression,
  [4812] = 1,
    ACTIONS(648), 1,
      sym_csharp_expression,
  [4816] = 1,
    ACTIONS(650), 1,
      anon_sym_LPAREN,
  [4820] = 1,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
  [4824] = 1,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
  [4828] = 1,
    ACTIONS(656), 1,
      anon_sym_GT,
  [4832] = 1,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
  [4836] = 1,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
  [4840] = 1,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
  [4844] = 1,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
  [4848] = 1,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
  [4852] = 1,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
  [4856] = 1,
    ACTIONS(670), 1,
      sym_csharp_expression,
  [4860] = 1,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [4864] = 1,
    ACTIONS(674), 1,
      sym_switch_case_value,
  [4868] = 1,
    ACTIONS(676), 1,
      anon_sym_COLON,
  [4872] = 1,
    ACTIONS(678), 1,
      sym_csharp_expression,
  [4876] = 1,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
  [4880] = 1,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
  [4884] = 1,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
  [4888] = 1,
    ACTIONS(686), 1,
      anon_sym_LBRACE,
  [4892] = 1,
    ACTIONS(688), 1,
      sym_implicit_expression_content,
  [4896] = 1,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
  [4900] = 1,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
  [4904] = 1,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
  [4908] = 1,
    ACTIONS(696), 1,
      sym_csharp_expression,
  [4912] = 1,
    ACTIONS(698), 1,
      sym_directive_argument,
  [4916] = 1,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
  [4920] = 1,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
  [4924] = 1,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
  [4928] = 1,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
  [4932] = 1,
    ACTIONS(708), 1,
      sym_directive_argument,
  [4936] = 1,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
  [4940] = 1,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
  [4944] = 1,
    ACTIONS(714), 1,
      anon_sym_while,
  [4948] = 1,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
  [4952] = 1,
    ACTIONS(718), 1,
      anon_sym_SEMI,
  [4956] = 1,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [4960] = 1,
    ACTIONS(722), 1,
      anon_sym_COLON,
  [4964] = 1,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
  [4968] = 1,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
  [4972] = 1,
    ACTIONS(728), 1,
      anon_sym_LBRACE,
  [4976] = 1,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
  [4980] = 1,
    ACTIONS(732), 1,
      anon_sym_LBRACE,
  [4984] = 1,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
  [4988] = 1,
    ACTIONS(736), 1,
      sym_directive_argument,
  [4992] = 1,
    ACTIONS(738), 1,
      anon_sym_LBRACE,
  [4996] = 1,
    ACTIONS(740), 1,
      anon_sym_STAR_AT,
  [5000] = 1,
    ACTIONS(742), 1,
      anon_sym_LBRACE,
  [5004] = 1,
    ACTIONS(744), 1,
      sym_csharp_expression,
  [5008] = 1,
    ACTIONS(746), 1,
      anon_sym_SEMI,
  [5012] = 1,
    ACTIONS(748), 1,
      sym_tag_name,
  [5016] = 1,
    ACTIONS(750), 1,
      anon_sym_SEMI,
  [5020] = 1,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
  [5024] = 1,
    ACTIONS(754), 1,
      anon_sym_while,
  [5028] = 1,
    ACTIONS(756), 1,
      sym_csharp_expression,
  [5032] = 1,
    ACTIONS(758), 1,
      anon_sym_SEMI,
  [5036] = 1,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
  [5040] = 1,
    ACTIONS(762), 1,
      sym_directive_argument,
  [5044] = 1,
    ACTIONS(764), 1,
      sym_csharp_expression,
  [5048] = 1,
    ACTIONS(766), 1,
      sym_directive_argument,
  [5052] = 1,
    ACTIONS(768), 1,
      sym_directive_argument,
  [5056] = 1,
    ACTIONS(770), 1,
      anon_sym_SEMI,
  [5060] = 1,
    ACTIONS(772), 1,
      sym_directive_argument,
  [5064] = 1,
    ACTIONS(774), 1,
      sym_directive_argument,
  [5068] = 1,
    ACTIONS(776), 1,
      sym_csharp_expression,
  [5072] = 1,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
  [5076] = 1,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
  [5080] = 1,
    ACTIONS(782), 1,
      sym_csharp_expression,
  [5084] = 1,
    ACTIONS(784), 1,
      sym_csharp_expression,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 405,
  [SMALL_STATE(8)] = 484,
  [SMALL_STATE(9)] = 563,
  [SMALL_STATE(10)] = 639,
  [SMALL_STATE(11)] = 715,
  [SMALL_STATE(12)] = 791,
  [SMALL_STATE(13)] = 867,
  [SMALL_STATE(14)] = 943,
  [SMALL_STATE(15)] = 1019,
  [SMALL_STATE(16)] = 1095,
  [SMALL_STATE(17)] = 1171,
  [SMALL_STATE(18)] = 1247,
  [SMALL_STATE(19)] = 1323,
  [SMALL_STATE(20)] = 1399,
  [SMALL_STATE(21)] = 1475,
  [SMALL_STATE(22)] = 1551,
  [SMALL_STATE(23)] = 1627,
  [SMALL_STATE(24)] = 1703,
  [SMALL_STATE(25)] = 1779,
  [SMALL_STATE(26)] = 1855,
  [SMALL_STATE(27)] = 1931,
  [SMALL_STATE(28)] = 2007,
  [SMALL_STATE(29)] = 2083,
  [SMALL_STATE(30)] = 2159,
  [SMALL_STATE(31)] = 2235,
  [SMALL_STATE(32)] = 2311,
  [SMALL_STATE(33)] = 2387,
  [SMALL_STATE(34)] = 2463,
  [SMALL_STATE(35)] = 2539,
  [SMALL_STATE(36)] = 2615,
  [SMALL_STATE(37)] = 2691,
  [SMALL_STATE(38)] = 2767,
  [SMALL_STATE(39)] = 2843,
  [SMALL_STATE(40)] = 2875,
  [SMALL_STATE(41)] = 2907,
  [SMALL_STATE(42)] = 2939,
  [SMALL_STATE(43)] = 2971,
  [SMALL_STATE(44)] = 2998,
  [SMALL_STATE(45)] = 3024,
  [SMALL_STATE(46)] = 3050,
  [SMALL_STATE(47)] = 3076,
  [SMALL_STATE(48)] = 3102,
  [SMALL_STATE(49)] = 3128,
  [SMALL_STATE(50)] = 3149,
  [SMALL_STATE(51)] = 3170,
  [SMALL_STATE(52)] = 3191,
  [SMALL_STATE(53)] = 3212,
  [SMALL_STATE(54)] = 3232,
  [SMALL_STATE(55)] = 3251,
  [SMALL_STATE(56)] = 3270,
  [SMALL_STATE(57)] = 3289,
  [SMALL_STATE(58)] = 3308,
  [SMALL_STATE(59)] = 3327,
  [SMALL_STATE(60)] = 3346,
  [SMALL_STATE(61)] = 3365,
  [SMALL_STATE(62)] = 3384,
  [SMALL_STATE(63)] = 3403,
  [SMALL_STATE(64)] = 3422,
  [SMALL_STATE(65)] = 3441,
  [SMALL_STATE(66)] = 3460,
  [SMALL_STATE(67)] = 3479,
  [SMALL_STATE(68)] = 3498,
  [SMALL_STATE(69)] = 3517,
  [SMALL_STATE(70)] = 3536,
  [SMALL_STATE(71)] = 3555,
  [SMALL_STATE(72)] = 3574,
  [SMALL_STATE(73)] = 3593,
  [SMALL_STATE(74)] = 3612,
  [SMALL_STATE(75)] = 3631,
  [SMALL_STATE(76)] = 3650,
  [SMALL_STATE(77)] = 3669,
  [SMALL_STATE(78)] = 3688,
  [SMALL_STATE(79)] = 3707,
  [SMALL_STATE(80)] = 3726,
  [SMALL_STATE(81)] = 3745,
  [SMALL_STATE(82)] = 3764,
  [SMALL_STATE(83)] = 3783,
  [SMALL_STATE(84)] = 3802,
  [SMALL_STATE(85)] = 3821,
  [SMALL_STATE(86)] = 3840,
  [SMALL_STATE(87)] = 3859,
  [SMALL_STATE(88)] = 3878,
  [SMALL_STATE(89)] = 3897,
  [SMALL_STATE(90)] = 3916,
  [SMALL_STATE(91)] = 3935,
  [SMALL_STATE(92)] = 3954,
  [SMALL_STATE(93)] = 3973,
  [SMALL_STATE(94)] = 3992,
  [SMALL_STATE(95)] = 4011,
  [SMALL_STATE(96)] = 4030,
  [SMALL_STATE(97)] = 4049,
  [SMALL_STATE(98)] = 4068,
  [SMALL_STATE(99)] = 4087,
  [SMALL_STATE(100)] = 4106,
  [SMALL_STATE(101)] = 4125,
  [SMALL_STATE(102)] = 4144,
  [SMALL_STATE(103)] = 4163,
  [SMALL_STATE(104)] = 4182,
  [SMALL_STATE(105)] = 4201,
  [SMALL_STATE(106)] = 4220,
  [SMALL_STATE(107)] = 4239,
  [SMALL_STATE(108)] = 4258,
  [SMALL_STATE(109)] = 4277,
  [SMALL_STATE(110)] = 4296,
  [SMALL_STATE(111)] = 4315,
  [SMALL_STATE(112)] = 4334,
  [SMALL_STATE(113)] = 4348,
  [SMALL_STATE(114)] = 4362,
  [SMALL_STATE(115)] = 4379,
  [SMALL_STATE(116)] = 4396,
  [SMALL_STATE(117)] = 4415,
  [SMALL_STATE(118)] = 4434,
  [SMALL_STATE(119)] = 4451,
  [SMALL_STATE(120)] = 4470,
  [SMALL_STATE(121)] = 4488,
  [SMALL_STATE(122)] = 4506,
  [SMALL_STATE(123)] = 4524,
  [SMALL_STATE(124)] = 4542,
  [SMALL_STATE(125)] = 4557,
  [SMALL_STATE(126)] = 4572,
  [SMALL_STATE(127)] = 4586,
  [SMALL_STATE(128)] = 4596,
  [SMALL_STATE(129)] = 4606,
  [SMALL_STATE(130)] = 4620,
  [SMALL_STATE(131)] = 4630,
  [SMALL_STATE(132)] = 4644,
  [SMALL_STATE(133)] = 4654,
  [SMALL_STATE(134)] = 4661,
  [SMALL_STATE(135)] = 4668,
  [SMALL_STATE(136)] = 4675,
  [SMALL_STATE(137)] = 4682,
  [SMALL_STATE(138)] = 4689,
  [SMALL_STATE(139)] = 4695,
  [SMALL_STATE(140)] = 4701,
  [SMALL_STATE(141)] = 4707,
  [SMALL_STATE(142)] = 4714,
  [SMALL_STATE(143)] = 4721,
  [SMALL_STATE(144)] = 4728,
  [SMALL_STATE(145)] = 4735,
  [SMALL_STATE(146)] = 4742,
  [SMALL_STATE(147)] = 4749,
  [SMALL_STATE(148)] = 4756,
  [SMALL_STATE(149)] = 4760,
  [SMALL_STATE(150)] = 4764,
  [SMALL_STATE(151)] = 4768,
  [SMALL_STATE(152)] = 4772,
  [SMALL_STATE(153)] = 4776,
  [SMALL_STATE(154)] = 4780,
  [SMALL_STATE(155)] = 4784,
  [SMALL_STATE(156)] = 4788,
  [SMALL_STATE(157)] = 4792,
  [SMALL_STATE(158)] = 4796,
  [SMALL_STATE(159)] = 4800,
  [SMALL_STATE(160)] = 4804,
  [SMALL_STATE(161)] = 4808,
  [SMALL_STATE(162)] = 4812,
  [SMALL_STATE(163)] = 4816,
  [SMALL_STATE(164)] = 4820,
  [SMALL_STATE(165)] = 4824,
  [SMALL_STATE(166)] = 4828,
  [SMALL_STATE(167)] = 4832,
  [SMALL_STATE(168)] = 4836,
  [SMALL_STATE(169)] = 4840,
  [SMALL_STATE(170)] = 4844,
  [SMALL_STATE(171)] = 4848,
  [SMALL_STATE(172)] = 4852,
  [SMALL_STATE(173)] = 4856,
  [SMALL_STATE(174)] = 4860,
  [SMALL_STATE(175)] = 4864,
  [SMALL_STATE(176)] = 4868,
  [SMALL_STATE(177)] = 4872,
  [SMALL_STATE(178)] = 4876,
  [SMALL_STATE(179)] = 4880,
  [SMALL_STATE(180)] = 4884,
  [SMALL_STATE(181)] = 4888,
  [SMALL_STATE(182)] = 4892,
  [SMALL_STATE(183)] = 4896,
  [SMALL_STATE(184)] = 4900,
  [SMALL_STATE(185)] = 4904,
  [SMALL_STATE(186)] = 4908,
  [SMALL_STATE(187)] = 4912,
  [SMALL_STATE(188)] = 4916,
  [SMALL_STATE(189)] = 4920,
  [SMALL_STATE(190)] = 4924,
  [SMALL_STATE(191)] = 4928,
  [SMALL_STATE(192)] = 4932,
  [SMALL_STATE(193)] = 4936,
  [SMALL_STATE(194)] = 4940,
  [SMALL_STATE(195)] = 4944,
  [SMALL_STATE(196)] = 4948,
  [SMALL_STATE(197)] = 4952,
  [SMALL_STATE(198)] = 4956,
  [SMALL_STATE(199)] = 4960,
  [SMALL_STATE(200)] = 4964,
  [SMALL_STATE(201)] = 4968,
  [SMALL_STATE(202)] = 4972,
  [SMALL_STATE(203)] = 4976,
  [SMALL_STATE(204)] = 4980,
  [SMALL_STATE(205)] = 4984,
  [SMALL_STATE(206)] = 4988,
  [SMALL_STATE(207)] = 4992,
  [SMALL_STATE(208)] = 4996,
  [SMALL_STATE(209)] = 5000,
  [SMALL_STATE(210)] = 5004,
  [SMALL_STATE(211)] = 5008,
  [SMALL_STATE(212)] = 5012,
  [SMALL_STATE(213)] = 5016,
  [SMALL_STATE(214)] = 5020,
  [SMALL_STATE(215)] = 5024,
  [SMALL_STATE(216)] = 5028,
  [SMALL_STATE(217)] = 5032,
  [SMALL_STATE(218)] = 5036,
  [SMALL_STATE(219)] = 5040,
  [SMALL_STATE(220)] = 5044,
  [SMALL_STATE(221)] = 5048,
  [SMALL_STATE(222)] = 5052,
  [SMALL_STATE(223)] = 5056,
  [SMALL_STATE(224)] = 5060,
  [SMALL_STATE(225)] = 5064,
  [SMALL_STATE(226)] = 5068,
  [SMALL_STATE(227)] = 5072,
  [SMALL_STATE(228)] = 5076,
  [SMALL_STATE(229)] = 5080,
  [SMALL_STATE(230)] = 5084,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_try, 5, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_try, 5, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_try, 6, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_try, 6, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_try, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_try, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_try_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_try_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_razor_try_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_if, 8, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_if, 8, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_if, 9, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_if, 9, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_if_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_if_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_razor_if_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_if, 7, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_if, 7, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_clause, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_clause, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_clause, 6, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_clause, 6, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_clause, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_clause, 4, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_clause, 7, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_clause, 7, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_else_if, 8, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_else_if, 8, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_implements, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_implements, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_inherits, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_inherits, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_layout, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_layout, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_inject, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_inject, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_typeparam, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_typeparam, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_preservewhitespace, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_preservewhitespace, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_rendermode, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_rendermode, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_await, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_await, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_anonymous_block, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_anonymous_block, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_else, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_else, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_structure, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_structure, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_expression, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_expression, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_void_element, 3, 0, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_void_element, 3, 0, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_self_closing_element, 3, 0, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_self_closing_element, 3, 0, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_element, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_element, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 4, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 4, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_expression, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_expression, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_else, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_else, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_void_element, 4, 0, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_void_element, 4, 0, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_self_closing_element, 4, 0, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_self_closing_element, 4, 0, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_end_tag, 3, 0, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_end_tag, 3, 0, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 5, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 5, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 5, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 5, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_block, 5, 0, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_block, 5, 0, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_block, 6, 0, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_block, 6, 0, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_using_statement, 7, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_using_statement, 7, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_foreach, 7, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_foreach, 7, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_for, 7, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_for, 7, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_while, 7, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_while, 7, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_switch, 7, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_switch, 7, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finally_clause, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_clause, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_try, 7, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_try, 7, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_lock, 7, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_lock, 7, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_else_if, 7, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_else_if, 7, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_anonymous_block, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_anonymous_block, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_using_statement, 8, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_using_statement, 8, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_foreach, 8, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_foreach, 8, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_for, 8, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_for, 8, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_while, 8, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_while, 8, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_switch, 8, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_switch, 8, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finally_clause, 4, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_clause, 4, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_lock, 8, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_lock, 8, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_comment, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_do_while, 9, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_do_while, 9, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_element, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_element, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_content, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_content, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_do_while, 10, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_do_while, 10, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_page, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_page, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_model, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_model, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_using, 3, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_using, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_namespace, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_namespace, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_start_tag, 4, 0, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_start_tag, 4, 0, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_start_tag, 3, 0, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_start_tag, 3, 0, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_html_start_tag_repeat1, 2, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_html_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_html_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_directive_attribute, 1, 0, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_attribute, 1, 0, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_switch_repeat1, 2, 0, 0),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_razor_switch_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_razor_switch_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_directive_attribute, 3, 0, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_attribute, 3, 0, 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_attribute_value, 3, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 6, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 5, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [660] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_csharp_code = 0,
  ts_external_token_csharp_expression = 1,
  ts_external_token_implicit_expression_content = 2,
  ts_external_token__html_text = 3,
  ts_external_token__razor_comment_content = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_csharp_code] = sym_csharp_code,
  [ts_external_token_csharp_expression] = sym_csharp_expression,
  [ts_external_token_implicit_expression_content] = sym_implicit_expression_content,
  [ts_external_token__html_text] = sym__html_text,
  [ts_external_token__razor_comment_content] = sym__razor_comment_content,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_csharp_code] = true,
    [ts_external_token_csharp_expression] = true,
    [ts_external_token_implicit_expression_content] = true,
    [ts_external_token__html_text] = true,
    [ts_external_token__razor_comment_content] = true,
  },
  [2] = {
    [ts_external_token__html_text] = true,
  },
  [3] = {
    [ts_external_token_implicit_expression_content] = true,
  },
  [4] = {
    [ts_external_token_csharp_code] = true,
  },
  [5] = {
    [ts_external_token__razor_comment_content] = true,
  },
  [6] = {
    [ts_external_token_csharp_expression] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_razor_external_scanner_create(void);
void tree_sitter_razor_external_scanner_destroy(void *);
bool tree_sitter_razor_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_razor_external_scanner_serialize(void *, char *);
void tree_sitter_razor_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_razor(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_razor_external_scanner_create,
      tree_sitter_razor_external_scanner_destroy,
      tree_sitter_razor_external_scanner_scan,
      tree_sitter_razor_external_scanner_serialize,
      tree_sitter_razor_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
