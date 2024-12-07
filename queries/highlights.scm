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
 "function"
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

(function_definition_parameter) @type

[
 (comment)
 (block_comment)
] @comment
