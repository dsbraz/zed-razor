#include "tree_sitter/parser.h"

#include <string.h>
#include <stdbool.h>

// Token types must match the order in grammar.js externals
enum TokenType {
  CSHARP_CODE,
  CSHARP_EXPRESSION,
  IMPLICIT_EXPRESSION_CONTENT,
  HTML_TEXT,
  RAZOR_COMMENT_CONTENT,
  CSHARP_STATEMENT,
};

// Scanner state for serialization
typedef struct {
  // No persistent state needed for now
  uint8_t dummy;
} Scanner;

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static void skip_whitespace(TSLexer *lexer) {
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
         lexer->lookahead == '\n' || lexer->lookahead == '\r') {
    lexer->advance(lexer, true);
  }
}

// Skip over a C# string literal (regular, verbatim, or interpolated)
// Returns true if a string was consumed
static bool skip_csharp_string(TSLexer *lexer, int *brace_depth) {
  if (lexer->lookahead == '"') {
    advance(lexer); // consume opening "

    // Check for verbatim string @"..."
    // Note: we've already consumed ", so this is actually a regular string
    // We handle @" detection in the caller

    // Regular string "..."
    while (lexer->lookahead != 0) {
      if (lexer->lookahead == '\\') {
        advance(lexer); // consume backslash
        if (lexer->lookahead != 0) advance(lexer); // consume escaped char
      } else if (lexer->lookahead == '"') {
        advance(lexer); // consume closing "
        return true;
      } else {
        advance(lexer);
      }
    }
    return true;
  }

  if (lexer->lookahead == '\'') {
    advance(lexer); // consume opening '
    while (lexer->lookahead != 0) {
      if (lexer->lookahead == '\\') {
        advance(lexer);
        if (lexer->lookahead != 0) advance(lexer);
      } else if (lexer->lookahead == '\'') {
        advance(lexer);
        return true;
      } else {
        advance(lexer);
      }
    }
    return true;
  }

  return false;
}

// Skip a C# single-line comment
static bool skip_line_comment(TSLexer *lexer) {
  if (lexer->lookahead == '/') {
    advance(lexer);
    if (lexer->lookahead == '/') {
      // Single-line comment
      while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
        advance(lexer);
      }
      return true;
    } else if (lexer->lookahead == '*') {
      // Block comment
      advance(lexer);
      while (lexer->lookahead != 0) {
        if (lexer->lookahead == '*') {
          advance(lexer);
          if (lexer->lookahead == '/') {
            advance(lexer);
            return true;
          }
        } else {
          advance(lexer);
        }
      }
      return true;
    }
    // Not a comment, just a slash - this is problematic since we consumed it
    // The caller should handle this case
    return false;
  }
  return false;
}

