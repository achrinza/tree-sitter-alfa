/**
 * @file Abbreviated Language for Authorization Version 1.0
 * @author Rifa Achrinza
 * @license GPL-2.0-or-later
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "alfa",
  extras: $ => [
    /\s/,
    $.comment,
    $.block_comment,
  ],
  rules: {
    // GENERAL
    
    source_file: $ => $._definition,
    _definition: $ => repeat1(
      choice(
        $.import_statement,
        $.infix_definition,
        $.namespace_definition,
      ),
    ),
    comment_multiline: $ => /\/\*[\s\S]*\*\//,
    comment: $ => /\/\/.*/,
    
    identifier: $ => /[a-zA-Z][a-zA-Z_0-9]*/,
/*    variable_identifier: $ => seq(
      '$',
      token.immediate($.identifier),
    ),*/
    nested_identifier: $ => /[a-zA-Z][a-zA-Z_0-9]*(\.[a-zA-Z][a-zA-Z_0-9]*)*/,
    nested_wildcard_identifier: $ => seq(
      $.nested_identifier,
      token.immediate('.*'),
    ),

    import_statement: $ => seq(
      'import',
      choice(
        $.nested_identifier,
        $.nested_wildcard_identifier,
      ),
    ),
    
    namespace_definition: $ => seq(
      'namespace',
      $.nested_identifier,
      '{',
      repeat(
        choice(
          $.import_statement,
          $.attribute_definition,
          $.category_definition,
          $.policyset_definition,
          $.function_definition,
        ),
      ),
      '}',
    ),

    literal_identifier: $ => choice(
      $.boolean,
      $.number,
      $.castable_string,
    ),
    
    boolean: $ => choice('true', 'false'),
    number: $ => '-?[0-9]+(.[0-9]+)?',
    string: $ => choice(
      $._string_singlequote,
      $._string_doublequote,
    ),
    _string_singlequote: $ => seq(
      "'",
      optional(token.immediate(/[^'\n]+/)),
      "'",
    ),
    _string_doublequote: $ => seq(
      '"',
      optional(token.immediate(/[^"\n]+/)),
      '"',
    ),
    castable_string: $ => seq(
      $.string,
      optional(token.immediate(//seq(
//        ':',
//        token.immediate($.data_type),
        /:[a-zA-Z]+/,
      ))//),
    ),

    comment: $ => seq(
      '//',
      prec(1, /.*/),
    ),

    block_comment: $ => seq(
      '/*',
      repeat(
        choice(
          /./,
          '//',
        ),
      ),
      '*/',
    ),

    // ATTRIBUTE / CATEGORY
    
    attribute_definition: $ => seq(
      'attribute',
      $.nested_identifier,
      '{',
      repeat(
        seq(
          /[a-z]+/,
          '=',
          choice(
            $.string,
            $.identifier,
          ),
        ),
      ),
      '}',
    ),

    category_definition: $ => seq(
      'category',
      '=',
      $.string,
    ),

    // POLICY (MAIN COMPONENTS)
    

    // POLICY (OTHERS)

    infix_definition: $ => seq(
      'infix',
      optional($.infix_keyword),
      '(',
      $.operator,
      ')',
      '=',
      '{',
      repeat($.infix_function_definition),
      '}',
      optional($.infix_inverse_definition),
    ),

    infix_keyword: $ => choice(
      'comm',
      'allowbags',
    ),

    infix_inverse_definition: $ => seq(
      'inv',
      $.operator,
    ),

    // An infix operator takes two arguments and returns one value
    infix_function_definition: $ => seq(
      $.string,
      ':',
      /\S+/,
      /\S+/,
      '->',
      /[a-z]+/,
    ),

    operator: $ => /-?[*/%+@^=<>&$_|]+/,

    policyset_definition: $ => seq(
      'policyset',
      $.nested_identifier,
      '{',
      repeat(choice(
        $.condition_definition,
        $.target_definition,
        $.policyset_definition,
        $.policy_combining_algorithm_reference,
        $.policy_definition,
        $.policy_reference,
      )),
      '}',
    ),

    policy_combining_algorithm_reference: $ => seq(
      'apply',
      $.identifier,
    ),

    policy_reference: $ => seq(
      'policy',
      $.nested_identifier,
    ),

    policy_definition: $ => seq(
      'policy',
      $.nested_identifier,
      optional(seq(
        '=',
        $.string,
      )),
      '{',
      repeat(choice(
        $.policy_combining_algorithm_reference,
        $.rule_definition,
      )),
      '}',
    ),

    rule_reference: $ => seq(
      'rule',
      $.nested_identifier
    ),

    rule_definition: $ => seq(
      'rule',
      optional($.nested_identifier),
      choice(
        $.rule_permitordeny,
        $.target_definition,
        $.condition_definition,
      ),
    ),

    rule_permitordeny: $ => choice(
      'permit',
      'deny',
    ),

    function_call: $ => seq(
      $.nested_identifier,
      '(',
      $.function_argument,
      repeat(seq(
        ',',
        $.function_argument,
      )),
      ')',
    ),

    function_argument: $ => choice(
      $.function_call,
      $.function_reference,
      $.literal_identifier,
      $.nested_identifier,
    ),

    function_definition: $ => seq(
      'function',
      $.nested_identifier,
      '=',
      $.string,
      ':',
      repeat(/\S+/),
      '->',
      /\S+/,
    ),

    function_reference: $ => seq(
      token(prec(2,seq('function',
                     '[',))),
      $.nested_identifier,
      ']',
    ),


    // #TODO: Break down references into individual tokens.
/*    anyatomic_type: $ => 'anyAtomic',

    anyatomic_bag_type: $ => 'bag[anyAtomic]',

    function_type: $ => 'function',

    anyatomic_or_bag_type: $ => 'anyAtomicOrBag',*/

    target_definition: $ => seq(
      'target',
      repeat1(choice(
        $.target_clause_definition,
      )),
    ),

    target_clause_definition: $ => seq(
      'clause',
      $.binary_expression,
    ),

    condition_definition: $ => seq(
      'condition',
      $.binary_expression,
    ),

    binary_expression: $ => choice(
      $.expression_argument,
      $.unary_expression,
    ),

    unary_expression: $ => seq(
      choice($.expression, $.unary_expression),
      prec.right(seq(
        choice('and', 'or'),
        choice($.expression, $.unary_expression)
      )),
    ),

    expression: $ => seq(
      $.expression_argument,
      optional(seq(
        $.operator,
        $.expression_argument,
      )),
    ),

    expression_argument: $ => choice(
//      $.nested_identifier,
      $.literal_identifier,
      $.function_call,
    ),

    decision_definition: $ => seq(
      choice('on permit', 'on deny'),
      '{',
      repeat(choice(
        $.obligation_reference,
        $.obligation_definition,
        $.advice_reference,
        $.advice_definition,
      )),
      '}',
    ),

    obligation_reference: $ => seq(
      'obligation',
      '=',
      $.string,
    ),

    obligation_definition: $ => seq(
      'obligation',
      $.nested_identifier,
      optional(seq(
        '{',
        repeat(seq(
          $.nested_identifier,
          '=',
          choice(
            $.literal_identifier,
            $.nested_identifier,
          )
        )),
        '}',
      )),
    ),

    advice_reference: $ => seq(
      'obligation',
      '=',
      $.string,
    ),

    advice_definition: $ => seq(
      'obligation',
      $.nested_identifier,
      optional(seq(
        '{',
        repeat(seq(
          $.nested_identifier,
          '=',
          choice(
            $.literal_identifier,
            $.nested_identifier,
          )
        )),
        '}',
      )),
    ),
  }
});
