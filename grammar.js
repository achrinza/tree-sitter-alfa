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
    nested_identifier: $ => seq(
      field('segment', /[a-zA-Z][a-zA-Z_0-9]*/),
      repeat(seq(
        token.immediate('.'),
        field('segment', token.immediate(/[a-zA-Z][a-zA-Z_0-9]*/)),
      )),
    ),
    nested_wildcard_identifier: $ => seq(
      prec(2,$.nested_identifier),
      optional(token(seq(
        token.immediate('.'),
        field('segment', token.immediate('*'))))),
    ),

    import_statement: $ => seq(
      'import',
      field('name', 
        $.nested_wildcard_identifier,
      ),
    ),
    
    namespace_definition: $ => seq(
      'namespace',
      field('name', $.nested_identifier),
      field('body', $.namespace_definition_body),
    ),

    namespace_definition_body: $ => seq(
      '{',
      repeat(
        choice(
          $.import_statement,
          $.attribute_definition,
          $.category_definition,
          $.policyset_definition,
          $.function_definition,
          $.rule_combinator_definition,
          $.policy_combinator_definition,
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
      optional(seq(
        token.immediate(':'),
        $.datatype,
      )),
    ),

    datatype: $ => token.immediate(
      /[a-zA-Z]+/,
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
      field('name', $.nested_identifier),
      optional($.attribute_attributes),
      field('body', $.attribute_definition_body),
    ),

    attribute_definition_body: $ => seq(
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

    attribute_attributes: $ => seq(
      '[',
      repeat(seq(
        field('key', /[a-zA-Z]+/),
        optional(seq(
          '=',
          field('value', $.literal_identifier),
        )))),
      ']',
    ),

    category_definition: $ => seq(
      'category',
      '=',
      field('name', $.string),
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
      field('name', $.nested_identifier),
      field('body', $.policyset_definition_body),
    ),

    policyset_definition_body: $ => seq(
      '{',
      repeat(choice(
        $.target_definition,
        $.policyset_definition,
        $.policy_combining_algorithm_reference,
        $.policy_definition,
        $.policy_reference,
        $.obligation_definition,
        $.advice_definition,
      )),
      '}',
    ),

    policy_combining_algorithm_reference: $ => seq(
      'apply',
      field('name', $.identifier),
    ),

    policy_reference: $ => seq(
      optional('policy'),
      field('name', $.nested_identifier),
    ),

    policy_definition: $ => seq(
      'policy',
      field('name', $.nested_identifier),
      optional(seq(
        '=',
        $.string,
      )),
      $.policy_definition_body,
    ),

    policy_definition_body: $ => seq(
      '{',
      repeat(choice(
        $.target_definition,
        $.policy_combining_algorithm_reference,
        $.policy_definition,
        $.rule_reference,
        $.rule_definition,
        $.obligation_definition,
        $.advice_definition,
      )),
      '}',
    ),

    rule_reference: $ => seq(
      'rule',
      field('name', $.nested_identifier),
    ),

    rule_definition: $ => seq(
      'rule',
      optional(field('name', $.nested_identifier)),
      $.rule_definition_body,
    ),

    rule_definition_body: $ => seq(
      '{',
      repeat(choice(
        $.rule_permitordeny,
        $.decision_definition,
        $.target_definition,
        $.condition_definition,
      )),
      '}',
    ),

    rule_permitordeny: $ => choice(
      'permit',
      'deny',
    ),

    function_call: $ => seq(
      field('name', $.nested_identifier),
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
      field('shortName', $.nested_identifier),
      '=',
      field('uri', $.string),
      ':',
      field('parameters', repeat1(field('parameter_type', $.function_definition_parameter))),
      '->',
      field('return_type', $.function_definition_parameter),
    ),

    function_definition_parameter: $ => /[a-zA-Z\[\]]+/,

/*    function_reference: $ => seq(
      token(prec(2,seq('function',
                     '[',))),
      $.nested_identifier,
      ']',
      ),*/

    

    function_reference: $ => seq(
      'function',
      prec(2,'['),
      field('name', $.nested_identifier),
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
        field('operator', choice('and', 'or')),
        choice($.expression, $.unary_expression)
      )),
    ),

    expression: $ => seq(
      $.expression_argument,
      optional(seq(
        $.operator,
        field('reference', $.expression_argument),
      )),
    ),

    expression_argument: $ => choice(
      $.nested_identifier,
      $.literal_identifier,
      $.function_call,
    ),

    decision_definition_type: $ => seq(
      'on',
      choice(
        'permit',
        'deny',
      ),
    ),

    decision_definition: $ => seq(
      field('decision_type', $.decision_definition_type),
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
      field('uri', $.string),
    ),

    obligation_definition: $ => seq(
      'obligation',
      field('name', $.nested_identifier),
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
      'advice',
      '=',
      $.string,
    ),

    advice_definition: $ => seq(
      'advice',
      field('name', $.nested_identifier),
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

    rule_combinator_definition: $ => seq(
      'ruleCombinator',
      field('name', $.nested_identifier),
      $.string,
    ),

    policy_combinator_definition: $ => seq(
      'policyCombinator',
      field('name', $.nested_identifier),
      $.string,
    ),
  }
});
