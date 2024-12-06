#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  anon_sym_rule = 38,
  anon_sym_permit = 39,
  anon_sym_deny = 40,
  anon_sym_COMMA = 41,
  anon_sym_function = 42,
  aux_sym_function_reference_token1 = 43,
  anon_sym_RBRACK = 44,
  anon_sym_target = 45,
  anon_sym_clause = 46,
  anon_sym_condition = 47,
  anon_sym_and = 48,
  anon_sym_or = 49,
  sym_source_file = 50,
  aux_sym__definition = 51,
  sym_comment = 52,
  sym_nested_wildcard_identifier = 53,
  sym_import_statement = 54,
  sym_namespace_definition = 55,
  sym_literal_identifier = 56,
  sym_boolean = 57,
  sym_string = 58,
  sym__string_singlequote = 59,
  sym__string_doublequote = 60,
  sym_castable_string = 61,
  sym_block_comment = 62,
  sym_attribute_definition = 63,
  sym_category_definition = 64,
  sym_infix_definition = 65,
  sym_infix_keyword = 66,
  sym_infix_inverse_definition = 67,
  sym_infix_function_definition = 68,
  sym_policyset_definition = 69,
  sym_policy_combining_algorithm_reference = 70,
  sym_policy_reference = 71,
  sym_policy_definition = 72,
  sym_rule_definition = 73,
  sym_rule_permitordeny = 74,
  sym_function_call = 75,
  sym_function_argument = 76,
  sym_function_definition = 77,
  sym_function_reference = 78,
  sym_target_definition = 79,
  sym_target_clause_definition = 80,
  sym_condition_definition = 81,
  sym_binary_expression = 82,
  sym_unary_expression = 83,
  sym_expression = 84,
  sym_expression_argument = 85,
  aux_sym_namespace_definition_repeat1 = 86,
  aux_sym_block_comment_repeat1 = 87,
  aux_sym_attribute_definition_repeat1 = 88,
  aux_sym_infix_definition_repeat1 = 89,
  aux_sym_policyset_definition_repeat1 = 90,
  aux_sym_policy_definition_repeat1 = 91,
  aux_sym_function_call_repeat1 = 92,
  aux_sym_function_definition_repeat1 = 93,
  aux_sym_target_definition_repeat1 = 94,
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
  [anon_sym_rule] = "rule",
  [anon_sym_permit] = "permit",
  [anon_sym_deny] = "deny",
  [anon_sym_COMMA] = ",",
  [anon_sym_function] = "function",
  [aux_sym_function_reference_token1] = "function_reference_token1",
  [anon_sym_RBRACK] = "]",
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
  [sym_function_argument] = "function_argument",
  [sym_function_definition] = "function_definition",
  [sym_function_reference] = "function_reference",
  [sym_target_definition] = "target_definition",
  [sym_target_clause_definition] = "target_clause_definition",
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
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_permit] = anon_sym_permit,
  [anon_sym_deny] = anon_sym_deny,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_function] = anon_sym_function,
  [aux_sym_function_reference_token1] = aux_sym_function_reference_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_function_argument] = sym_function_argument,
  [sym_function_definition] = sym_function_definition,
  [sym_function_reference] = sym_function_reference,
  [sym_target_definition] = sym_target_definition,
  [sym_target_clause_definition] = sym_target_clause_definition,
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
  [anon_sym_rule] = {
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
  [aux_sym_function_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_function_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_target_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_target_clause_definition] = {
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
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 22,
  [29] = 24,
  [30] = 30,
  [31] = 25,
  [32] = 26,
  [33] = 33,
  [34] = 34,
  [35] = 16,
  [36] = 17,
  [37] = 19,
  [38] = 20,
  [39] = 21,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 30,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 20,
  [59] = 21,
  [60] = 16,
  [61] = 61,
  [62] = 19,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 17,
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
  [90] = 21,
  [91] = 20,
  [92] = 19,
  [93] = 16,
  [94] = 94,
  [95] = 17,
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
  [126] = 123,
  [127] = 122,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 128,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 137,
  [138] = 134,
  [139] = 128,
  [140] = 134,
  [141] = 128,
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
  [175] = 144,
  [176] = 167,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 144,
  [182] = 167,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 167,
  [187] = 187,
  [188] = 157,
  [189] = 144,
  [190] = 190,
  [191] = 191,
  [192] = 192,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(158);
      ADVANCE_MAP(
        '"', 219,
        '\'', 215,
        '(', 240,
        ')', 241,
        '*', 25,
        ',', 261,
        '-', 31,
        '.', 12,
        '/', 13,
        ':', 245,
        '=', 237,
        ']', 265,
        'a', 83,
        'c', 41,
        'd', 57,
        'f', 39,
        'i', 93,
        'n', 38,
        'o', 118,
        'p', 64,
        'r', 140,
        't', 44,
        '{', 208,
        '}', 209,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(155);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '/') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '/') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '/') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 't') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '/') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '/') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '/') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '}') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '}') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '/') ADVANCE(159);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '-', 152,
        '/', 251,
        ':', 154,
        'a', 98,
        'c', 86,
        'o', 118,
        'p', 108,
        'r', 140,
        't', 43,
        '}', 209,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(252);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '-', 152,
        '/', 251,
        'a', 98,
        'c', 86,
        'o', 118,
        'p', 108,
        'r', 140,
        't', 43,
        '}', 209,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(252);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '/') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '/', 13,
        ':', 245,
        'a', 129,
        'c', 40,
        'f', 144,
        'i', 92,
        'p', 114,
        '{', 208,
        '}', 209,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead == 't') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(234);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == '9') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == '9') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(249);
      if (lookahead == '?') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == '?') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == '?') ADVANCE(214);
      END_STATE();
    case 34:
      if (lookahead == '[') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == '[') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'v') ADVANCE(244);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 145:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 146:
      if (lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 147:
      if (lookahead == 'y') ADVANCE(259);
      END_STATE();
    case 148:
      if (lookahead == 'y') ADVANCE(254);
      END_STATE();
    case 149:
      if (lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 150:
      if (lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 151:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 152:
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(252);
      END_STATE();
    case 153:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 154:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 155:
      if (eof) ADVANCE(158);
      ADVANCE_MAP(
        '"', 219,
        '\'', 215,
        '(', 240,
        ')', 241,
        '*', 25,
        ',', 261,
        '-', 31,
        '/', 13,
        ':', 245,
        '=', 237,
        ']', 265,
        'a', 83,
        'c', 41,
        'd', 57,
        'f', 39,
        'i', 93,
        'n', 38,
        'o', 118,
        'p', 64,
        'r', 140,
        't', 44,
        '{', 208,
        '}', 209,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(155);
      END_STATE();
    case 156:
      if (eof) ADVANCE(158);
      ADVANCE_MAP(
        ')', 241,
        ',', 261,
        '.', 12,
        '/', 13,
        ':', 154,
        'a', 99,
        'c', 42,
        'f', 144,
        'i', 94,
        'n', 38,
        'o', 118,
        'p', 108,
        'r', 140,
        't', 43,
        '}', 209,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(157);
      END_STATE();
    case 157:
      if (eof) ADVANCE(158);
      ADVANCE_MAP(
        ')', 241,
        ',', 261,
        '/', 13,
        'a', 99,
        'c', 42,
        'f', 144,
        'i', 94,
        'n', 38,
        'o', 118,
        'p', 108,
        'r', 140,
        't', 43,
        '}', 209,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(252);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(248);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(222);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(218);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '[') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'g') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'y') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_nested_identifier);
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__string_singlequote_token1);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__string_singlequote_token1);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__string_singlequote_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__string_doublequote_token1);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__string_doublequote_token1);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__string_doublequote_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_castable_string_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(252);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(248);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(222);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(218);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '/') ADVANCE(159);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(230);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_attribute_definition_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_category);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_infix);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_comm);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_allowbags);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_inv);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_infix_function_definition_token1);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_infix_function_definition_token1);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_infix_function_definition_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(248);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '/') ADVANCE(160);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_operator);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_policyset);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_apply);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_policy);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_permit);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_permit);
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_deny);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_deny);
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '[') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_function_reference_token1);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_target);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_target);
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_clause);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 272:
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 156},
  [13] = {.lex_state = 156},
  [14] = {.lex_state = 156},
  [15] = {.lex_state = 156},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 156},
  [36] = {.lex_state = 156},
  [37] = {.lex_state = 156},
  [38] = {.lex_state = 156},
  [39] = {.lex_state = 156},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 156},
  [45] = {.lex_state = 156},
  [46] = {.lex_state = 156},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 156},
  [50] = {.lex_state = 156},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 22},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 156},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 156},
  [75] = {.lex_state = 156},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 156},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 156},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 156},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 24},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 26},
  [151] = {.lex_state = 24},
  [152] = {.lex_state = 166},
  [153] = {.lex_state = 26},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 17},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 24},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 24},
  [164] = {.lex_state = 24},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 26},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 26},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {(TSStateId)(-1)},
  [191] = {(TSStateId)(-1)},
  [192] = {(TSStateId)(-1)},
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
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_permit] = ACTIONS(1),
    [anon_sym_deny] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [aux_sym_function_reference_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_clause] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(147),
    [aux_sym__definition] = STATE(61),
    [sym_comment] = STATE(1),
    [sym_import_statement] = STATE(103),
    [sym_namespace_definition] = STATE(103),
    [sym_block_comment] = STATE(1),
    [sym_infix_definition] = STATE(103),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym_nested_identifier,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_string,
    STATE(34), 1,
      sym_expression_argument,
    STATE(41), 1,
      sym_unary_expression,
    STATE(67), 1,
      sym_binary_expression,
    STATE(137), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_comment,
      sym_block_comment,
    STATE(16), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(27), 2,
      sym_boolean,
      sym_castable_string,
    STATE(30), 2,
      sym_literal_identifier,
      sym_function_call,
  [54] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym_nested_identifier,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_string,
    STATE(34), 1,
      sym_expression_argument,
    STATE(41), 1,
      sym_unary_expression,
    STATE(56), 1,
      sym_binary_expression,
    STATE(137), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_comment,
      sym_block_comment,
    STATE(16), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(27), 2,
      sym_boolean,
      sym_castable_string,
    STATE(30), 2,
      sym_literal_identifier,
      sym_function_call,
  [108] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym_nested_identifier,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_string,
    STATE(33), 1,
      sym_expression_argument,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_comment,
      sym_block_comment,
    STATE(16), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(27), 2,
      sym_boolean,
      sym_castable_string,
    STATE(30), 2,
      sym_literal_identifier,
      sym_function_call,
    STATE(43), 2,
      sym_unary_expression,
      sym_expression,
  [157] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_nested_identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_function_reference_token1,
    STATE(12), 1,
      sym_string,
    STATE(135), 1,
      sym_function_argument,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_comment,
      sym_block_comment,
    STATE(23), 2,
      sym_boolean,
      sym_castable_string,
    STATE(93), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(129), 3,
      sym_literal_identifier,
      sym_function_call,
      sym_function_reference,
  [206] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_nested_identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_function_reference_token1,
    STATE(12), 1,
      sym_string,
    STATE(126), 1,
      sym_function_argument,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_comment,
      sym_block_comment,
    STATE(23), 2,
      sym_boolean,
      sym_castable_string,
    STATE(93), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(129), 3,
      sym_literal_identifier,
      sym_function_call,
      sym_function_reference,
  [255] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_nested_identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_function_reference_token1,
    STATE(12), 1,
      sym_string,
    STATE(123), 1,
      sym_function_argument,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_comment,
      sym_block_comment,
    STATE(23), 2,
      sym_boolean,
      sym_castable_string,
    STATE(93), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(129), 3,
      sym_literal_identifier,
      sym_function_call,
      sym_function_reference,
  [304] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(35), 1,
      sym_nested_identifier,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_string,
    STATE(40), 1,
      sym_expression_argument,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_comment,
      sym_block_comment,
    STATE(23), 2,
      sym_boolean,
      sym_castable_string,
    STATE(35), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(48), 2,
      sym_literal_identifier,
      sym_function_call,
  [349] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_policyset,
    ACTIONS(45), 1,
      anon_sym_apply,
    ACTIONS(47), 1,
      anon_sym_policy,
    ACTIONS(49), 1,
      anon_sym_target,
    ACTIONS(51), 1,
      anon_sym_condition,
    STATE(11), 1,
      aux_sym_policyset_definition_repeat1,
    STATE(9), 2,
      sym_comment,
      sym_block_comment,
    STATE(85), 6,
      sym_policyset_definition,
      sym_policy_combining_algorithm_reference,
      sym_policy_reference,
      sym_policy_definition,
      sym_target_definition,
      sym_condition_definition,
  [389] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_policyset,
    ACTIONS(58), 1,
      anon_sym_apply,
    ACTIONS(61), 1,
      anon_sym_policy,
    ACTIONS(64), 1,
      anon_sym_target,
    ACTIONS(67), 1,
      anon_sym_condition,
    STATE(10), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_policyset_definition_repeat1,
    STATE(85), 6,
      sym_policyset_definition,
      sym_policy_combining_algorithm_reference,
      sym_policy_reference,
      sym_policy_definition,
      sym_target_definition,
      sym_condition_definition,
  [427] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      anon_sym_policyset,
    ACTIONS(45), 1,
      anon_sym_apply,
    ACTIONS(47), 1,
      anon_sym_policy,
    ACTIONS(49), 1,
      anon_sym_target,
    ACTIONS(51), 1,
      anon_sym_condition,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_policyset_definition_repeat1,
    STATE(11), 2,
      sym_comment,
      sym_block_comment,
    STATE(85), 6,
      sym_policyset_definition,
      sym_policy_combining_algorithm_reference,
      sym_policy_reference,
      sym_policy_definition,
      sym_target_definition,
      sym_condition_definition,
  [467] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(74), 1,
      aux_sym_castable_string_token1,
    ACTIONS(76), 1,
      anon_sym_policy,
    STATE(12), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(72), 11,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [497] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(43), 1,
      anon_sym_policyset,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_attribute,
    ACTIONS(82), 1,
      anon_sym_category,
    ACTIONS(84), 1,
      anon_sym_function,
    STATE(15), 1,
      aux_sym_namespace_definition_repeat1,
    STATE(13), 2,
      sym_comment,
      sym_block_comment,
    STATE(84), 5,
      sym_import_statement,
      sym_attribute_definition,
      sym_category_definition,
      sym_policyset_definition,
      sym_function_definition,
  [536] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(43), 1,
      anon_sym_policyset,
    ACTIONS(80), 1,
      anon_sym_attribute,
    ACTIONS(82), 1,
      anon_sym_category,
    ACTIONS(84), 1,
      anon_sym_function,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_namespace_definition_repeat1,
    STATE(14), 2,
      sym_comment,
      sym_block_comment,
    STATE(84), 5,
      sym_import_statement,
      sym_attribute_definition,
      sym_category_definition,
      sym_policyset_definition,
      sym_function_definition,
  [575] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(88), 1,
      anon_sym_import,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_attribute,
    ACTIONS(96), 1,
      anon_sym_category,
    ACTIONS(99), 1,
      anon_sym_policyset,
    ACTIONS(102), 1,
      anon_sym_function,
    STATE(15), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_namespace_definition_repeat1,
    STATE(84), 5,
      sym_import_statement,
      sym_attribute_definition,
      sym_category_definition,
      sym_policyset_definition,
      sym_function_definition,
  [612] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 2,
      sym_operator,
      anon_sym_policy,
    STATE(16), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(107), 10,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [639] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 2,
      sym_operator,
      anon_sym_policy,
    STATE(17), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(113), 10,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [666] = 6,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      aux_sym_castable_string_token1,
    ACTIONS(76), 2,
      sym_operator,
      anon_sym_policy,
    STATE(18), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(72), 9,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [695] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 2,
      sym_operator,
      anon_sym_policy,
    STATE(19), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(119), 10,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [722] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 2,
      sym_operator,
      anon_sym_policy,
    STATE(20), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(123), 10,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [749] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(129), 2,
      sym_operator,
      anon_sym_policy,
    STATE(21), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(127), 10,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [776] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_policy,
    STATE(22), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(131), 11,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [803] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_policy,
    STATE(23), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(135), 11,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [830] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      anon_sym_policy,
    STATE(24), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(139), 11,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [857] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(145), 1,
      anon_sym_policy,
    STATE(25), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(143), 11,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [884] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_policy,
    STATE(26), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(147), 11,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_COMMA,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [911] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 2,
      sym_operator,
      anon_sym_policy,
    STATE(27), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(135), 9,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [937] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 2,
      sym_operator,
      anon_sym_policy,
    STATE(28), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(131), 9,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [963] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 2,
      sym_operator,
      anon_sym_policy,
    STATE(29), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(139), 9,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [989] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 2,
      sym_operator,
      anon_sym_policy,
    STATE(30), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(151), 9,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1015] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(145), 2,
      sym_operator,
      anon_sym_policy,
    STATE(31), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(143), 9,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1041] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 2,
      sym_operator,
      anon_sym_policy,
    STATE(32), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(147), 9,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1067] = 6,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      sym_operator,
    ACTIONS(159), 1,
      anon_sym_policy,
    STATE(33), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(155), 9,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1095] = 7,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      sym_operator,
    ACTIONS(163), 1,
      anon_sym_policy,
    ACTIONS(155), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(34), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(161), 7,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
  [1125] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 1,
      anon_sym_policy,
    STATE(35), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(107), 10,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1151] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_policy,
    STATE(36), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(113), 10,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1177] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      anon_sym_policy,
    STATE(37), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(119), 10,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1203] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 1,
      anon_sym_policy,
    STATE(38), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(123), 10,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1229] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(129), 1,
      anon_sym_policy,
    STATE(39), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(127), 10,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1255] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      anon_sym_policy,
    STATE(40), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(165), 9,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1280] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_policy,
    ACTIONS(169), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(41), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(161), 7,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
  [1307] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      anon_sym_policy,
    ACTIONS(175), 1,
      anon_sym_clause,
    STATE(47), 1,
      aux_sym_target_definition_repeat1,
    STATE(52), 1,
      sym_target_clause_definition,
    STATE(42), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(171), 6,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_condition,
  [1338] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      anon_sym_policy,
    ACTIONS(169), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(43), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(177), 7,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
  [1365] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      anon_sym_policy,
    STATE(44), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(181), 9,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_function,
      anon_sym_target,
      anon_sym_condition,
  [1390] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 1,
      anon_sym_policy,
    STATE(45), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(185), 9,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_function,
      anon_sym_target,
      anon_sym_condition,
  [1415] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      anon_sym_DOT_STAR,
    STATE(46), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(189), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_infix,
      anon_sym_policyset,
      anon_sym_function,
  [1440] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      anon_sym_policy,
    ACTIONS(197), 1,
      anon_sym_clause,
    STATE(52), 1,
      sym_target_clause_definition,
    STATE(47), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_target_definition_repeat1,
    ACTIONS(193), 6,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_condition,
  [1469] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_policy,
    STATE(48), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(151), 9,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
      anon_sym_and,
      anon_sym_or,
  [1494] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(189), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_infix,
      anon_sym_policyset,
      anon_sym_function,
  [1516] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_infix,
      anon_sym_policyset,
      anon_sym_function,
  [1538] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      anon_sym_import,
    ACTIONS(207), 1,
      anon_sym_namespace,
    ACTIONS(210), 1,
      anon_sym_infix,
    STATE(51), 3,
      aux_sym__definition,
      sym_comment,
      sym_block_comment,
    STATE(103), 3,
      sym_import_statement,
      sym_namespace_definition,
      sym_infix_definition,
  [1567] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      anon_sym_policy,
    STATE(52), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(213), 7,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
  [1590] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_infix_definition_repeat1,
    STATE(125), 1,
      sym_infix_function_definition,
    STATE(187), 1,
      sym_string,
    STATE(53), 2,
      sym_comment,
      sym_block_comment,
    STATE(60), 2,
      sym__string_singlequote,
      sym__string_doublequote,
  [1623] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_infix_function_definition,
    STATE(187), 1,
      sym_string,
    STATE(60), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(54), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_infix_definition_repeat1,
  [1654] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_infix_definition_repeat1,
    STATE(125), 1,
      sym_infix_function_definition,
    STATE(187), 1,
      sym_string,
    STATE(55), 2,
      sym_comment,
      sym_block_comment,
    STATE(60), 2,
      sym__string_singlequote,
      sym__string_doublequote,
  [1687] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      anon_sym_policy,
    STATE(56), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(233), 7,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_clause,
      anon_sym_condition,
  [1710] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_infix_definition_repeat1,
    STATE(125), 1,
      sym_infix_function_definition,
    STATE(187), 1,
      sym_string,
    STATE(57), 2,
      sym_comment,
      sym_block_comment,
    STATE(60), 2,
      sym__string_singlequote,
      sym__string_doublequote,
  [1743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(123), 8,
      anon_sym_import,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_COLON,
      anon_sym_policyset,
      anon_sym_function,
  [1764] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(127), 8,
      anon_sym_import,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_COLON,
      anon_sym_policyset,
      anon_sym_function,
  [1785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(107), 8,
      anon_sym_import,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_COLON,
      anon_sym_policyset,
      anon_sym_function,
  [1806] = 9,
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
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      aux_sym__definition,
    STATE(61), 2,
      sym_comment,
      sym_block_comment,
    STATE(103), 3,
      sym_import_statement,
      sym_namespace_definition,
      sym_infix_definition,
  [1837] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(119), 8,
      anon_sym_import,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_COLON,
      anon_sym_policyset,
      anon_sym_function,
  [1858] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      sym_nested_identifier,
    ACTIONS(243), 1,
      anon_sym_target,
    ACTIONS(245), 1,
      anon_sym_condition,
    ACTIONS(241), 2,
      anon_sym_permit,
      anon_sym_deny,
    STATE(63), 2,
      sym_comment,
      sym_block_comment,
    STATE(118), 3,
      sym_rule_permitordeny,
      sym_target_definition,
      sym_condition_definition,
  [1887] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_infix_definition_repeat1,
    STATE(125), 1,
      sym_infix_function_definition,
    STATE(187), 1,
      sym_string,
    STATE(60), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(64), 2,
      sym_comment,
      sym_block_comment,
  [1920] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_EQ,
    ACTIONS(255), 1,
      anon_sym_policy,
    STATE(65), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(251), 5,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_target,
      anon_sym_condition,
  [1947] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(113), 8,
      anon_sym_import,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_COLON,
      anon_sym_policyset,
      anon_sym_function,
  [1968] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_policy,
    STATE(67), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(257), 6,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_condition,
  [1990] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      anon_sym_target,
    ACTIONS(51), 1,
      anon_sym_condition,
    ACTIONS(261), 2,
      anon_sym_permit,
      anon_sym_deny,
    STATE(68), 2,
      sym_comment,
      sym_block_comment,
    STATE(124), 3,
      sym_rule_permitordeny,
      sym_target_definition,
      sym_condition_definition,
  [2016] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 1,
      anon_sym_policy,
    STATE(69), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(263), 6,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_rule,
      anon_sym_target,
      anon_sym_condition,
  [2038] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      anon_sym_policy,
    STATE(70), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(267), 5,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_target,
      anon_sym_condition,
  [2059] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(271), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2078] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_inv,
    STATE(102), 1,
      sym_infix_inverse_definition,
    STATE(72), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(273), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2101] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_apply,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      anon_sym_rule,
    STATE(77), 1,
      aux_sym_policy_definition_repeat1,
    STATE(73), 2,
      sym_comment,
      sym_block_comment,
    STATE(119), 2,
      sym_policy_combining_algorithm_reference,
      sym_rule_definition,
  [2128] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(281), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(283), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2166] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(287), 1,
      anon_sym_policy,
    STATE(76), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(285), 5,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_target,
      anon_sym_condition,
  [2187] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 1,
      anon_sym_apply,
    ACTIONS(294), 1,
      anon_sym_rule,
    STATE(119), 2,
      sym_policy_combining_algorithm_reference,
      sym_rule_definition,
    STATE(77), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_policy_definition_repeat1,
  [2212] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_apply,
    ACTIONS(279), 1,
      anon_sym_rule,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_policy_definition_repeat1,
    STATE(78), 2,
      sym_comment,
      sym_block_comment,
    STATE(119), 2,
      sym_policy_combining_algorithm_reference,
      sym_rule_definition,
  [2239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(299), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2258] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      anon_sym_policy,
    STATE(80), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(301), 5,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_target,
      anon_sym_condition,
  [2279] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_apply,
    ACTIONS(279), 1,
      anon_sym_rule,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_policy_definition_repeat1,
    STATE(81), 2,
      sym_comment,
      sym_block_comment,
    STATE(119), 2,
      sym_policy_combining_algorithm_reference,
      sym_rule_definition,
  [2306] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(307), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2325] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      anon_sym_policy,
    STATE(83), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(309), 5,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_target,
      anon_sym_condition,
  [2346] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(313), 6,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_attribute,
      anon_sym_category,
      anon_sym_policyset,
      anon_sym_function,
  [2365] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      anon_sym_policy,
    STATE(85), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(315), 5,
      anon_sym_RBRACE,
      anon_sym_policyset,
      anon_sym_apply,
      anon_sym_target,
      anon_sym_condition,
  [2386] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_inv,
    STATE(104), 1,
      sym_infix_inverse_definition,
    STATE(86), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(319), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2409] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_inv,
    STATE(98), 1,
      sym_infix_inverse_definition,
    STATE(87), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(321), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2432] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_apply,
    ACTIONS(279), 1,
      anon_sym_rule,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_policy_definition_repeat1,
    STATE(88), 2,
      sym_comment,
      sym_block_comment,
    STATE(119), 2,
      sym_policy_combining_algorithm_reference,
      sym_rule_definition,
  [2459] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(130), 1,
      sym_string,
    STATE(89), 2,
      sym_comment,
      sym_block_comment,
    STATE(93), 2,
      sym__string_singlequote,
      sym__string_doublequote,
  [2486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(127), 5,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      aux_sym_attribute_definition_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2504] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(123), 5,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      aux_sym_attribute_definition_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2522] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(119), 5,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      aux_sym_attribute_definition_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2540] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(107), 5,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      aux_sym_attribute_definition_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2558] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_string,
    STATE(60), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(94), 2,
      sym_comment,
      sym_block_comment,
  [2582] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(113), 5,
      anon_sym_RBRACE,
      aux_sym_castable_string_token1,
      aux_sym_attribute_definition_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2600] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym_string,
    STATE(60), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(96), 2,
      sym_comment,
      sym_block_comment,
  [2624] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_string,
    STATE(60), 2,
      sym__string_singlequote,
      sym__string_doublequote,
    STATE(97), 2,
      sym_comment,
      sym_block_comment,
  [2648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(319), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2665] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(327), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2682] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(329), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2699] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_infix_keyword,
    ACTIONS(333), 2,
      anon_sym_comm,
      anon_sym_allowbags,
    STATE(101), 2,
      sym_comment,
      sym_block_comment,
  [2720] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(335), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(337), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(273), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2771] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(339), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_namespace,
      anon_sym_infix,
  [2788] = 5,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      anon_sym_STAR_SLASH,
    STATE(112), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(341), 2,
      anon_sym_SLASH_SLASH,
      aux_sym_block_comment_token1,
    STATE(106), 2,
      sym_comment,
      sym_block_comment,
  [2806] = 6,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 1,
      aux_sym_infix_function_definition_token1,
    ACTIONS(347), 1,
      anon_sym_DASH_GT,
    STATE(113), 1,
      aux_sym_function_definition_repeat1,
    STATE(107), 2,
      sym_comment,
      sym_block_comment,
  [2826] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(108), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_function_call_repeat1,
  [2844] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(354), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [2860] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      aux_sym_attribute_definition_token1,
    STATE(111), 1,
      aux_sym_attribute_definition_repeat1,
    STATE(110), 2,
      sym_comment,
      sym_block_comment,
  [2880] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(358), 1,
      aux_sym_attribute_definition_token1,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_attribute_definition_repeat1,
    STATE(111), 2,
      sym_comment,
      sym_block_comment,
  [2900] = 5,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(362), 1,
      anon_sym_STAR_SLASH,
    STATE(115), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(341), 2,
      anon_sym_SLASH_SLASH,
      aux_sym_block_comment_token1,
    STATE(112), 2,
      sym_comment,
      sym_block_comment,
  [2918] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(364), 1,
      aux_sym_infix_function_definition_token1,
    ACTIONS(367), 1,
      anon_sym_DASH_GT,
    STATE(113), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_function_definition_repeat1,
  [2936] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 1,
      anon_sym_clause,
    STATE(42), 1,
      aux_sym_target_definition_repeat1,
    STATE(52), 1,
      sym_target_clause_definition,
    STATE(114), 2,
      sym_comment,
      sym_block_comment,
  [2956] = 4,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(369), 2,
      anon_sym_SLASH_SLASH,
      aux_sym_block_comment_token1,
    STATE(115), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2972] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(374), 3,
      anon_sym_RBRACE,
      anon_sym_apply,
      anon_sym_rule,
  [2988] = 6,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 1,
      aux_sym_infix_function_definition_token1,
    ACTIONS(376), 1,
      anon_sym_DASH_GT,
    STATE(107), 1,
      aux_sym_function_definition_repeat1,
    STATE(117), 2,
      sym_comment,
      sym_block_comment,
  [3008] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(378), 3,
      anon_sym_RBRACE,
      anon_sym_apply,
      anon_sym_rule,
  [3024] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(380), 3,
      anon_sym_RBRACE,
      anon_sym_apply,
      anon_sym_rule,
  [3040] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(384), 1,
      aux_sym_attribute_definition_token1,
    STATE(120), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_attribute_definition_repeat1,
  [3058] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(121), 2,
      sym_comment,
      sym_block_comment,
  [3076] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_function_call_repeat1,
    STATE(122), 2,
      sym_comment,
      sym_block_comment,
  [3096] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_function_call_repeat1,
    STATE(123), 2,
      sym_comment,
      sym_block_comment,
  [3116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(124), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(397), 3,
      anon_sym_RBRACE,
      anon_sym_apply,
      anon_sym_rule,
  [3132] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(399), 3,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [3148] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_function_call_repeat1,
    STATE(126), 2,
      sym_comment,
      sym_block_comment,
  [3168] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_function_call_repeat1,
    STATE(127), 2,
      sym_comment,
      sym_block_comment,
  [3188] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      aux_sym__string_doublequote_token1,
    STATE(128), 2,
      sym_comment,
      sym_block_comment,
  [3205] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(129), 2,
      sym_comment,
      sym_block_comment,
  [3220] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(409), 2,
      anon_sym_RBRACE,
      aux_sym_attribute_definition_token1,
    STATE(130), 2,
      sym_comment,
      sym_block_comment,
  [3235] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      aux_sym__string_doublequote_token1,
    STATE(131), 2,
      sym_comment,
      sym_block_comment,
  [3252] = 4,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(415), 2,
      aux_sym_infix_function_definition_token1,
      anon_sym_DASH_GT,
    STATE(132), 2,
      sym_comment,
      sym_block_comment,
  [3267] = 3,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(417), 3,
      anon_sym_SLASH_SLASH,
      aux_sym_block_comment_token1,
      anon_sym_STAR_SLASH,
  [3280] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
    ACTIONS(421), 1,
      aux_sym__string_singlequote_token1,
    STATE(134), 2,
      sym_comment,
      sym_block_comment,
  [3297] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(135), 2,
      sym_comment,
      sym_block_comment,
  [3312] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(423), 1,
      anon_sym_SQUOTE,
    ACTIONS(425), 1,
      aux_sym__string_singlequote_token1,
    STATE(136), 2,
      sym_comment,
      sym_block_comment,
  [3329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(137), 2,
      sym_comment,
      sym_block_comment,
  [3344] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(429), 1,
      aux_sym__string_singlequote_token1,
    STATE(138), 2,
      sym_comment,
      sym_block_comment,
  [3361] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      aux_sym__string_doublequote_token1,
    STATE(139), 2,
      sym_comment,
      sym_block_comment,
  [3378] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(435), 1,
      anon_sym_SQUOTE,
    ACTIONS(437), 1,
      aux_sym__string_singlequote_token1,
    STATE(140), 2,
      sym_comment,
      sym_block_comment,
  [3395] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    ACTIONS(441), 1,
      aux_sym__string_doublequote_token1,
    STATE(141), 2,
      sym_comment,
      sym_block_comment,
  [3412] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(142), 2,
      sym_comment,
      sym_block_comment,
  [3427] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      sym_nested_identifier,
    STATE(49), 1,
      sym_nested_wildcard_identifier,
    STATE(143), 2,
      sym_comment,
      sym_block_comment,
  [3444] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(144), 2,
      sym_comment,
      sym_block_comment,
  [3458] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(449), 1,
      anon_sym_EQ,
    STATE(145), 2,
      sym_comment,
      sym_block_comment,
  [3472] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    STATE(146), 2,
      sym_comment,
      sym_block_comment,
  [3486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    STATE(147), 2,
      sym_comment,
      sym_block_comment,
  [3500] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(148), 2,
      sym_comment,
      sym_block_comment,
  [3514] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(457), 1,
      anon_sym_EQ,
    STATE(149), 2,
      sym_comment,
      sym_block_comment,
  [3528] = 4,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(459), 1,
      aux_sym_infix_function_definition_token1,
    STATE(150), 2,
      sym_comment,
      sym_block_comment,
  [3542] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(461), 1,
      sym_nested_identifier,
    STATE(151), 2,
      sym_comment,
      sym_block_comment,
  [3556] = 4,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(463), 1,
      aux_sym_comment_token1,
    STATE(152), 2,
      sym_comment,
      sym_block_comment,
  [3570] = 4,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(465), 1,
      aux_sym_infix_function_definition_token1,
    STATE(153), 2,
      sym_comment,
      sym_block_comment,
  [3584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(154), 2,
      sym_comment,
      sym_block_comment,
  [3598] = 4,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(469), 1,
      sym_operator,
    STATE(155), 2,
      sym_comment,
      sym_block_comment,
  [3612] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(471), 1,
      sym_nested_identifier,
    STATE(156), 2,
      sym_comment,
      sym_block_comment,
  [3626] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
    STATE(157), 2,
      sym_comment,
      sym_block_comment,
  [3640] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    STATE(158), 2,
      sym_comment,
      sym_block_comment,
  [3654] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(159), 2,
      sym_comment,
      sym_block_comment,
  [3668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(479), 1,
      anon_sym_EQ,
    STATE(160), 2,
      sym_comment,
      sym_block_comment,
  [3682] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      sym_nested_identifier,
    STATE(161), 2,
      sym_comment,
      sym_block_comment,
  [3696] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(483), 1,
      anon_sym_EQ,
    STATE(162), 2,
      sym_comment,
      sym_block_comment,
  [3710] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(485), 1,
      sym_nested_identifier,
    STATE(163), 2,
      sym_comment,
      sym_block_comment,
  [3724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(487), 1,
      sym_nested_identifier,
    STATE(164), 2,
      sym_comment,
      sym_block_comment,
  [3738] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(489), 1,
      aux_sym_attribute_definition_token1,
    STATE(165), 2,
      sym_comment,
      sym_block_comment,
  [3752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    STATE(166), 2,
      sym_comment,
      sym_block_comment,
  [3766] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(493), 1,
      anon_sym_DQUOTE,
    STATE(167), 2,
      sym_comment,
      sym_block_comment,
  [3780] = 4,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(495), 1,
      aux_sym_infix_function_definition_token1,
    STATE(168), 2,
      sym_comment,
      sym_block_comment,
  [3794] = 4,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(497), 1,
      sym_operator,
    STATE(169), 2,
      sym_comment,
      sym_block_comment,
  [3808] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(499), 1,
      anon_sym_DASH_GT,
    STATE(170), 2,
      sym_comment,
      sym_block_comment,
  [3822] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      sym_identifier,
    STATE(171), 2,
      sym_comment,
      sym_block_comment,
  [3836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(503), 1,
      sym_nested_identifier,
    STATE(172), 2,
      sym_comment,
      sym_block_comment,
  [3850] = 4,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(505), 1,
      sym_operator,
    STATE(173), 2,
      sym_comment,
      sym_block_comment,
  [3864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(507), 1,
      anon_sym_EQ,
    STATE(174), 2,
      sym_comment,
      sym_block_comment,
  [3878] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    STATE(175), 2,
      sym_comment,
      sym_block_comment,
  [3892] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    STATE(176), 2,
      sym_comment,
      sym_block_comment,
  [3906] = 4,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(513), 1,
      aux_sym_infix_function_definition_token1,
    STATE(177), 2,
      sym_comment,
      sym_block_comment,
  [3920] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(178), 2,
      sym_comment,
      sym_block_comment,
  [3934] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    STATE(179), 2,
      sym_comment,
      sym_block_comment,
  [3948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(180), 2,
      sym_comment,
      sym_block_comment,
  [3962] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(521), 1,
      anon_sym_SQUOTE,
    STATE(181), 2,
      sym_comment,
      sym_block_comment,
  [3976] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
    STATE(182), 2,
      sym_comment,
      sym_block_comment,
  [3990] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    STATE(183), 2,
      sym_comment,
      sym_block_comment,
  [4004] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(527), 1,
      anon_sym_COLON,
    STATE(184), 2,
      sym_comment,
      sym_block_comment,
  [4018] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
    STATE(185), 2,
      sym_comment,
      sym_block_comment,
  [4032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    STATE(186), 2,
      sym_comment,
      sym_block_comment,
  [4046] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      anon_sym_COLON,
    STATE(187), 2,
      sym_comment,
      sym_block_comment,
  [4060] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(188), 2,
      sym_comment,
      sym_block_comment,
  [4074] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(189), 2,
      sym_comment,
      sym_block_comment,
  [4088] = 1,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
  [4092] = 1,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
  [4096] = 1,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 157,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 304,
  [SMALL_STATE(9)] = 349,
  [SMALL_STATE(10)] = 389,
  [SMALL_STATE(11)] = 427,
  [SMALL_STATE(12)] = 467,
  [SMALL_STATE(13)] = 497,
  [SMALL_STATE(14)] = 536,
  [SMALL_STATE(15)] = 575,
  [SMALL_STATE(16)] = 612,
  [SMALL_STATE(17)] = 639,
  [SMALL_STATE(18)] = 666,
  [SMALL_STATE(19)] = 695,
  [SMALL_STATE(20)] = 722,
  [SMALL_STATE(21)] = 749,
  [SMALL_STATE(22)] = 776,
  [SMALL_STATE(23)] = 803,
  [SMALL_STATE(24)] = 830,
  [SMALL_STATE(25)] = 857,
  [SMALL_STATE(26)] = 884,
  [SMALL_STATE(27)] = 911,
  [SMALL_STATE(28)] = 937,
  [SMALL_STATE(29)] = 963,
  [SMALL_STATE(30)] = 989,
  [SMALL_STATE(31)] = 1015,
  [SMALL_STATE(32)] = 1041,
  [SMALL_STATE(33)] = 1067,
  [SMALL_STATE(34)] = 1095,
  [SMALL_STATE(35)] = 1125,
  [SMALL_STATE(36)] = 1151,
  [SMALL_STATE(37)] = 1177,
  [SMALL_STATE(38)] = 1203,
  [SMALL_STATE(39)] = 1229,
  [SMALL_STATE(40)] = 1255,
  [SMALL_STATE(41)] = 1280,
  [SMALL_STATE(42)] = 1307,
  [SMALL_STATE(43)] = 1338,
  [SMALL_STATE(44)] = 1365,
  [SMALL_STATE(45)] = 1390,
  [SMALL_STATE(46)] = 1415,
  [SMALL_STATE(47)] = 1440,
  [SMALL_STATE(48)] = 1469,
  [SMALL_STATE(49)] = 1494,
  [SMALL_STATE(50)] = 1516,
  [SMALL_STATE(51)] = 1538,
  [SMALL_STATE(52)] = 1567,
  [SMALL_STATE(53)] = 1590,
  [SMALL_STATE(54)] = 1623,
  [SMALL_STATE(55)] = 1654,
  [SMALL_STATE(56)] = 1687,
  [SMALL_STATE(57)] = 1710,
  [SMALL_STATE(58)] = 1743,
  [SMALL_STATE(59)] = 1764,
  [SMALL_STATE(60)] = 1785,
  [SMALL_STATE(61)] = 1806,
  [SMALL_STATE(62)] = 1837,
  [SMALL_STATE(63)] = 1858,
  [SMALL_STATE(64)] = 1887,
  [SMALL_STATE(65)] = 1920,
  [SMALL_STATE(66)] = 1947,
  [SMALL_STATE(67)] = 1968,
  [SMALL_STATE(68)] = 1990,
  [SMALL_STATE(69)] = 2016,
  [SMALL_STATE(70)] = 2038,
  [SMALL_STATE(71)] = 2059,
  [SMALL_STATE(72)] = 2078,
  [SMALL_STATE(73)] = 2101,
  [SMALL_STATE(74)] = 2128,
  [SMALL_STATE(75)] = 2147,
  [SMALL_STATE(76)] = 2166,
  [SMALL_STATE(77)] = 2187,
  [SMALL_STATE(78)] = 2212,
  [SMALL_STATE(79)] = 2239,
  [SMALL_STATE(80)] = 2258,
  [SMALL_STATE(81)] = 2279,
  [SMALL_STATE(82)] = 2306,
  [SMALL_STATE(83)] = 2325,
  [SMALL_STATE(84)] = 2346,
  [SMALL_STATE(85)] = 2365,
  [SMALL_STATE(86)] = 2386,
  [SMALL_STATE(87)] = 2409,
  [SMALL_STATE(88)] = 2432,
  [SMALL_STATE(89)] = 2459,
  [SMALL_STATE(90)] = 2486,
  [SMALL_STATE(91)] = 2504,
  [SMALL_STATE(92)] = 2522,
  [SMALL_STATE(93)] = 2540,
  [SMALL_STATE(94)] = 2558,
  [SMALL_STATE(95)] = 2582,
  [SMALL_STATE(96)] = 2600,
  [SMALL_STATE(97)] = 2624,
  [SMALL_STATE(98)] = 2648,
  [SMALL_STATE(99)] = 2665,
  [SMALL_STATE(100)] = 2682,
  [SMALL_STATE(101)] = 2699,
  [SMALL_STATE(102)] = 2720,
  [SMALL_STATE(103)] = 2737,
  [SMALL_STATE(104)] = 2754,
  [SMALL_STATE(105)] = 2771,
  [SMALL_STATE(106)] = 2788,
  [SMALL_STATE(107)] = 2806,
  [SMALL_STATE(108)] = 2826,
  [SMALL_STATE(109)] = 2844,
  [SMALL_STATE(110)] = 2860,
  [SMALL_STATE(111)] = 2880,
  [SMALL_STATE(112)] = 2900,
  [SMALL_STATE(113)] = 2918,
  [SMALL_STATE(114)] = 2936,
  [SMALL_STATE(115)] = 2956,
  [SMALL_STATE(116)] = 2972,
  [SMALL_STATE(117)] = 2988,
  [SMALL_STATE(118)] = 3008,
  [SMALL_STATE(119)] = 3024,
  [SMALL_STATE(120)] = 3040,
  [SMALL_STATE(121)] = 3058,
  [SMALL_STATE(122)] = 3076,
  [SMALL_STATE(123)] = 3096,
  [SMALL_STATE(124)] = 3116,
  [SMALL_STATE(125)] = 3132,
  [SMALL_STATE(126)] = 3148,
  [SMALL_STATE(127)] = 3168,
  [SMALL_STATE(128)] = 3188,
  [SMALL_STATE(129)] = 3205,
  [SMALL_STATE(130)] = 3220,
  [SMALL_STATE(131)] = 3235,
  [SMALL_STATE(132)] = 3252,
  [SMALL_STATE(133)] = 3267,
  [SMALL_STATE(134)] = 3280,
  [SMALL_STATE(135)] = 3297,
  [SMALL_STATE(136)] = 3312,
  [SMALL_STATE(137)] = 3329,
  [SMALL_STATE(138)] = 3344,
  [SMALL_STATE(139)] = 3361,
  [SMALL_STATE(140)] = 3378,
  [SMALL_STATE(141)] = 3395,
  [SMALL_STATE(142)] = 3412,
  [SMALL_STATE(143)] = 3427,
  [SMALL_STATE(144)] = 3444,
  [SMALL_STATE(145)] = 3458,
  [SMALL_STATE(146)] = 3472,
  [SMALL_STATE(147)] = 3486,
  [SMALL_STATE(148)] = 3500,
  [SMALL_STATE(149)] = 3514,
  [SMALL_STATE(150)] = 3528,
  [SMALL_STATE(151)] = 3542,
  [SMALL_STATE(152)] = 3556,
  [SMALL_STATE(153)] = 3570,
  [SMALL_STATE(154)] = 3584,
  [SMALL_STATE(155)] = 3598,
  [SMALL_STATE(156)] = 3612,
  [SMALL_STATE(157)] = 3626,
  [SMALL_STATE(158)] = 3640,
  [SMALL_STATE(159)] = 3654,
  [SMALL_STATE(160)] = 3668,
  [SMALL_STATE(161)] = 3682,
  [SMALL_STATE(162)] = 3696,
  [SMALL_STATE(163)] = 3710,
  [SMALL_STATE(164)] = 3724,
  [SMALL_STATE(165)] = 3738,
  [SMALL_STATE(166)] = 3752,
  [SMALL_STATE(167)] = 3766,
  [SMALL_STATE(168)] = 3780,
  [SMALL_STATE(169)] = 3794,
  [SMALL_STATE(170)] = 3808,
  [SMALL_STATE(171)] = 3822,
  [SMALL_STATE(172)] = 3836,
  [SMALL_STATE(173)] = 3850,
  [SMALL_STATE(174)] = 3864,
  [SMALL_STATE(175)] = 3878,
  [SMALL_STATE(176)] = 3892,
  [SMALL_STATE(177)] = 3906,
  [SMALL_STATE(178)] = 3920,
  [SMALL_STATE(179)] = 3934,
  [SMALL_STATE(180)] = 3948,
  [SMALL_STATE(181)] = 3962,
  [SMALL_STATE(182)] = 3976,
  [SMALL_STATE(183)] = 3990,
  [SMALL_STATE(184)] = 4004,
  [SMALL_STATE(185)] = 4018,
  [SMALL_STATE(186)] = 4032,
  [SMALL_STATE(187)] = 4046,
  [SMALL_STATE(188)] = 4060,
  [SMALL_STATE(189)] = 4074,
  [SMALL_STATE(190)] = 4088,
  [SMALL_STATE(191)] = 4092,
  [SMALL_STATE(192)] = 4096,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_castable_string, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_castable_string, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_singlequote, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_singlequote, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_doublequote, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_doublequote, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_singlequote, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_singlequote, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_doublequote, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_doublequote, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_identifier, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_identifier, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_castable_string, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_castable_string, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_argument, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_definition, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_definition, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policyset_definition, 5, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policyset_definition, 5, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policyset_definition, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policyset_definition, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_definition_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_definition_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_wildcard_identifier, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition, 2, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition, 2, 0, 0), SHIFT_REPEAT(143),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition, 2, 0, 0), SHIFT_REPEAT(151),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition, 2, 0, 0), SHIFT_REPEAT(101),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_definition_repeat1, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_definition_repeat1, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_infix_definition_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_infix_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_infix_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_clause_definition, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_clause_definition, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_reference, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_reference, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_definition, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_definition, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_combining_algorithm_reference, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_combining_algorithm_reference, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_definition, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_definition, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 5, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_definition, 9, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_definition, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_definition, 5, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_definition, 5, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_policy_definition_repeat1, 2, 0, 0),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policy_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_policy_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_definition, 6, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_definition, 6, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_definition, 7, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_definition, 7, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_definition_repeat1, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_policyset_definition_repeat1, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_policyset_definition_repeat1, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_definition, 8, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_definition, 7, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_inverse_definition, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_definition, 10, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 5, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_function_definition, 6, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_permitordeny, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 2, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_policy_definition_repeat1, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_definition_repeat1, 2, 0, 0),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_argument, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_infix_definition_repeat1, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_definition_repeat1, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_reference, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [453] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_keyword, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
