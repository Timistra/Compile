#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_i32 = 2,
  anon_sym_u32 = 3,
  anon_sym_i64 = 4,
  anon_sym_u64 = 5,
  anon_sym_f32 = 6,
  anon_sym_f64 = 7,
  anon_sym_bool = 8,
  anon_sym_char = 9,
  anon_sym_str = 10,
  anon_sym_usize = 11,
  anon_sym_COMMA = 12,
  anon_sym_COLON = 13,
  anon_sym_fn = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_DASH_GT = 17,
  anon_sym_LPAREN_RPAREN = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_EQ = 21,
  anon_sym_SEMI = 22,
  anon_sym_BANG = 23,
  anon_sym_DASH = 24,
  sym_int = 25,
  sym_uint = 26,
  sym_float = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  sym_bytes = 30,
  sym_static_string = 31,
  sym_line_comment = 32,
  sym_block_comment = 33,
  sym_program = 34,
  sym__toplevel_statement = 35,
  sym_primitive_type = 36,
  sym_parameters = 37,
  sym_parameter = 38,
  sym_declaration = 39,
  sym_function_declaration = 40,
  sym_function_header = 41,
  sym_function_body = 42,
  sym_statement = 43,
  sym_assignment_statement = 44,
  sym_expression = 45,
  sym_binary_expression = 46,
  sym_unary_expression = 47,
  sym__lvalue = 48,
  aux_sym_program_repeat1 = 49,
  aux_sym_parameters_repeat1 = 50,
  aux_sym_function_body_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_i64] = "i64",
  [anon_sym_u64] = "u64",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_bool] = "bool",
  [anon_sym_char] = "char",
  [anon_sym_str] = "str",
  [anon_sym_usize] = "usize",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_fn] = "fn ",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = " -> ",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [sym_int] = "int",
  [sym_uint] = "uint",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_bytes] = "bytes",
  [sym_static_string] = "static_string",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__toplevel_statement] = "_toplevel_statement",
  [sym_primitive_type] = "primitive_type",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_declaration] = "declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_function_header] = "function_header",
  [sym_function_body] = "function_body",
  [sym_statement] = "statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__lvalue] = "_lvalue",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_function_body_repeat1] = "function_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_int] = sym_int,
  [sym_uint] = sym_uint,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_bytes] = sym_bytes,
  [sym_static_string] = sym_static_string,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__toplevel_statement] = sym__toplevel_statement,
  [sym_primitive_type] = sym_primitive_type,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_declaration] = sym_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_header] = sym_function_header,
  [sym_function_body] = sym_function_body,
  [sym_statement] = sym_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__lvalue] = sym__lvalue,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_function_body_repeat1] = aux_sym_function_body_repeat1,
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
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_uint] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_static_string] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_header] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__lvalue] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_left = 1,
  field_right = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_right, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        ' ', 2,
        '!', 29,
        '"', 7,
        '(', 21,
        ')', 22,
        ',', 18,
        '-', 30,
        '/', 10,
        ':', 19,
        ';', 28,
        '=', 27,
        'b', 32,
        '{', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        ' ', 2,
        '!', 29,
        '"', 7,
        '(', 21,
        ')', 22,
        ',', 18,
        '-', 30,
        '/', 10,
        ':', 19,
        ';', 28,
        '=', 27,
        'b', 32,
        '{', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 2,
        '!', 29,
        '"', 7,
        '(', 21,
        ')', 22,
        ',', 18,
        '-', 31,
        '/', 10,
        ':', 19,
        ';', 28,
        '=', 27,
        'b', 32,
        '{', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(3);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(3);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_uint);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_bytes);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_static_string);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_block_comment);
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
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 31:
      if (lookahead == 'z') ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_uint] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_bytes] = ACTIONS(1),
    [sym_static_string] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(33),
    [sym__toplevel_statement] = STATE(6),
    [sym_declaration] = STATE(6),
    [sym_function_declaration] = STATE(20),
    [sym_function_header] = STATE(21),
    [sym_statement] = STATE(6),
    [sym_assignment_statement] = STATE(13),
    [sym__lvalue] = STATE(32),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(34), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 10,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_str,
      anon_sym_usize,
  [23] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(39), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 10,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_str,
      anon_sym_usize,
  [46] = 3,
    STATE(19), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 10,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_str,
      anon_sym_usize,
  [66] = 8,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_fn,
    STATE(13), 1,
      sym_assignment_statement,
    STATE(20), 1,
      sym_function_declaration,
    STATE(21), 1,
      sym_function_header,
    STATE(32), 1,
      sym__lvalue,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 4,
      sym__toplevel_statement,
      sym_declaration,
      sym_statement,
      aux_sym_program_repeat1,
  [95] = 8,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_assignment_statement,
    STATE(20), 1,
      sym_function_declaration,
    STATE(21), 1,
      sym_function_header,
    STATE(32), 1,
      sym__lvalue,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 4,
      sym__toplevel_statement,
      sym_declaration,
      sym_statement,
      aux_sym_program_repeat1,
  [124] = 5,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_assignment_statement,
    STATE(32), 1,
      sym__lvalue,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(8), 2,
      sym_statement,
      aux_sym_function_body_repeat1,
  [142] = 5,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_assignment_statement,
    STATE(32), 1,
      sym__lvalue,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(11), 2,
      sym_statement,
      aux_sym_function_body_repeat1,
  [160] = 4,
    STATE(36), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(26), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(38), 2,
      sym_binary_expression,
      sym_unary_expression,
  [176] = 4,
    STATE(29), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(26), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(38), 2,
      sym_binary_expression,
      sym_unary_expression,
  [192] = 5,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_assignment_statement,
    STATE(32), 1,
      sym__lvalue,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(11), 2,
      sym_statement,
      aux_sym_function_body_repeat1,
  [210] = 5,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_parameter,
    STATE(28), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [227] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_RBRACE,
  [237] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_RBRACE,
  [247] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(38), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [257] = 4,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [271] = 4,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [285] = 4,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [299] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [308] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [317] = 3,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_function_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [328] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [337] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [346] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(49), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [355] = 3,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(24), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [366] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [375] = 2,
    ACTIONS(63), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [383] = 2,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [391] = 2,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [399] = 2,
    ACTIONS(69), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [407] = 2,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [415] = 2,
    ACTIONS(73), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [423] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [431] = 2,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [439] = 2,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [447] = 2,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [455] = 2,
    ACTIONS(83), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [463] = 2,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [471] = 2,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 124,
  [SMALL_STATE(8)] = 142,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 227,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 285,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 308,
  [SMALL_STATE(21)] = 317,
  [SMALL_STATE(22)] = 328,
  [SMALL_STATE(23)] = 337,
  [SMALL_STATE(24)] = 346,
  [SMALL_STATE(25)] = 355,
  [SMALL_STATE(26)] = 366,
  [SMALL_STATE(27)] = 375,
  [SMALL_STATE(28)] = 383,
  [SMALL_STATE(29)] = 391,
  [SMALL_STATE(30)] = 399,
  [SMALL_STATE(31)] = 407,
  [SMALL_STATE(32)] = 415,
  [SMALL_STATE(33)] = 423,
  [SMALL_STATE(34)] = 431,
  [SMALL_STATE(35)] = 439,
  [SMALL_STATE(36)] = 447,
  [SMALL_STATE(37)] = 455,
  [SMALL_STATE(38)] = 463,
  [SMALL_STATE(39)] = 471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, 0, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 6, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 7, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mir(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
