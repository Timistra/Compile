
const PREC = {
    COMMENT: 0, 
    ASSIGN: 1,         // Assignment operators
    RETURN:1,          // return statement
    STATEMENT:2,       // Statements
    OR: 2,             // ||
    AND: 3,            // &&
    BIT_OR: 4,         // |
    BIT_XOR: 5,        // ^
    BIT_AND: 6,        // &
    EQUALITY: 7,       // ==  !=
    REL: 8,            // <  <=  >  >=
    SHIFT: 9,          // <<  >>  >>>
    ADD: 10,           // +  -
    MULT: 11,          // *  /  %
    UNARY: 12,         // Unary operators like -a, !a
    COPY:12,           //copy_expression
    MOVE:12,           //move_expression
    CALL: 13,          // Function calls
    PARENS: 14,        // (Expression)
    ARRAY:14,          // [Expression]
    PATH:15,           // a::b
    PATH_SEGMENT:16,   // a::b::c
  };
  
  module.exports = grammar({
    name: 'mir',
  
    extras: $ => [
      $.line_comment,
      $.block_comment,
      /\s/,
    ],
  
    supertypes: $ => [
  
    ],
  
    inline: $ => [
  
    ],
  
    conflicts: $ => [
    
    ],
    
    word: $ => $.identifier,
  
    //rules
    rules: {
      program: $ => repeat($._toplevel_statement),
      
      _toplevel_statement: $ => choice(
        $.declaration,
        $.statement,
      ),
  
      type: $ => choice(
        $.primitive_type,          
        $.pointer_type,            
        $.array_type,              
        $.tuple_type,              
        //$.reference_type,  
        //$.qualified_path,  // <Type as Trait>::method
        //$.path_type,       // Prefix Path
      ),
      
      primitive_type: _ => choice(
        'i32', 'u32', 'i64', 'u64', 'f32', 'f64', 'bool', 'char', 'str', 'usize'
      ),

      pointer_type: $ => seq(
        '*',
        choice('const','mut'),
        choice(
          $.primitive_type,
          seq('(',')'),
        )
      ),

      array_type: $ => seq(
        '[',
        $.primitive_type,
        ';',
        $.int,
        ']'
      ),

      tuple_type: $ => seq(
        '(',
        commaSep1($.identifier),
        ')',
      ),
      
      // Declarations
      parameters: $ => commaSep1($.parameter),
  
      parameter: $ => seq(
        $.identifier,
        ':',
        $.type,
      ),

      returns: $ => choice(
        seq(
          '(',
          commaSep($.type),
          ')',
        ),
        $.type,
      ),
  
      declaration: $ => choice(
        $.variable_declaration,
        $.function_declaration,
      ),
  
      variable_declaration: $ => seq(
        'let',
        optional('mut'),
        $.identifier,
        ':',
        choice(
            $.type, 
            seq('(', ')'),
        ),
        ';',
      ),

      function_declaration: $ => prec.left(seq(
        $.function_header, 
        $.function_body, 
      )),

      function_header: $ => seq(
        'fn',
        $.identifier,
        '(',
        optional($.parameters),
        ')',
        '->',
        $.returns
      ),

      function_body: $ => seq(
        '{',
        optional(repeat(choice($.declaration,$.statement))),
        '}',
      ),
  
  
      // Statementss
      statement: $ => prec(PREC.STATEMENT, choice(
        $.assignment_statement,
        //$.drop_statement,
        //$.return_statement,
        //$.block,
        //$.basic_block,
        //$.scope,
        //$.debug_statement,
        //$.assert_statement,
     )),
  
      assignment_statement: $ => prec.left(PREC.ASSIGN, seq(
        field('left', choice($._lvalue)),
        '=',
        field('right', choice($.expression)), 
        ';',
      )),
  
      // Expressions
      expression: $ => prec.left(PREC.CALL, choice(
        $.binary_expression, 
        $.unary_expression,
        $.function_call_expression,
        $._lvalue,
        $.const_expression,
        $.copy_expression,
        //$.move_expression,
        //$.tuple_access_expression,
        //$.tuple_expression,
        //$.array_expression,
        //$.as_expression,
        //$.struct_initialization_expression,
        //$.complex_value,
        //$.parenthesized_expression,
      )),
  
      binary_expression: $ => choice(
      
      ),
  
      unary_expression: $ => prec.left(PREC.UNARY, choice(
        seq('!', $.expression),
        seq('-', $.expression),
        //$.address_of_expression,
        //$.dereference_expression,
      )),

      function_call_expression: $ => seq(
        $.identifier,
        '(',
        commaSep($.expression),
        ')',
        ';',
      ),
  
      _lvalue: $ => choice(
        $.identifier,
        $.field_access,
        $.array_access,
      ),

      field_access: $ => seq(
        $.identifier,
        '.',
        $._lvalue,
      ),

      array_access: $ => seq(
        $.identifier,
        '[',
        $.expression,
        ']',
      ),
      
      const_expression: $ => choice(
        $.constant,
      ),

      copy_expression: $ => seq(
        'copy',
        $.expression,
      ),

      // Constants
      constant: $ => choice(
        $.int,                       
        $.uint,                      
        $.float,                    
        $.bool,                      
        $.bytes,                    
        $.static_string,                      
      ),
      
      identifier: _ => /[_a-zA-Z][_a-zA-Z0-9]*/,
  
      int: _ => /\d+/,
  
      uint: _ => /\d+u\d*/,
  
      float: _ => /\d+\.\d+/,
  
      bool: _ => choice('true','false'),
  
      bytes: _ => /b".*"/,
  
      static_string: _ => /\".*\"/,

      comment: $ => choice(
        $.line_comment,
        $.block_comment,
      ),

      line_comment: _ => token(prec(PREC.COMMENT, seq('//',  /.*/))),

      block_comment: _ => token(prec(PREC.COMMENT, seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),
    },
  });
  
  /**
   * Creates a rule to match one or more of the rules separated by separator
   *
   * @param {RuleOrLiteral} rule
   *
   * @param {RuleOrLiteral} separator
   *
   * @return {SeqRule}
   *
   */
  function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
  }
  
  /**
   * Creates a rule to match one or more of the rules separated by a comma
   *
   * @param {RuleOrLiteral} rule
   *
   * @return {SeqRule}
   *
   */
  function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)));
  }
  
  /**
   * Creates a rule to optionally match one or more of the rules separated by a comma
   *
   * @param {RuleOrLiteral} rule
   *
   * @return {ChoiceRule}
   *
   */
  function commaSep(rule) {
    return optional(commaSep1(rule));
  }
  
  /**
  * Creates a rule to match one or more of the rules separated by a point
  *
  * @param {RuleOrLiteral} rule
  *
  * @return {SeqRule}
  *
  */
  function pointSep1(rule) {
    return seq(rule, repeat(seq('.', rule)));
  }
    
  /**
    * Creates a rule to optionally match one or more of the rules separated by a point
    *
    * @param {RuleOrLiteral} rule
    *
    * @return {ChoiceRule}
    *
    */
  function pointSep(rule) {
    return optional(pointSep1(rule));
  }