#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_version = 6,
  anon_sym_description = 7,
  anon_sym_configurationUi = 8,
  anon_sym_configuration = 9,
  anon_sym_type = 10,
  anon_sym_single = 11,
  anon_sym_list = 12,
  anon_sym_schema = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  aux_sym_string_content_token1 = 16,
  sym_escape_sequence = 17,
  sym_number = 18,
  sym_true = 19,
  sym_false = 20,
  sym_null = 21,
  sym_document = 22,
  sym__value = 23,
  sym_object = 24,
  sym_version_pair = 25,
  sym_description_pair = 26,
  sym_config_ui_pair = 27,
  sym_array = 28,
  sym_string = 29,
  sym_string_content = 30,
  aux_sym_object_repeat1 = 31,
  aux_sym_array_repeat1 = 32,
  aux_sym_string_content_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_version] = "version",
  [anon_sym_description] = "description",
  [anon_sym_configurationUi] = "configurationUi",
  [anon_sym_configuration] = "configuration",
  [anon_sym_type] = "type",
  [anon_sym_single] = "single",
  [anon_sym_list] = "list",
  [anon_sym_schema] = "schema",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_version_pair] = "version_pair",
  [sym_description_pair] = "description_pair",
  [sym_config_ui_pair] = "config_ui_pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_configurationUi] = anon_sym_configurationUi,
  [anon_sym_configuration] = anon_sym_configuration,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_single] = anon_sym_single,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_schema] = anon_sym_schema,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_version_pair] = sym_version_pair,
  [sym_description_pair] = sym_description_pair,
  [sym_config_ui_pair] = sym_config_ui_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_configurationUi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_configuration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_single] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_schema] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_version_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_description_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_config_ui_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 71:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(103);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_configurationUi);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_configuration);
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(74);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_configurationUi] = ACTIONS(1),
    [anon_sym_configuration] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_single] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_schema] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(33),
    [sym__value] = STATE(34),
    [sym_object] = STATE(19),
    [sym_array] = STATE(19),
    [sym_string] = STATE(19),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym__value,
    STATE(19), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(9), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [27] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__value,
    STATE(19), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(9), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [51] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(23), 3,
      sym_version_pair,
      sym_description_pair,
      sym_config_ui_pair,
  [63] = 4,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      aux_sym_string_content_repeat1,
    STATE(41), 1,
      sym_string_content,
    ACTIONS(19), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [77] = 1,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [84] = 3,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(25), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [95] = 1,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [102] = 2,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(25), 3,
      sym_version_pair,
      sym_description_pair,
      sym_config_ui_pair,
  [111] = 3,
    ACTIONS(30), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(32), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [122] = 1,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [128] = 3,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(38), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_array_repeat1,
  [138] = 3,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_array_repeat1,
  [148] = 1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [154] = 3,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_array_repeat1,
  [164] = 1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [170] = 3,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_object_repeat1,
  [180] = 1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [186] = 1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [192] = 3,
    ACTIONS(60), 1,
      anon_sym_version,
    ACTIONS(62), 1,
      anon_sym_description,
    ACTIONS(64), 1,
      anon_sym_configurationUi,
  [202] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_object_repeat1,
  [212] = 1,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [218] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_object_repeat1,
  [228] = 1,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [234] = 1,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [239] = 1,
    ACTIONS(43), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [244] = 2,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
  [251] = 2,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
  [258] = 1,
    ACTIONS(76), 2,
      sym_true,
      sym_false,
  [263] = 1,
    ACTIONS(78), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [268] = 1,
    ACTIONS(80), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [273] = 1,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [278] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
  [282] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
  [286] = 1,
    ACTIONS(88), 1,
      anon_sym_COLON,
  [290] = 1,
    ACTIONS(90), 1,
      anon_sym_COLON,
  [294] = 1,
    ACTIONS(92), 1,
      anon_sym_COLON,
  [298] = 1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
  [302] = 1,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
  [306] = 1,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
  [310] = 1,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 77,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 111,
  [SMALL_STATE(11)] = 122,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 138,
  [SMALL_STATE(14)] = 148,
  [SMALL_STATE(15)] = 154,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 170,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 186,
  [SMALL_STATE(20)] = 192,
  [SMALL_STATE(21)] = 202,
  [SMALL_STATE(22)] = 212,
  [SMALL_STATE(23)] = 218,
  [SMALL_STATE(24)] = 228,
  [SMALL_STATE(25)] = 234,
  [SMALL_STATE(26)] = 239,
  [SMALL_STATE(27)] = 244,
  [SMALL_STATE(28)] = 251,
  [SMALL_STATE(29)] = 258,
  [SMALL_STATE(30)] = 263,
  [SMALL_STATE(31)] = 268,
  [SMALL_STATE(32)] = 273,
  [SMALL_STATE(33)] = 278,
  [SMALL_STATE(34)] = 282,
  [SMALL_STATE(35)] = 286,
  [SMALL_STATE(36)] = 290,
  [SMALL_STATE(37)] = 294,
  [SMALL_STATE(38)] = 298,
  [SMALL_STATE(39)] = 302,
  [SMALL_STATE(40)] = 306,
  [SMALL_STATE(41)] = 310,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(7),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_pair, 5, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_pair, 5, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_ui_pair, 5, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scriptjson(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