// Scan brace-balanced C# code block content
// Stops when the matching closing brace is found (does NOT consume it)
static bool scan_csharp_code(TSLexer *lexer) {
  int brace_depth = 0;
  bool has_content = false;

  while (lexer->lookahead != 0) {
    // Handle strings
    if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
      skip_csharp_string(lexer, &brace_depth);
      has_content = true;
      continue;
    }

    // Handle comments
    if (lexer->lookahead == '/') {
      // Peek ahead - need to be careful
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead == '/' || lexer->lookahead == '*') {
        // It's a comment
        if (lexer->lookahead == '/') {
          while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
            advance(lexer);
          }
        } else {
          advance(lexer); // consume *
          while (lexer->lookahead != 0) {
            if (lexer->lookahead == '*') {
              advance(lexer);
              if (lexer->lookahead == '/') {
                advance(lexer);
                break;
              }
            } else {
              advance(lexer);
            }
          }
        }
        has_content = true;
        continue;
      }
      // Just a division operator
      has_content = true;
      continue;
    }

    // Handle @ for verbatim strings
    if (lexer->lookahead == '@') {
      advance(lexer);
      has_content = true;
      if (lexer->lookahead == '"') {
        // Verbatim string @"..."
        advance(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '"') {
            advance(lexer);
            if (lexer->lookahead == '"') {
              advance(lexer); // escaped quote ""
            } else {
              break; // end of verbatim string
            }
          } else {
            advance(lexer);
          }
        }
      }
      continue;
    }

    // Handle $ for interpolated strings
    if (lexer->lookahead == '$') {
      advance(lexer);
      has_content = true;
      if (lexer->lookahead == '"') {
        // Interpolated string $"..."
        advance(lexer);
        int interp_brace = 0;
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '\\') {
            advance(lexer);
            if (lexer->lookahead != 0) advance(lexer);
          } else if (lexer->lookahead == '{') {
            advance(lexer);
            if (lexer->lookahead == '{') {
              advance(lexer); // escaped {{
            } else {
              interp_brace++;
            }
          } else if (lexer->lookahead == '}') {
            if (interp_brace > 0) {
              interp_brace--;
              advance(lexer);
            } else {
              advance(lexer); // escaped }} or end
            }
          } else if (lexer->lookahead == '"' && interp_brace == 0) {
            advance(lexer);
            break;
          } else {
            advance(lexer);
          }
        }
      } else if (lexer->lookahead == '@') {
        // $@"..." or @$"..." interpolated verbatim
        advance(lexer);
        if (lexer->lookahead == '"') {
          advance(lexer);
          int interp_brace = 0;
          while (lexer->lookahead != 0) {
            if (lexer->lookahead == '{') {
              advance(lexer);
              if (lexer->lookahead == '{') {
                advance(lexer);
              } else {
                interp_brace++;
              }
            } else if (lexer->lookahead == '}') {
              if (interp_brace > 0) {
                interp_brace--;
                advance(lexer);
              } else {
                advance(lexer);
              }
            } else if (lexer->lookahead == '"') {
              advance(lexer);
              if (lexer->lookahead == '"') {
                advance(lexer); // escaped ""
              } else if (interp_brace == 0) {
                break;
              }
            } else {
              advance(lexer);
            }
          }
        }
      }
      continue;
    }

    if (lexer->lookahead == '{') {
      brace_depth++;
      advance(lexer);
      has_content = true;
      continue;
    }

    if (lexer->lookahead == '}') {
      if (brace_depth == 0) {
        // This is the closing brace of the block - don't consume it
        lexer->mark_end(lexer);
        return has_content;
      }
      brace_depth--;
      advance(lexer);
      has_content = true;
      continue;
    }

    advance(lexer);
    has_content = true;
  }

  return has_content;
}

// Scan parenthesis-balanced C# expression content
// Stops when the matching closing paren is found (does NOT consume it)
static bool scan_csharp_expression(TSLexer *lexer) {
  int paren_depth = 0;
  bool has_content = false;

  while (lexer->lookahead != 0) {
    // Handle strings
    if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
      skip_csharp_string(lexer, NULL);
      has_content = true;
      continue;
    }

    // Handle comments
    if (lexer->lookahead == '/') {
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead == '/' || lexer->lookahead == '*') {
        if (lexer->lookahead == '/') {
          while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
            advance(lexer);
          }
        } else {
          advance(lexer);
          while (lexer->lookahead != 0) {
            if (lexer->lookahead == '*') {
              advance(lexer);
              if (lexer->lookahead == '/') {
                advance(lexer);
                break;
              }
            } else {
              advance(lexer);
            }
          }
        }
        has_content = true;
        continue;
      }
      has_content = true;
      continue;
    }

    if (lexer->lookahead == '(') {
      paren_depth++;
      advance(lexer);
      has_content = true;
      continue;
    }

    if (lexer->lookahead == ')') {
      if (paren_depth == 0) {
        lexer->mark_end(lexer);
        return has_content;
      }
      paren_depth--;
      advance(lexer);
      has_content = true;
      continue;
    }

    advance(lexer);
    has_content = true;
  }

  return has_content;
}

// Keywords that follow '@' and must not be consumed as implicit_expression_content
static bool is_razor_keyword(const char *word) {
  const char *keywords[] = {
    // Directives
    "page", "model", "using", "inject", "implements", "inherits",
    "layout", "namespace", "typeparam", "attribute", "preservewhitespace", "rendermode",
    // Code blocks
    "code", "functions", "section",
    // Control structures
    "if", "foreach", "for", "while", "do", "switch", "try", "lock", "await",
    NULL
  };
  for (int i = 0; keywords[i]; i++) {
    if (strcmp(word, keywords[i]) == 0) return true;
  }
  return false;
}

