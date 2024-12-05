#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  sym_identifier = 3,
  sym_nested_identifier = 4,
  anon_sym_DOT_STAR = 5,
  anon_sym_import = 6,
  anon_sym_namespace = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
  sym_number = 12,
  anon_sym_SQUOTE = 13,
  aux_sym__string_singlequote_token1 = 14,
  anon_sym_DQUOTE = 15,
  aux_sym__string_doublequote_token1 = 16,
  aux_sym_castable_string_token1 = 17,
  anon_sym_SLASH_STAR = 18,
  aux_sym_block_comment_token1 = 19,
  anon_sym_STAR_SLASH = 20,
  anon_sym_attribute = 21,
  aux_sym_attribute_definition_token1 = 22,
  anon_sym_EQ = 23,
  anon_sym_category = 24,
  anon_sym_infix = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_comm = 28,
  anon_sym_allowbags = 29,
  anon_sym_inv = 30,
  anon_sym_COLON = 31,
  aux_sym_infix_function_definition_token1 = 32,
  anon_sym_DASH_GT = 33,
  sym_operator = 34,
  anon_sym_policyset = 35,
  anon_sym_apply = 36,
  anon_sym_policy = 37,
  anon_sym_permit = 38,
  anon_sym_deny = 39,
  anon_sym_COMMA = 40,
  anon_sym_function = 41,
  anon_sym_target = 42,
  anon_sym_clause = 43,
  anon_sym_condition = 44,
  anon_sym_and = 45,
  anon_sym_or = 46,
  sym_source_file = 47,
  aux_sym__definition = 48,
  sym_comment = 49,
  sym_nested_wildcard_identifier = 50,
  sym_import_statement = 51,
  sym_namespace_definition = 52,
  sym_literal_identifier = 53,
  sym_boolean = 54,
  sym_string = 55,
  sym__string_singlequote = 56,
  sym__string_doublequote = 57,
  sym_castable_string = 58,
  sym_block_comment = 59,
  sym_attribute_definition = 60,
  sym_category_definition = 61,
  sym_infix_definition = 62,
  sym_infix_keyword = 63,
  sym_infix_inverse_definition = 64,
  sym_infix_function_definition = 65,
  sym_policyset_definition = 66,
  sym_policy_combining_algorithm_reference = 67,
  sym_policy_reference = 68,
  sym_policy_definition = 69,
  sym_rule_definition = 70,
  sym_rule_permitordeny = 71,
  sym_function_call = 72,
  sym_function_definition = 73,
  sym_target_definition = 74,
  sym_condition_definition = 75,
  sym_binary_expression = 76,
  sym_unary_expression = 77,
  sym_expression = 78,
  sym_expression_argument = 79,
  aux_sym_namespace_definition_repeat1 = 80,
  aux_sym_block_comment_repeat1 = 81,
  aux_sym_attribute_definition_repeat1 = 82,
  aux_sym_infix_definition_repeat1 = 83,
  aux_sym_policyset_definition_repeat1 = 84,
  aux_sym_policy_definition_repeat1 = 85,
  aux_sym_function_call_repeat1 = 86,
  aux_sym_function_definition_repeat1 = 87,
  aux_sym_target_definition_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_identifier] = "identifier",
  [sym_nested_identifier] = "nested_identifier",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_import] = "import",
  [anon_sym_namespace] = "namespace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_singlequote_token1] = "_string_singlequote_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_doublequote_token1] = "_string_doublequote_token1",
  [aux_sym_castable_string_token1] = "castable_string_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_attribute] = "attribute",
  [aux_sym_attribute_definition_token1] = "attribute_definition_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_category] = "category",
  [anon_sym_infix] = "infix",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_comm] = "comm",
  [anon_sym_allowbags] = "allowbags",
  [anon_sym_inv] = "inv",
  [anon_sym_COLON] = ":",
  [aux_sym_infix_function_definition_token1] = "infix_function_definition_token1",
  [anon_sym_DASH_GT] = "->",
  [sym_operator] = "operator",
  [anon_sym_policyset] = "policyset",
  [anon_sym_apply] = "apply",
  [anon_sym_policy] = "policy",
  [anon_sym_permit] = "permit",
  [anon_sym_deny] = "deny",
  [anon_sym_COMMA] = ",",
  [anon_sym_function] = "function",
  [anon_sym_target] = "target",
  [anon_sym_clause] = "clause",
  [anon_sym_condition] = "condition",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [sym_source_file] = "source_file",
  [aux_sym__definition] = "_definition",
  [sym_comment] = "comment",
  [sym_nested_wildcard_identifier] = "nested_wildcard_identifier",
  [sym_import_statement] = "import_statement",
  [sym_namespace_definition] = "namespace_definition",
  [sym_literal_identifier] = "literal_identifier",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym__string_singlequote] = "_string_singlequote",
  [sym__string_doublequote] = "_string_doublequote",
  [sym_castable_string] = "castable_string",
  [sym_block_comment] = "block_comment",
  [sym_attribute_definition] = "attribute_definition",
  [sym_category_definition] = "category_definition",
  [sym_infix_definition] = "infix_definition",
  [sym_infix_keyword] = "infix_keyword",
  [sym_infix_inverse_definition] = "infix_inverse_definition",
  [sym_infix_function_definition] = "infix_function_definition",
  [sym_policyset_definition] = "policyset_definition",
  [sym_policy_combining_algorithm_reference] = "policy_combining_algorithm_reference",
  [sym_policy_reference] = "policy_reference",
  [sym_policy_definition] = "policy_definition",
  [sym_rule_definition] = "rule_definition",
  [sym_rule_permitordeny] = "rule_permitordeny",
  [sym_function_call] = "function_call",
  [sym_function_definition] = "function_definition",
  [sym_target_definition] = "target_definition",
  [sym_condition_definition] = "condition_definition",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_expression] = "expression",
  [sym_expression_argument] = "expression_argument",
  [aux_sym_namespace_definition_repeat1] = "namespace_definition_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_attribute_definition_repeat1] = "attribute_definition_repeat1",
  [aux_sym_infix_definition_repeat1] = "infix_definition_repeat1",
  [aux_sym_policyset_definition_repeat1] = "policyset_definition_repeat1",
  [aux_sym_policy_definition_repeat1] = "policy_definition_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_target_definition_repeat1] = "target_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_identifier] = sym_identifier,
  [sym_nested_identifier] = sym_nested_identifier,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_singlequote_token1] = aux_sym__string_singlequote_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_doublequote_token1] = aux_sym__string_doublequote_token1,
  [aux_sym_castable_string_token1] = aux_sym_castable_string_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_attribute] = anon_sym_attribute,
  [aux_sym_attribute_definition_token1] = aux_sym_attribute_definition_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_category] = anon_sym_category,
  [anon_sym_infix] = anon_sym_infix,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_comm] = anon_sym_comm,
  [anon_sym_allowbags] = anon_sym_allowbags,
  [anon_sym_inv] = anon_sym_inv,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_infix_function_definition_token1] = aux_sym_infix_function_definition_token1,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_operator] = sym_operator,
  [anon_sym_policyset] = anon_sym_policyset,
  [anon_sym_apply] = anon_sym_apply,
  [anon_sym_policy] = anon_sym_policy,
  [anon_sym_permit] = anon_sym_permit,
  [anon_sym_deny] = anon_sym_deny,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_target] = anon_sym_target,
  [anon_sym_clause] = anon_sym_clause,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [sym_source_file] = sym_source_file,
  [aux_sym__definition] = aux_sym__definition,
  [sym_comment] = sym_comment,
  [sym_nested_wildcard_identifier] = sym_nested_wildcard_identifier,
  [sym_import_statement] = sym_import_statement,
  [sym_namespace_definition] = sym_namespace_definition,
  [sym_literal_identifier] = sym_literal_identifier,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym__string_singlequote] = sym__string_singlequote,
  [sym__string_doublequote] = sym__string_doublequote,
  [sym_castable_string] = sym_castable_string,
  [sym_block_comment] = sym_block_comment,
  [sym_attribute_definition] = sym_attribute_definition,
  [sym_category_definition] = sym_category_definition,
  [sym_infix_definition] = sym_infix_definition,
  [sym_infix_keyword] = sym_infix_keyword,
  [sym_infix_inverse_definition] = sym_infix_inverse_definition,
  [sym_infix_function_definition] = sym_infix_function_definition,
  [sym_policyset_definition] = sym_policyset_definition,
  [sym_policy_combining_algorithm_reference] = sym_policy_combining_algorithm_reference,
  [sym_policy_reference] = sym_policy_reference,
  [sym_policy_definition] = sym_policy_definition,
  [sym_rule_definition] = sym_rule_definition,
  [sym_rule_permitordeny] = sym_rule_permitordeny,
  [sym_function_call] = sym_function_call,
  [sym_function_definition] = sym_function_definition,
  [sym_target_definition] = sym_target_definition,
  [sym_condition_definition] = sym_condition_definition,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_expression] = sym_expression,
  [sym_expression_argument] = sym_expression_argument,
  [aux_sym_namespace_definition_repeat1] = aux_sym_namespace_definition_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_attribute_definition_repeat1] = aux_sym_attribute_definition_repeat1,
  [aux_sym_infix_definition_repeat1] = aux_sym_infix_definition_repeat1,
  [aux_sym_policyset_definition_repeat1] = aux_sym_policyset_definition_repeat1,
  [aux_sym_policy_definition_repeat1] = aux_sym_policy_definition_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_target_definition_repeat1] = aux_sym_target_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_singlequote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_doublequote_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_castable_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_category] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infix] = {
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
  [anon_sym_comm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowbags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_infix_function_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_policyset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_apply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_policy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deny] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clause] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__definition] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_wildcard_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string_singlequote] = {
    .visible = false,
    .named = true,
  },
  [sym__string_doublequote] = {
    .visible = false,
    .named = true,
  },
  [sym_castable_string] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_category_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_inverse_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_policyset_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_policy_combining_algorithm_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_policy_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_policy_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_permitordeny] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_target_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_definition] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_argument] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_namespace_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_infix_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_policyset_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_policy_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
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
  [24] = 23,
  [25] = 10,
  [26] = 26,
  [27] = 27,
  [28] = 11,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 21,
  [34] = 20,
  [35] = 18,
  [36] = 17,
  [37] = 37,
  [38] = 19,
  [39] = 22,
  [40] = 16,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 42,
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
  [65] = 20,
  [66] = 18,
  [67] = 19,
  [68] = 17,
  [69] = 16,
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
  [86] = 20,
  [87] = 87,
  [88] = 19,
  [89] = 16,
  [90] = 90,
  [91] = 17,
  [92] = 18,
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
  [114] = 110,
  [115] = 115,
  [116] = 104,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 117,
  [125] = 118,
  [126] = 126,
  [127] = 127,
  [128] = 118,
  [129] = 117,
  [130] = 118,
  [131] = 117,
  [132] = 132,
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
  [160] = 152,
  [161] = 155,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 152,
  [167] = 155,
  [168] = 168,
  [169] = 169,
  [170] = 152,
  [171] = 155,
  [172] = 172,
  [173] = 142,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(132);
      ADVANCE_MAP(
        '"', 168,
        '\'', 164,
        '(', 189,
        ')', 190,
        '*', 25,
        ',', 207,
        '-', 31,
        '.', 14,
        '/', 15,
        ':', 194,
        '=', 186,
        'a', 75,
        'c', 40,
        'd', 53,
        'f', 39,
        'i', 82,
        'n', 38,
        'o', 100,
        'p', 59,
        't', 43,
        '{', 157,
        '}', 158,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(131);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '\'') ADVANCE(164);
      if (lookahead == '/') ADVANCE(165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '/') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(164);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(164);
      if (lookahead == '/') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '/') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(164);
      if (lookahead == '/') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(23);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        ')', 190,
        ',', 207,
        '/', 15,
        ':', 130,
        'a', 86,
        'c', 78,
        'd', 53,
        'o', 100,
        'p', 59,
        't', 42,
        '}', 158,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '}') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        ')', 190,
        ',', 207,
        '/', 15,
        'a', 86,
        'c', 78,
        'd', 53,
        'o', 100,
        'p', 59,
        't', 42,
        '}', 158,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '}') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(154);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '/') ADVANCE(133);
      END_STATE();
    case 16:
      if (lookahead == '+') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == '+') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '-', 128,
        '/', 200,
        ':', 130,
        'a', 86,
        'c', 78,
        'd', 53,
        'o', 100,
        'p', 59,
        't', 42,
        '}', 158,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(201);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '-', 128,
        '/', 200,
        'a', 86,
        'c', 78,
        'd', 53,
        'o', 100,
        'p', 59,
        't', 42,
        '}', 158,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(201);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(183);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == '9') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == '9') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == '?') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == '?') ADVANCE(163);
      END_STATE();
    case 34:
      if (lookahead == '[') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == '[') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'v') ADVANCE(193);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 122:
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 123:
      if (lookahead == 'x') ADVANCE(188);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 128:
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(201);
      END_STATE();
    case 129:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 130:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 131:
      if (eof) ADVANCE(132);
      ADVANCE_MAP(
        '"', 168,
        '\'', 164,
        '(', 189,
        ')', 190,
        '*', 25,
        ',', 207,
        '-', 31,
        '/', 15,
        ':', 194,
        '=', 186,
        'a', 75,
        'c', 40,
        'd', 53,
        'f', 39,
        'i', 82,
        'n', 38,
        'o', 100,
        'p', 59,
        't', 43,
        '{', 157,
        '}', 158,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(201);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(197);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(167);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__string_singlequote_token1);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__string_singlequote_token1);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__string_singlequote_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__string_doublequote_token1);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__string_doublequote_token1);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__string_doublequote_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_castable_string_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(201);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(197);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(167);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '/') ADVANCE(133);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(179);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_attribute_definition_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_category);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_infix);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_comm);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_allowbags);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_inv);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_infix_function_definition_token1);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_infix_function_definition_token1);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_infix_function_definition_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(197);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '/') ADVANCE(134);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_operator);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_policyset);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_apply);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_policy);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_permit);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_deny);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_target);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_clause);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 24},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 26},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 26},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 140},
  [154] = {.lex_state = 26},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 26},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 19},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 24},
  [165] = {.lex_state = 24},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 24},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 19},
  [175] = {(TSStateId)(-1)},
  [176] = {(TSStateId)(-1)},
  [177] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_category] = ACTIONS(1),
    [anon_sym_infix] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_comm] = ACTIONS(1),
    [anon_sym_allowbags] = ACTIONS(1),
    [anon_sym_inv] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_policyset] = ACTIONS(1),
    [anon_sym_apply] = ACTIONS(1),
    [anon_sym_policy] = ACTIONS(1),
    [anon_sym_permit] = ACTIONS(1),
    [anon_sym_deny] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_clause] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(156),
    [aux_sym__definition] = STATE(60),
    [sym_comment] = STATE(1),
    [sym_import_statement] = STATE(100),
    [sym_namespace_definition] = STATE(100),
    [sym_block_comment] = STATE(1),
    [sym_infix_definition] = STATE(100),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_nested_identifier,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_string,
    STATE(41), 1,
      sym_expression_argument,
    STATE(45), 1,
      sym_unary_expression,
    STATE(56), 1,
      sym_binary_expression,
    STATE(127), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_comment,
      sym_block_comment,
    STATE(16), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(33), 2,
      sym_boolean,
      sym_castable_string,
    STATE(42), 2,
      sym_literal_identifier,
      sym_function_call,
  [57] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_nested_identifier,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_string,
    STATE(41), 1,
      sym_expression_argument,
    STATE(45), 1,
      sym_unary_expression,
    STATE(52), 1,
      sym_binary_expression,
    STATE(127), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_comment,
      sym_block_comment,
    STATE(16), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(33), 2,
      sym_boolean,
      sym_castable_string,
    STATE(42), 2,
      sym_literal_identifier,
      sym_function_call,
  [114] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_nested_identifier,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_string,
    STATE(27), 1,
      sym_expression_argument,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_comment,
      sym_block_comment,
    STATE(16), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(33), 2,
      sym_boolean,
      sym_castable_string,
    STATE(42), 2,
      sym_literal_identifier,
      sym_function_call,
    STATE(44), 2,
      sym_unary_expression,
      sym_expression,
  [166] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_nested_identifier,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_string,
    STATE(43), 1,
      sym_expression_argument,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_comment,
      sym_block_comment,
    STATE(21), 2,
      sym_boolean,
      sym_castable_string,
    STATE(40), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(46), 2,
      sym_literal_identifier,
      sym_function_call,
  [214] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_nested_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_comment,
      sym_block_comment,
    STATE(21), 2,
      sym_boolean,
      sym_castable_string,
    STATE(89), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(116), 2,
      sym_literal_identifier,
      sym_function_call,
  [259] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_nested_identifier,
    STATE(9), 1,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_comment,
      sym_block_comment,
    STATE(21), 2,
      sym_boolean,
      sym_castable_string,
    STATE(89), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(104), 2,
      sym_literal_identifier,
      sym_function_call,
  [304] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_nested_identifier,
    STATE(9), 1,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_comment,
      sym_block_comment,
    STATE(21), 2,
      sym_boolean,
      sym_castable_string,
    STATE(89), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(122), 2,
      sym_literal_identifier,
      sym_function_call,
  [349] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      aux_sym_castable_string_token1,
    ACTIONS(51), 1,
      anon_sym_policy,
    STATE(9), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(47), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [380] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      anon_sym_policy,
    STATE(10), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(53), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [408] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_policy,
    STATE(11), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(57), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [436] = 6,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 1,
      aux_sym_castable_string_token1,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 2,
      sym_operator,
      anon_sym_policy,
    STATE(12), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(47), 10,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [466] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_policyset,
    ACTIONS(72), 1,
      anon_sym_apply,
    ACTIONS(75), 1,
      anon_sym_policy,
    ACTIONS(78), 1,
      anon_sym_target,
    ACTIONS(81), 1,
      anon_sym_condition,
    STATE(13), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_policyset_definition_repeat1,
    STATE(72), 6,
      sym_policyset_definition,
      sym_policy_combining_algorithm_reference,
      sym_policy_reference,
      sym_policy_definition,
      sym_target_definition,
      sym_condition_definition,
  [504] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_policyset,
    ACTIONS(88), 1,
      anon_sym_apply,
    ACTIONS(90), 1,
      anon_sym_policy,
    ACTIONS(92), 1,
      anon_sym_target,
    ACTIONS(94), 1,
      anon_sym_condition,
    STATE(15), 1,
      aux_sym_policyset_definition_repeat1,
    STATE(14), 2,
      sym_comment,
      sym_block_comment,
    STATE(72), 6,
      sym_policyset_definition,
      sym_policy_combining_algorithm_reference,
      sym_policy_reference,
      sym_policy_definition,
      sym_target_definition,
      sym_condition_definition,
  [544] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(86), 1,
      anon_sym_policyset,
    ACTIONS(88), 1,
      anon_sym_apply,
    ACTIONS(90), 1,
      anon_sym_policy,
    ACTIONS(92), 1,
      anon_sym_target,
    ACTIONS(94), 1,
      anon_sym_condition,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_policyset_definition_repeat1,
    STATE(15), 2,
      sym_comment,
      sym_block_comment,
    STATE(72), 6,
      sym_policyset_definition,
      sym_policy_combining_algorithm_reference,
      sym_policy_reference,
      sym_policy_definition,
      sym_target_definition,
      sym_condition_definition,
  [584] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 2,
      sym_operator,
      anon_sym_policy,
    STATE(16), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(98), 11,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [612] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(104), 2,
      sym_operator,
      anon_sym_policy,
    STATE(17), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(102), 11,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [640] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 2,
      sym_operator,
      anon_sym_policy,
    STATE(18), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(106), 11,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [668] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 2,
      sym_operator,
      anon_sym_policy,
    STATE(19), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(110), 11,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [696] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 2,
      sym_operator,
      anon_sym_policy,
    STATE(20), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(114), 11,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [724] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      anon_sym_policy,
    STATE(21), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(118), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [752] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      anon_sym_policy,
    STATE(22), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(122), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [780] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_policy,
    STATE(23), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(126), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [808] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 2,
      sym_operator,
      anon_sym_policy,
    STATE(24), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(126), 10,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [835] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 2,
      sym_operator,
      anon_sym_policy,
    STATE(25), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(53), 10,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [862] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(88), 1,
      anon_sym_apply,
    ACTIONS(92), 1,
      anon_sym_target,
    ACTIONS(94), 1,
      anon_sym_condition,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_policy_definition_repeat1,
    ACTIONS(132), 2,
      anon_sym_permit,
      anon_sym_deny,
    STATE(26), 2,
      sym_comment,
      sym_block_comment,
    STATE(77), 2,
      sym_policy_combining_algorithm_reference,
      sym_rule_definition,
    STATE(78), 3,
      sym_rule_permitordeny,
      sym_target_definition,
      sym_condition_definition,
  [901] = 6,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(136), 1,
      sym_operator,
    ACTIONS(138), 1,
      anon_sym_policy,
    STATE(27), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(134), 10,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [930] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 2,
      sym_operator,
      anon_sym_policy,
    STATE(28), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(57), 10,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [957] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(88), 1,
      anon_sym_apply,
    ACTIONS(92), 1,
      anon_sym_target,
    ACTIONS(94), 1,
      anon_sym_condition,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_policy_definition_repeat1,
    ACTIONS(132), 2,
      anon_sym_permit,
      anon_sym_deny,
    STATE(29), 2,
      sym_comment,
      sym_block_comment,
    STATE(77), 2,
      sym_policy_combining_algorithm_reference,
      sym_rule_definition,
    STATE(78), 3,
      sym_rule_permitordeny,
      sym_target_definition,
      sym_condition_definition,
  [996] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      anon_sym_apply,
    ACTIONS(150), 1,
      anon_sym_target,
    ACTIONS(153), 1,
      anon_sym_condition,
    ACTIONS(147), 2,
      anon_sym_permit,
      anon_sym_deny,
    STATE(77), 2,
      sym_policy_combining_algorithm_reference,
      sym_rule_definition,
    STATE(30), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_policy_definition_repeat1,
    STATE(78), 3,
      sym_rule_permitordeny,
      sym_target_definition,
      sym_condition_definition,
  [1033] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      anon_sym_import,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 1,
      anon_sym_attribute,
    ACTIONS(164), 1,
      anon_sym_category,
    ACTIONS(167), 1,
      anon_sym_policyset,
    ACTIONS(170), 1,
      anon_sym_function,
    STATE(31), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_namespace_definition_repeat1,
    STATE(81), 5,
      sym_import_statement,
      sym_attribute_definition,
      sym_category_definition,
      sym_policyset_definition,
      sym_function_definition,
  [1070] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(86), 1,
      anon_sym_policyset,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      anon_sym_attribute,
    ACTIONS(177), 1,
      anon_sym_category,
    ACTIONS(179), 1,
      anon_sym_function,
    STATE(31), 1,
      aux_sym_namespace_definition_repeat1,
    STATE(32), 2,
      sym_comment,
      sym_block_comment,
    STATE(81), 5,
      sym_import_statement,
      sym_attribute_definition,
      sym_category_definition,
      sym_policyset_definition,
      sym_function_definition,
  [1109] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 2,
      sym_operator,
      anon_sym_policy,
    STATE(33), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(118), 10,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1136] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      anon_sym_policy,
    STATE(34), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(114), 11,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1163] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_policy,
    STATE(35), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(106), 11,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1190] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(104), 1,
      anon_sym_policy,
    STATE(36), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(102), 11,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1217] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(86), 1,
      anon_sym_policyset,
    ACTIONS(175), 1,
      anon_sym_attribute,
    ACTIONS(177), 1,
      anon_sym_category,
    ACTIONS(179), 1,
      anon_sym_function,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_namespace_definition_repeat1,
    STATE(37), 2,
      sym_comment,
      sym_block_comment,
    STATE(81), 5,
      sym_import_statement,
      sym_attribute_definition,
      sym_category_definition,
      sym_policyset_definition,
      sym_function_definition,
  [1256] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      anon_sym_policy,
    STATE(38), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(110), 11,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1283] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 2,
      sym_operator,
      anon_sym_policy,
    STATE(39), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(122), 10,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 1,
      anon_sym_policy,
    STATE(40), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(98), 11,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1337] = 7,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(136), 1,
      sym_operator,
    ACTIONS(185), 1,
      anon_sym_policy,
    ACTIONS(134), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(41), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(183), 8,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
  [1368] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 2,
      sym_operator,
      anon_sym_policy,
    STATE(42), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(187), 10,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1395] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      anon_sym_policy,
    STATE(43), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(191), 10,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1421] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      anon_sym_policy,
    ACTIONS(199), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(44), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(195), 8,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
  [1449] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      anon_sym_policy,
    ACTIONS(199), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(45), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(183), 8,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
  [1477] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_policy,
    STATE(46), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(187), 10,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1503] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      anon_sym_policy,
    STATE(47), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(201), 9,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_function,
      anon_sym_target,
      anon_sym_condition,
  [1528] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      anon_sym_policy,
    STATE(48), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(205), 9,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_function,
      anon_sym_target,
      anon_sym_condition,
  [1553] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      anon_sym_DOT_STAR,
    STATE(49), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(209), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_infix,
      anon_sym_policyset,
      anon_sym_function,
  [1578] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      anon_sym_policy,
    ACTIONS(217), 1,
      anon_sym_clause,
    STATE(51), 1,
      aux_sym_target_definition_repeat1,
    STATE(50), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(213), 7,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_condition,
  [1607] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_policy,
    ACTIONS(223), 1,
      anon_sym_clause,
    STATE(51), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_target_definition_repeat1,
    ACTIONS(219), 7,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_condition,
  [1634] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_policy,
    STATE(52), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(219), 8,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
  [1658] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(209), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_infix,
      anon_sym_policyset,
      anon_sym_function,
  [1680] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(226), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_infix,
      anon_sym_policyset,
      anon_sym_function,
  [1702] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      aux_sym_infix_definition_repeat1,
    STATE(101), 1,
      sym_infix_function_definition,
    STATE(159), 1,
      sym_string,
    STATE(55), 2,
      sym_comment,
      sym_block_comment,
    STATE(69), 2,
      sym__string_singlequote,
      sym__string_doublequote,
  [1735] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      anon_sym_policy,
    STATE(56), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(234), 7,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_condition,
  [1758] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_infix_definition_repeat1,
    STATE(101), 1,
      sym_infix_function_definition,
    STATE(159), 1,
      sym_string,
    STATE(57), 2,
      sym_comment,
      sym_block_comment,
    STATE(69), 2,
      sym__string_singlequote,
      sym__string_doublequote,
  [1791] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_infix_definition_repeat1,
    STATE(101), 1,
      sym_infix_function_definition,
    STATE(159), 1,
      sym_string,
    STATE(58), 2,
      sym_comment,
      sym_block_comment,
    STATE(69), 2,
      sym__string_singlequote,
      sym__string_doublequote,
  [1824] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_infix_function_definition,
    STATE(159), 1,
      sym_string,
    STATE(69), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(59), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_infix_definition_repeat1,
  [1855] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_namespace,
    ACTIONS(11), 1,
      anon_sym_infix,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      aux_sym__definition,
    STATE(60), 2,
      sym_comment,
      sym_block_comment,
    STATE(100), 3,
      sym_import_statement,
      sym_namespace_definition,
      sym_infix_definition,
  [1886] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      anon_sym_policy,
    STATE(61), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(250), 7,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_condition,
  [1909] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      anon_sym_import,
    ACTIONS(259), 1,
      anon_sym_namespace,
    ACTIONS(262), 1,
      anon_sym_infix,
    STATE(62), 3,
      aux_sym__definition,
      sym_comment,
      sym_block_comment,
    STATE(100), 3,
      sym_import_statement,
      sym_namespace_definition,
      sym_infix_definition,
  [1938] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_infix_definition_repeat1,
    STATE(101), 1,
      sym_infix_function_definition,
    STATE(159), 1,
      sym_string,
    STATE(63), 2,
      sym_comment,
      sym_block_comment,
    STATE(69), 2,
      sym__string_singlequote,
      sym__string_doublequote,
  [1971] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      anon_sym_policy,
    STATE(64), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(269), 5,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_target,
      anon_sym_condition,
  [1995] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(114), 7,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_COLON,
      anon_sym_policyset,
      anon_sym_function,
  [2015] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(106), 7,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_COLON,
      anon_sym_policyset,
      anon_sym_function,
  [2035] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(67), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(110), 7,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_COLON,
      anon_sym_policyset,
      anon_sym_function,
  [2055] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(102), 7,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_COLON,
      anon_sym_policyset,
      anon_sym_function,
  [2075] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(98), 7,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_COLON,
      anon_sym_policyset,
      anon_sym_function,
  [2095] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_inv,
    STATE(97), 1,
      sym_infix_inverse_definition,
    STATE(70), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(273), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2118] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(277), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2137] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_policy,
    STATE(72), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(279), 5,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_target,
      anon_sym_condition,
  [2158] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_inv,
    STATE(99), 1,
      sym_infix_inverse_definition,
    STATE(73), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(283), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2181] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_inv,
    STATE(94), 1,
      sym_infix_inverse_definition,
    STATE(74), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(285), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2204] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      anon_sym_policy,
    STATE(75), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(287), 5,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_target,
      anon_sym_condition,
  [2225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(291), 6,
      anon_sym_RBRACE,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_condition,
  [2244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(293), 6,
      anon_sym_RBRACE,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_condition,
  [2263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(295), 6,
      anon_sym_RBRACE,
      anon_sym_apply,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_target,
      anon_sym_condition,
  [2282] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(297), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2301] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      anon_sym_policy,
    STATE(80), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(299), 5,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_target,
      anon_sym_condition,
  [2322] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(303), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2341] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(305), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2360] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(307), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2379] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(309), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2398] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(121), 1,
      sym_string,
    STATE(85), 2,
      sym_comment,
      sym_block_comment,
    STATE(89), 2,
      sym__string_singlequote,
      sym__string_doublequote,
  [2425] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(114), 5,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      aux_sym_attribute_definition_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2443] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_string,
    STATE(69), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(87), 2,
      sym_comment,
      sym_block_comment,
  [2467] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(110), 5,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      aux_sym_attribute_definition_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(98), 5,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      aux_sym_attribute_definition_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2503] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_string,
    STATE(69), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(90), 2,
      sym_comment,
      sym_block_comment,
  [2527] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(102), 5,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      aux_sym_attribute_definition_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2545] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(106), 5,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      aux_sym_attribute_definition_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2563] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(313), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2580] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(315), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2597] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(317), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2614] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(319), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2631] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(285), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2648] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_infix_keyword,
    ACTIONS(323), 2,
      anon_sym_comm,
      anon_sym_allowbags,
    STATE(98), 2,
      sym_comment,
      sym_block_comment,
  [2669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(273), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(325), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2703] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(327), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [2719] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      aux_sym_attribute_definition_token1,
    STATE(102), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_attribute_definition_repeat1,
  [2737] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      aux_sym_attribute_definition_token1,
    STATE(102), 1,
      aux_sym_attribute_definition_repeat1,
    STATE(103), 2,
      sym_comment,
      sym_block_comment,
  [2757] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_function_call_repeat1,
    STATE(104), 2,
      sym_comment,
      sym_block_comment,
  [2777] = 5,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      anon_sym_STAR_SLASH,
    STATE(107), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(342), 2,
      anon_sym_SLASH_SLASH,
      aux_sym_block_comment_token1,
    STATE(105), 2,
      sym_comment,
      sym_block_comment,
  [2795] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(346), 1,
      aux_sym_infix_function_definition_token1,
    ACTIONS(349), 1,
      anon_sym_DASH_GT,
    STATE(106), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_function_definition_repeat1,
  [2813] = 4,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(351), 2,
      anon_sym_SLASH_SLASH,
      aux_sym_block_comment_token1,
    STATE(107), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2829] = 6,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      aux_sym_infix_function_definition_token1,
    ACTIONS(358), 1,
      anon_sym_DASH_GT,
    STATE(111), 1,
      aux_sym_function_definition_repeat1,
    STATE(108), 2,
      sym_comment,
      sym_block_comment,
  [2849] = 5,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      anon_sym_STAR_SLASH,
    STATE(105), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(342), 2,
      anon_sym_SLASH_SLASH,
      aux_sym_block_comment_token1,
    STATE(109), 2,
      sym_comment,
      sym_block_comment,
  [2867] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_function_call_repeat1,
    STATE(110), 2,
      sym_comment,
      sym_block_comment,
  [2887] = 6,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      aux_sym_infix_function_definition_token1,
    ACTIONS(364), 1,
      anon_sym_DASH_GT,
    STATE(106), 1,
      aux_sym_function_definition_repeat1,
    STATE(111), 2,
      sym_comment,
      sym_block_comment,
  [2907] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(112), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_function_call_repeat1,
  [2925] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(371), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [2941] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_function_call_repeat1,
    STATE(114), 2,
      sym_comment,
      sym_block_comment,
  [2961] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      aux_sym_attribute_definition_token1,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_attribute_definition_repeat1,
    STATE(115), 2,
      sym_comment,
      sym_block_comment,
  [2981] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_function_call_repeat1,
    STATE(116), 2,
      sym_comment,
      sym_block_comment,
  [3001] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    ACTIONS(381), 1,
      aux_sym__string_singlequote_token1,
    STATE(117), 2,
      sym_comment,
      sym_block_comment,
  [3018] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym__string_doublequote_token1,
    STATE(118), 2,
      sym_comment,
      sym_block_comment,
  [3035] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(387), 1,
      sym_nested_identifier,
    STATE(53), 1,
      sym_nested_wildcard_identifier,
    STATE(119), 2,
      sym_comment,
      sym_block_comment,
  [3052] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_clause,
    STATE(50), 1,
      aux_sym_target_definition_repeat1,
    STATE(120), 2,
      sym_comment,
      sym_block_comment,
  [3069] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_RBRACE,
      aux_sym_attribute_definition_token1,
    STATE(121), 2,
      sym_comment,
      sym_block_comment,
  [3084] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(366), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(122), 2,
      sym_comment,
      sym_block_comment,
  [3099] = 3,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    STATE(123), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(391), 3,
      anon_sym_SLASH_SLASH,
      aux_sym_block_comment_token1,
      anon_sym_STAR_SLASH,
  [3112] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym__string_singlequote_token1,
    STATE(124), 2,
      sym_comment,
      sym_block_comment,
  [3129] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      aux_sym__string_doublequote_token1,
    STATE(125), 2,
      sym_comment,
      sym_block_comment,
  [3146] = 4,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 2,
      aux_sym_infix_function_definition_token1,
      anon_sym_DASH_GT,
    STATE(126), 2,
      sym_comment,
      sym_block_comment,
  [3161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(127), 2,
      sym_comment,
      sym_block_comment,
  [3176] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym__string_doublequote_token1,
    STATE(128), 2,
      sym_comment,
      sym_block_comment,
  [3193] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      aux_sym__string_singlequote_token1,
    STATE(129), 2,
      sym_comment,
      sym_block_comment,
  [3210] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      aux_sym__string_doublequote_token1,
    STATE(130), 2,
      sym_comment,
      sym_block_comment,
  [3227] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
    ACTIONS(417), 1,
      aux_sym__string_singlequote_token1,
    STATE(131), 2,
      sym_comment,
      sym_block_comment,
  [3244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(419), 1,
      sym_nested_identifier,
    STATE(132), 2,
      sym_comment,
      sym_block_comment,
  [3258] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(421), 1,
      anon_sym_EQ,
    STATE(133), 2,
      sym_comment,
      sym_block_comment,
  [3272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(423), 1,
      aux_sym_attribute_definition_token1,
    STATE(134), 2,
      sym_comment,
      sym_block_comment,
  [3286] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(425), 1,
      sym_nested_identifier,
    STATE(135), 2,
      sym_comment,
      sym_block_comment,
  [3300] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(427), 1,
      anon_sym_EQ,
    STATE(136), 2,
      sym_comment,
      sym_block_comment,
  [3314] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(137), 2,
      sym_comment,
      sym_block_comment,
  [3328] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    STATE(138), 2,
      sym_comment,
      sym_block_comment,
  [3342] = 4,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(433), 1,
      sym_operator,
    STATE(139), 2,
      sym_comment,
      sym_block_comment,
  [3356] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    STATE(140), 2,
      sym_comment,
      sym_block_comment,
  [3370] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(437), 1,
      anon_sym_EQ,
    STATE(141), 2,
      sym_comment,
      sym_block_comment,
  [3384] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(142), 2,
      sym_comment,
      sym_block_comment,
  [3398] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(441), 1,
      anon_sym_EQ,
    STATE(143), 2,
      sym_comment,
      sym_block_comment,
  [3412] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(144), 2,
      sym_comment,
      sym_block_comment,
  [3426] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      anon_sym_EQ,
    STATE(145), 2,
      sym_comment,
      sym_block_comment,
  [3440] = 4,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(447), 1,
      aux_sym_infix_function_definition_token1,
    STATE(146), 2,
      sym_comment,
      sym_block_comment,
  [3454] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(147), 2,
      sym_comment,
      sym_block_comment,
  [3468] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(148), 2,
      sym_comment,
      sym_block_comment,
  [3482] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    STATE(149), 2,
      sym_comment,
      sym_block_comment,
  [3496] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(455), 1,
      anon_sym_DASH_GT,
    STATE(150), 2,
      sym_comment,
      sym_block_comment,
  [3510] = 4,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(457), 1,
      aux_sym_infix_function_definition_token1,
    STATE(151), 2,
      sym_comment,
      sym_block_comment,
  [3524] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(459), 1,
      anon_sym_SQUOTE,
    STATE(152), 2,
      sym_comment,
      sym_block_comment,
  [3538] = 4,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(461), 1,
      aux_sym_comment_token1,
    STATE(153), 2,
      sym_comment,
      sym_block_comment,
  [3552] = 4,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(463), 1,
      aux_sym_infix_function_definition_token1,
    STATE(154), 2,
      sym_comment,
      sym_block_comment,
  [3566] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    STATE(155), 2,
      sym_comment,
      sym_block_comment,
  [3580] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    STATE(156), 2,
      sym_comment,
      sym_block_comment,
  [3594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
    STATE(157), 2,
      sym_comment,
      sym_block_comment,
  [3608] = 4,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(471), 1,
      aux_sym_infix_function_definition_token1,
    STATE(158), 2,
      sym_comment,
      sym_block_comment,
  [3622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      anon_sym_COLON,
    STATE(159), 2,
      sym_comment,
      sym_block_comment,
  [3636] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
    STATE(160), 2,
      sym_comment,
      sym_block_comment,
  [3650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    STATE(161), 2,
      sym_comment,
      sym_block_comment,
  [3664] = 4,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(479), 1,
      sym_operator,
    STATE(162), 2,
      sym_comment,
      sym_block_comment,
  [3678] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    STATE(163), 2,
      sym_comment,
      sym_block_comment,
  [3692] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(483), 1,
      sym_nested_identifier,
    STATE(164), 2,
      sym_comment,
      sym_block_comment,
  [3706] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(485), 1,
      sym_nested_identifier,
    STATE(165), 2,
      sym_comment,
      sym_block_comment,
  [3720] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
    STATE(166), 2,
      sym_comment,
      sym_block_comment,
  [3734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    STATE(167), 2,
      sym_comment,
      sym_block_comment,
  [3748] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(491), 1,
      anon_sym_COLON,
    STATE(168), 2,
      sym_comment,
      sym_block_comment,
  [3762] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(493), 1,
      sym_nested_identifier,
    STATE(169), 2,
      sym_comment,
      sym_block_comment,
  [3776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    STATE(170), 2,
      sym_comment,
      sym_block_comment,
  [3790] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    STATE(171), 2,
      sym_comment,
      sym_block_comment,
  [3804] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    STATE(172), 2,
      sym_comment,
      sym_block_comment,
  [3818] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(173), 2,
      sym_comment,
      sym_block_comment,
  [3832] = 4,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(503), 1,
      sym_operator,
    STATE(174), 2,
      sym_comment,
      sym_block_comment,
  [3846] = 1,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
  [3850] = 1,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
  [3854] = 1,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 166,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 304,
  [SMALL_STATE(9)] = 349,
  [SMALL_STATE(10)] = 380,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 436,
  [SMALL_STATE(13)] = 466,
  [SMALL_STATE(14)] = 504,
  [SMALL_STATE(15)] = 544,
  [SMALL_STATE(16)] = 584,
  [SMALL_STATE(17)] = 612,
  [SMALL_STATE(18)] = 640,
  [SMALL_STATE(19)] = 668,
  [SMALL_STATE(20)] = 696,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 752,
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 808,
  [SMALL_STATE(25)] = 835,
  [SMALL_STATE(26)] = 862,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 930,
  [SMALL_STATE(29)] = 957,
  [SMALL_STATE(30)] = 996,
  [SMALL_STATE(31)] = 1033,
  [SMALL_STATE(32)] = 1070,
  [SMALL_STATE(33)] = 1109,
  [SMALL_STATE(34)] = 1136,
  [SMALL_STATE(35)] = 1163,
  [SMALL_STATE(36)] = 1190,
  [SMALL_STATE(37)] = 1217,
  [SMALL_STATE(38)] = 1256,
  [SMALL_STATE(39)] = 1283,
  [SMALL_STATE(40)] = 1310,
  [SMALL_STATE(41)] = 1337,
  [SMALL_STATE(42)] = 1368,
  [SMALL_STATE(43)] = 1395,
  [SMALL_STATE(44)] = 1421,
  [SMALL_STATE(45)] = 1449,
  [SMALL_STATE(46)] = 1477,
  [SMALL_STATE(47)] = 1503,
  [SMALL_STATE(48)] = 1528,
  [SMALL_STATE(49)] = 1553,
  [SMALL_STATE(50)] = 1578,
  [SMALL_STATE(51)] = 1607,
  [SMALL_STATE(52)] = 1634,
  [SMALL_STATE(53)] = 1658,
  [SMALL_STATE(54)] = 1680,
  [SMALL_STATE(55)] = 1702,
  [SMALL_STATE(56)] = 1735,
  [SMALL_STATE(57)] = 1758,
  [SMALL_STATE(58)] = 1791,
  [SMALL_STATE(59)] = 1824,
  [SMALL_STATE(60)] = 1855,
  [SMALL_STATE(61)] = 1886,
  [SMALL_STATE(62)] = 1909,
  [SMALL_STATE(63)] = 1938,
  [SMALL_STATE(64)] = 1971,
  [SMALL_STATE(65)] = 1995,
  [SMALL_STATE(66)] = 2015,
  [SMALL_STATE(67)] = 2035,
  [SMALL_STATE(68)] = 2055,
  [SMALL_STATE(69)] = 2075,
  [SMALL_STATE(70)] = 2095,
  [SMALL_STATE(71)] = 2118,
  [SMALL_STATE(72)] = 2137,
  [SMALL_STATE(73)] = 2158,
  [SMALL_STATE(74)] = 2181,
  [SMALL_STATE(75)] = 2204,
  [SMALL_STATE(76)] = 2225,
  [SMALL_STATE(77)] = 2244,
  [SMALL_STATE(78)] = 2263,
  [SMALL_STATE(79)] = 2282,
  [SMALL_STATE(80)] = 2301,
  [SMALL_STATE(81)] = 2322,
  [SMALL_STATE(82)] = 2341,
  [SMALL_STATE(83)] = 2360,
  [SMALL_STATE(84)] = 2379,
  [SMALL_STATE(85)] = 2398,
  [SMALL_STATE(86)] = 2425,
  [SMALL_STATE(87)] = 2443,
  [SMALL_STATE(88)] = 2467,
  [SMALL_STATE(89)] = 2485,
  [SMALL_STATE(90)] = 2503,
  [SMALL_STATE(91)] = 2527,
  [SMALL_STATE(92)] = 2545,
  [SMALL_STATE(93)] = 2563,
  [SMALL_STATE(94)] = 2580,
  [SMALL_STATE(95)] = 2597,
  [SMALL_STATE(96)] = 2614,
  [SMALL_STATE(97)] = 2631,
  [SMALL_STATE(98)] = 2648,
  [SMALL_STATE(99)] = 2669,
  [SMALL_STATE(100)] = 2686,
  [SMALL_STATE(101)] = 2703,
  [SMALL_STATE(102)] = 2719,
  [SMALL_STATE(103)] = 2737,
  [SMALL_STATE(104)] = 2757,
  [SMALL_STATE(105)] = 2777,
  [SMALL_STATE(106)] = 2795,
  [SMALL_STATE(107)] = 2813,
  [SMALL_STATE(108)] = 2829,
  [SMALL_STATE(109)] = 2849,
  [SMALL_STATE(110)] = 2867,
  [SMALL_STATE(111)] = 2887,
  [SMALL_STATE(112)] = 2907,
  [SMALL_STATE(113)] = 2925,
  [SMALL_STATE(114)] = 2941,
  [SMALL_STATE(115)] = 2961,
  [SMALL_STATE(116)] = 2981,
  [SMALL_STATE(117)] = 3001,
  [SMALL_STATE(118)] = 3018,
  [SMALL_STATE(119)] = 3035,
  [SMALL_STATE(120)] = 3052,
  [SMALL_STATE(121)] = 3069,
  [SMALL_STATE(122)] = 3084,
  [SMALL_STATE(123)] = 3099,
  [SMALL_STATE(124)] = 3112,
  [SMALL_STATE(125)] = 3129,
  [SMALL_STATE(126)] = 3146,
  [SMALL_STATE(127)] = 3161,
  [SMALL_STATE(128)] = 3176,
  [SMALL_STATE(129)] = 3193,
  [SMALL_STATE(130)] = 3210,
  [SMALL_STATE(131)] = 3227,
  [SMALL_STATE(132)] = 3244,
  [SMALL_STATE(133)] = 3258,
  [SMALL_STATE(134)] = 3272,
  [SMALL_STATE(135)] = 3286,
  [SMALL_STATE(136)] = 3300,
  [SMALL_STATE(137)] = 3314,
  [SMALL_STATE(138)] = 3328,
  [SMALL_STATE(139)] = 3342,
  [SMALL_STATE(140)] = 3356,
  [SMALL_STATE(141)] = 3370,
  [SMALL_STATE(142)] = 3384,
  [SMALL_STATE(143)] = 3398,
  [SMALL_STATE(144)] = 3412,
  [SMALL_STATE(145)] = 3426,
  [SMALL_STATE(146)] = 3440,
  [SMALL_STATE(147)] = 3454,
  [SMALL_STATE(148)] = 3468,
  [SMALL_STATE(149)] = 3482,
  [SMALL_STATE(150)] = 3496,
  [SMALL_STATE(151)] = 3510,
  [SMALL_STATE(152)] = 3524,
  [SMALL_STATE(153)] = 3538,
  [SMALL_STATE(154)] = 3552,
  [SMALL_STATE(155)] = 3566,
  [SMALL_STATE(156)] = 3580,
  [SMALL_STATE(157)] = 3594,
  [SMALL_STATE(158)] = 3608,
  [SMALL_STATE(159)] = 3622,
  [SMALL_STATE(160)] = 3636,
  [SMALL_STATE(161)] = 3650,
  [SMALL_STATE(162)] = 3664,
  [SMALL_STATE(163)] = 3678,
  [SMALL_STATE(164)] = 3692,
  [SMALL_STATE(165)] = 3706,
  [SMALL_STATE(166)] = 3720,
  [SMALL_STATE(167)] = 3734,
  [SMALL_STATE(168)] = 3748,
  [SMALL_STATE(169)] = 3762,
  [SMALL_STATE(170)] = 3776,
  [SMALL_STATE(171)] = 3790,
  [SMALL_STATE(172)] = 3804,
  [SMALL_STATE(173)] = 3818,
  [SMALL_STATE(174)] = 3832,
  [SMALL_STATE(175)] = 3846,
  [SMALL_STATE(176)] = 3850,
  [SMALL_STATE(177)] = 3854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_castable_string, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_castable_string, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_singlequote, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_singlequote, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_doublequote, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_doublequote, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_singlequote, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_singlequote, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_doublequote, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_doublequote, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_identifier, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_identifier, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_castable_string, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_castable_string, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_policy_definition_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policy_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policy_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policy_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policy_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_argument, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policyset_definition, 5, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policyset_definition, 5, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policyset_definition, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policyset_definition, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_definition, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_definition, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_definition_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_definition_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_wildcard_identifier, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_definition, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_definition, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_infix_definition_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_infix_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_infix_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_combining_algorithm_reference, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_combining_algorithm_reference, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition, 2, 0, 0),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition, 2, 0, 0), SHIFT_REPEAT(119),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition, 2, 0, 0), SHIFT_REPEAT(132),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition, 2, 0, 0), SHIFT_REPEAT(98),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_reference, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_reference, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_definition, 8, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 5, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_policyset_definition_repeat1, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_definition, 7, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_definition, 9, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_definition, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_definition, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_permitordeny, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_policy_definition_repeat1, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_definition, 5, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_definition, 5, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_definition, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 4, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_definition, 10, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 5, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_inverse_definition, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_infix_definition_repeat1, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_definition_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_function_definition, 6, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_definition_repeat1, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [467] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_keyword, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_alfa(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
