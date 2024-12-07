[
 (namespace_definition_body)
; (policyset_definition_body)
; (policy_definition_body)
; (attribute_definition_body)
; (rule_definition_body)
] @local.scope

(attribute_definition
 name: (nested_identifier) @local.definition)
(expression
 reference: (expression_argument) @local.reference)

(function_definition
 shortName: (nested_identifier) @local.definition)
(function_call
 name: (nested_identifier) @local.reference)

(policy_definition
 name: (nested_identifier) @local.definition)
(policy_reference
 name: (nested_identifier) @local.reference)

(rule_definition
 name: (nested_identifier) @local.definition)
(rule_reference
 name: (nested_identifier) @local.reference)
