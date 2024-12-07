[
 "advice"
 "allowbags"
 "apply"
 "attribute"
 "category"
 "condition"
 "clause"
 "comm"
 "deny"
 "import"
 "infix"
 "inv"
 "namespace"
 "obligation"
 "permit"
 "policy"
 "policyCombinator"
 "policyset"
 "target"
 "rule"
 "ruleCombinator"
] @keyword

[
 "["
 "]"
 "("
 ")"
 "{"
 "}"
] @punctuation.bracket

[
 "."
 ","
] @punctuation.delimeter

(string) @string
(number) @number
(boolean) @constant.builtin
(datatype) @type

[
 (identifier)
 (nested_identifier)
 (nested_wildcard_identifier)
] @property
(function_reference
 "function" @property)

[
 (operator)
 "="
 ":"
 "->"
 "and"
 "or"
] @operator

(function_definition 
 shortName: (nested_identifier) @function)
(function_call
 name: (nested_identifier) @function.method)
(function_reference
 name: (nested_identifier) @function)

(function_definition_parameter) @type

(decision_definition
 decision_type: (decision_definition_type) @keyword)

[
 (comment)
 (block_comment)
] @comment
