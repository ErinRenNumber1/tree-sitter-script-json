module.exports = grammar({
    name: 'scriptjson',
  
    extras: $ => [
      /\s/
    ],
  
    supertypes: $ => [
      $._value
    ],
  
    rules: {
      document: $ => $._value,
  
      _value: $ => choice(
        $.object,
        $.array,
        $.number,
        $.string,
        $.true,
        $.false,
        $.null
      ),
  
      object: $ => seq(
        "{", commaSep(choice($.version_pair, $.description_pair, $.config_ui_pair)), "}"
      ),
  
      pair: $ => seq(
        field("key", choice($.valid_key)),
        ":",
        field("value", $._value)
      ),
  
      version_pair: $ => seq(
        field("key", seq('"', 'version', '"')),
        ":",
        field("value", $.string)
      ),

      description_pair: $ => seq(
        field("key", seq('"', 'description', '"')),
        ":",
        field("value", $.string)
      ),

      config_ui_pair: $ => seq(
        field("key", seq('"', 'configurationUi', '"')),
        ":",
        field("value", choice($.true, $.false))
      ),

      config_pair: $ => seq(
        field("key", seq('"', 'configuration', '"')),
        ":",
        field("value", $.config_object)
      ),

      config_object: $ => seq(
        "{", commaSep(choice($.type_pair, $.schema_pair)), "}"
      ),

      type_pair: $ => seq(
        field("key", seq('"', 'type', '"')),
        ":",
        field("value", choice(seq('"', 'single', '"'), seq('"', 'list', '"')))
      ),

      schema_pair: $ => seq(
        field("key", seq('"', 'schema', '"')),
        ":",
        field("value", $.array)
      ),

      array: $ => seq(
        "[", commaSep($._value), "]"
      ),
  
      string: $ => choice(
        seq('"', '"'),
        seq('"', $.string_content, '"')
      ),
  
      string_content: $ => repeat1(choice(
        token.immediate(/[^\\"\n]+/),
        $.escape_sequence
      )),

      valid_key: $ => repeat1(choice(
        seq('"', '"'),
        seq('"', $.valid_key_content, '"')
      )),

      valid_key_content: $ => repeat1(choice(
          "version"      
      )),
  
      escape_sequence: $ => token.immediate(seq(
        '\\',
        /(\"|\\|\/|b|n|r|t|u)/
      )),
  
      number: $ => {
        const hex_literal = seq(
          choice('0x', '0X'),
          /[\da-fA-F]+/
        )
  
        const decimal_digits = /\d+/
        const signed_integer = seq(optional(choice('-','+')), decimal_digits)
        const exponent_part = seq(choice('e', 'E'), signed_integer)
  
        const binary_literal = seq(choice('0b', '0B'), /[0-1]+/)
  
        const octal_literal = seq(choice('0o', '0O'), /[0-7]+/)
  
        const decimal_integer_literal = seq(
          optional(choice('-','+')),
          choice(
            '0',
            seq(/[1-9]/, optional(decimal_digits))
          )
        )
  
        const decimal_literal = choice(
          seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
          seq('.', decimal_digits, optional(exponent_part)),
          seq(decimal_integer_literal, optional(exponent_part))
        )
  
        return token(choice(
          hex_literal,
          decimal_literal,
          binary_literal,
          octal_literal
        ))
      },
  
      true: $ => "true",
  
      false: $ => "false",
  
      null: $ => "null"
    }
  });
  
  function commaSep1 (rule) {
    return seq(rule, repeat(seq(",", rule)))
  }
  
  function commaSep (rule) {
    return optional(commaSep1(rule))
  }