// Scan implicit expression content: identifier.Property.Method()[index]
// Stops at whitespace, <, @, {, }, or other non-expression characters
static bool scan_implicit_expression(TSLexer *lexer) {
  bool has_content = false;

  // Must start with a letter or underscore
  if (!(
    (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
    (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
    lexer->lookahead == '_'
  )) {
    return false;
  }

  // Read first identifier into a buffer to check for Razor keywords
  char first_word[64] = {0};
  int fw_len = 0;
  while (
    fw_len < 63 && (
      (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
      (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
      (lexer->lookahead >= '0' && lexer->lookahead <= '9') ||
      lexer->lookahead == '_'
    )
  ) {
    first_word[fw_len++] = (char)lexer->lookahead;
    advance(lexer);
  }

  // Check if the first identifier is a Razor keyword at a word boundary
  bool at_word_boundary = !(
    (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
    (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
    (lexer->lookahead >= '0' && lexer->lookahead <= '9') ||
    lexer->lookahead == '_'
  );
  if (at_word_boundary && is_razor_keyword(first_word)) {
    // It's a Razor keyword - don't consume it as an implicit expression.
    // tree-sitter will restore the lexer position.
    return false;
  }

  has_content = true;

  // Continue reading chains: .Property, (args), [index], ?.Property
  while (true) {
    lexer->mark_end(lexer);

    if (lexer->lookahead == '.') {
      advance(lexer);
      // Must be followed by identifier
      if (
        (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
        (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
        lexer->lookahead == '_'
      ) {
        while (
          (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
          (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
          (lexer->lookahead >= '0' && lexer->lookahead <= '9') ||
          lexer->lookahead == '_'
        ) {
          advance(lexer);
        }
        continue;
      }
      // Dot not followed by identifier - stop before the dot
      return has_content;
    }

    if (lexer->lookahead == '?') {
      advance(lexer);
      if (lexer->lookahead == '.') {
        advance(lexer);
        if (
          (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
          (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
          lexer->lookahead == '_'
        ) {
          while (
            (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
            (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
            (lexer->lookahead >= '0' && lexer->lookahead <= '9') ||
            lexer->lookahead == '_'
          ) {
            advance(lexer);
          }
          continue;
        }
        return has_content;
      }
      if (lexer->lookahead == '[') {
        // ?[index] - null conditional indexer
        advance(lexer);
        int bracket_depth = 1;
        while (lexer->lookahead != 0 && bracket_depth > 0) {
          if (lexer->lookahead == '[') bracket_depth++;
          else if (lexer->lookahead == ']') bracket_depth--;
          if (bracket_depth > 0) advance(lexer);
        }
        if (lexer->lookahead == ']') advance(lexer);
        continue;
      }
      return has_content;
    }

    if (lexer->lookahead == '(') {
      // Method call - balance parens
      advance(lexer);
      int paren_depth = 1;
      while (lexer->lookahead != 0 && paren_depth > 0) {
        if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
          skip_csharp_string(lexer, NULL);
          continue;
        }
        if (lexer->lookahead == '(') paren_depth++;
        else if (lexer->lookahead == ')') paren_depth--;
        if (paren_depth > 0) advance(lexer);
      }
      if (lexer->lookahead == ')') advance(lexer);
      continue;
    }

    if (lexer->lookahead == '[') {
      // Indexer
      advance(lexer);
      int bracket_depth = 1;
      while (lexer->lookahead != 0 && bracket_depth > 0) {
        if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
          skip_csharp_string(lexer, NULL);
          continue;
        }
        if (lexer->lookahead == '[') bracket_depth++;
        else if (lexer->lookahead == ']') bracket_depth--;
        if (bracket_depth > 0) advance(lexer);
      }
      if (lexer->lookahead == ']') advance(lexer);
      continue;
    }

    // No more chaining - stop
    break;
  }

  return has_content;
}

// Keywords that the grammar handles explicitly inside template blocks.
// scan_csharp_statement must NOT consume these.
static bool is_template_keyword(const char *word) {
  const char *keywords[] = {
    "else", "catch", "finally", "case", "default", NULL
  };
  for (int i = 0; keywords[i]; i++) {
    if (strcmp(word, keywords[i]) == 0) return true;
  }
  return false;
}

// Scan a C# statement in a Razor template context (control structure body).
// Stops at: < @ } at brace_depth 0, or EOF.
// Reads until: ; (end of statement) or end of a balanced {} block.
static bool scan_csharp_statement(TSLexer *lexer) {
  bool has_content = false;
  int brace_depth = 0;

  // Check if the first word is a template keyword that the grammar handles.
  // Peek at the first word without consuming it (tree-sitter restores on false).
  if ((lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
      (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
      lexer->lookahead == '_') {
    char word[16] = {0};
    int len = 0;
    // We must mark_end here to be able to "undo" if needed.
    // Since tree-sitter restores lexer state when we return false,
    // we just need to not advance past the word.
    while (len < 15 && (
        (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
        (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
        (lexer->lookahead >= '0' && lexer->lookahead <= '9') ||
        lexer->lookahead == '_')) {
      word[len++] = (char)lexer->lookahead;
      advance(lexer);
    }
    bool at_boundary = !(
      (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
      (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
      (lexer->lookahead >= '0' && lexer->lookahead <= '9') ||
      lexer->lookahead == '_'
    );
    if (at_boundary && is_template_keyword(word)) {
      return false;
    }
    // Not a template keyword - continue consuming the rest of the statement.
    has_content = true;
  }

  while (lexer->lookahead != 0) {
    // Stop at HTML/Razor/block boundaries when not inside nested braces
    if (brace_depth == 0 && (
        lexer->lookahead == '<' ||
        lexer->lookahead == '@' ||
        lexer->lookahead == '}')) {
      break;
    }

    // Track nested braces
    if (lexer->lookahead == '{') {
      brace_depth++;
      advance(lexer);
      has_content = true;
      continue;
    }

    if (lexer->lookahead == '}') {
      brace_depth--;
      advance(lexer);
      has_content = true;
      continue;
    }

    // Semicolon ends statement at top level
    if (lexer->lookahead == ';' && brace_depth == 0) {
      advance(lexer);
      has_content = true;
      lexer->mark_end(lexer);
      return has_content;
    }

    // Handle regular strings
    if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
      skip_csharp_string(lexer, NULL);
      has_content = true;
      continue;
    }

    // Handle verbatim strings @"..." and interpolated $"..."
    if (lexer->lookahead == '@') {
      advance(lexer);
      has_content = true;
      if (lexer->lookahead == '"') {
        advance(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '"') {
            advance(lexer);
            if (lexer->lookahead == '"') {
              advance(lexer); // escaped ""
            } else {
              break;
            }
          } else {
            advance(lexer);
          }
        }
      }
      continue;
    }

    if (lexer->lookahead == '$') {
      advance(lexer);
      has_content = true;
      if (lexer->lookahead == '"') {
        skip_csharp_string(lexer, NULL);
      }
      continue;
    }

    // Handle comments
    if (lexer->lookahead == '/') {
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead == '/') {
        while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
          advance(lexer);
        }
        has_content = true;
        continue;
      } else if (lexer->lookahead == '*') {
        advance(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '*') {
            advance(lexer);
            if (lexer->lookahead == '/') {
              advance(lexer);
              break;
            }
          } else {
            advance(lexer);
          }
        }
        has_content = true;
        continue;
      }
      has_content = true;
      continue;
    }

    advance(lexer);
    has_content = true;
  }

  lexer->mark_end(lexer);
  return has_content;
}

// Keywords that appear in HTML content (after closing braces, etc.)
static bool is_keyword(const char *word) {
  const char *keywords[] = {
    "else", "catch", "finally", "while", "case", "default", "break", "if", NULL
  };
  for (int i = 0; keywords[i]; i++) {
    if (strcmp(word, keywords[i]) == 0) return true;
  }
  return false;
}

// Scan text content until we hit @, <, {, }
// Skips leading whitespace (handled by tree-sitter extras) and only matches
// if there is at least one non-whitespace character that isn't a control keyword.
static bool scan_html_text(TSLexer *lexer) {
  bool has_content = false;

  // Skip leading whitespace - these are handled by tree-sitter extras
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
         lexer->lookahead == '\n' || lexer->lookahead == '\r') {
    lexer->advance(lexer, true); // skip = true
  }

  // Check if there's actual text content after whitespace
  if (lexer->lookahead == 0 || lexer->lookahead == '@' ||
      lexer->lookahead == '<' || lexer->lookahead == '{' ||
      lexer->lookahead == '}') {
    return false;
  }

  // If text starts with a lowercase letter, check for C# control keywords
  // that the grammar needs (else, catch, finally, while, case, etc.)
  if (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') {
    char word[16] = {0};
    int len = 0;
    while (len < 15 &&
           lexer->lookahead >= 'a' && lexer->lookahead <= 'z') {
      word[len++] = (char)lexer->lookahead;
      advance(lexer);
    }

    // Check word boundary
    bool at_boundary = !(
      (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
      (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
      (lexer->lookahead >= '0' && lexer->lookahead <= '9') ||
      lexer->lookahead == '_'
    );

    if (at_boundary && is_keyword(word)) {
      // It's a keyword - return false so the grammar can match it.
      // Tree-sitter will restore the lexer position.
      return false;
    }

    // Not a keyword - the word characters we consumed are part of the text
    has_content = true;
    // Fall through to continue reading more text
  }

  // Read text content (including embedded whitespace)
  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '@' || lexer->lookahead == '{' || lexer->lookahead == '}') {
      break;
    }

    if (lexer->lookahead == '<') {
      break;
    }

    advance(lexer);
    has_content = true;
  }

  lexer->mark_end(lexer);
  return has_content;
}

// Scan razor comment content until *@
static bool scan_razor_comment_content(TSLexer *lexer) {
  bool has_content = false;

  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '*') {
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead == '@') {
        // Found *@ - don't consume it, return what we have
        return has_content;
      }
      has_content = true;
      continue;
    }
    advance(lexer);
    has_content = true;
  }

  lexer->mark_end(lexer);
  return has_content;
}

// ============================================================================
// Tree-sitter external scanner interface
// ============================================================================

void *tree_sitter_razor_external_scanner_create(void) {
  Scanner *scanner = (Scanner *)calloc(1, sizeof(Scanner));
  return scanner;
}

void tree_sitter_razor_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned tree_sitter_razor_external_scanner_serialize(void *payload, char *buffer) {
  (void)payload;
  (void)buffer;
  return 0;
}

void tree_sitter_razor_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  (void)payload;
  (void)buffer;
  (void)length;
}

static void skip_ws(TSLexer *lexer) {
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
         lexer->lookahead == '\n' || lexer->lookahead == '\r') {
    lexer->advance(lexer, true);
  }
}

bool tree_sitter_razor_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  (void)payload;

  // CSHARP_STATEMENT: scan a C# statement in template context (before HTML_TEXT)
  if (valid_symbols[CSHARP_STATEMENT]) {
    skip_ws(lexer);
    if (lexer->lookahead == '<' || lexer->lookahead == '@' ||
        lexer->lookahead == '}' || lexer->lookahead == 0) {
      return false;
    }
    if (scan_csharp_statement(lexer)) {
      lexer->result_symbol = CSHARP_STATEMENT;
      return true;
    }
    return false;
  }

  // HTML_TEXT: scan text content (handles its own whitespace skipping)
  if (valid_symbols[HTML_TEXT] && !valid_symbols[CSHARP_STATEMENT] &&
      !valid_symbols[CSHARP_CODE] &&
      !valid_symbols[CSHARP_EXPRESSION] && !valid_symbols[IMPLICIT_EXPRESSION_CONTENT]) {
    if (scan_html_text(lexer)) {
      lexer->result_symbol = HTML_TEXT;
      return true;
    }
    return false;
  }

  // RAZOR_COMMENT_CONTENT: scan until *@
  if (valid_symbols[RAZOR_COMMENT_CONTENT]) {
    if (scan_razor_comment_content(lexer)) {
      lexer->result_symbol = RAZOR_COMMENT_CONTENT;
      return true;
    }
    return false;
  }

  // For code/expression/implicit tokens, skip whitespace first
  skip_ws(lexer);

  // CSHARP_CODE: brace-balanced code block content
  if (valid_symbols[CSHARP_CODE]) {
    // If we're at the closing brace, there's no content (empty block)
    if (lexer->lookahead == '}') return false;
    if (scan_csharp_code(lexer)) {
      lexer->result_symbol = CSHARP_CODE;
      lexer->mark_end(lexer);
      return true;
    }
    return false;
  }

  // CSHARP_EXPRESSION: paren-balanced expression content
  if (valid_symbols[CSHARP_EXPRESSION]) {
    // If we're at the closing paren, there's no content
    if (lexer->lookahead == ')') return false;
    if (scan_csharp_expression(lexer)) {
      lexer->result_symbol = CSHARP_EXPRESSION;
      lexer->mark_end(lexer);
      return true;
    }
    return false;
  }

  // IMPLICIT_EXPRESSION_CONTENT: identifier.Property.Method() chain
  if (valid_symbols[IMPLICIT_EXPRESSION_CONTENT]) {
    if (scan_implicit_expression(lexer)) {
      lexer->result_symbol = IMPLICIT_EXPRESSION_CONTENT;
      lexer->mark_end(lexer);
      return true;
    }
    return false;
  }

  return false;
}
