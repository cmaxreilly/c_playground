# Problem

## Initial Plan I want ot write a calculator that parses infix expressions from a CLI interface. I
want it to have two modes, namely an interactive mode which is the default, and a postfix option,
which takes a commandline option and parses another argument. The main function should do all of
this parsing and either select from the functionalities or return a good error help message.

Once your main function selects a mode, it should call one of the functions will take a string and
return a floating point number. These functions will in turn call the calculator module, which will
take the xpression and calculate it using my algorithm in docs/problem.txt (this document). This
algorithm will make us of a set of stacks implemented using structs as nodes. Once it returns the
correct number, the main function will display it and exit or loop, depending on the mode

# Algorithm

- main
    - determine-mode
        - if interactive-mode
            - interactive-mode()
        - if commandline-mode
            commandline-mode()
        - if invalid mode
            - help-mode

- interactive-mode
    - print explanation
    - while (input is not an exit token)
        - print prompt
        - if (user enter expression)
            - calculator-module(expression)
            - print returned value
            - print prompt
        - else if (user enters exit token)
            - exit 
        - else
            - probably something
    - exit

- commandline-mode
    - calculator-module(expression-argument)
- calculator-module
    - determine if the expression is valid
    - if expression not valid
        - return error message
        - exit
    - calculate expression
        1. If the character is an operand, push it onto the operand stack.
        2. If the characters is "(", then push it onto the operator stack. 
        3. If the characters is ")", then "process as explained above until the corresponding "(" is
           encounterd in the operator stack. At this stage, POP the operator stack and ignore "(".
        4. If we encounter an operator:
            - If the operator stack is empty, then push the operator onto the operator stack
            - If the operator stack is not empty and the operator's precedence is greater than the
              precedence of the stack top of the operator stack, then push the character onto the
              operator stack.
            - If the operator stack is not empty and the character's precedence is lower than the
              precedence of the stack top of operator stack, then we pop the operator with high
              precedence, and two values from the value stack, apply the operator to the values and
              store the result in the value stack. And, push the current iterated operator in the
              operator stack. 
        5. Once we have iterated the entire expression, we pop one operator from the operator stack
        and two values from the value operator and apply the operator to the values, store the
        result in the avlue stack, and keep on repeating this, until we have just a single value
        left in the value stack.
        6. the last value in the value stack will be the result.
    - return result

- help-mode

## Algorithm to solve Infix expressions
Until the end of the expression is reached, get one
character and perform only one of the steps (1) through (5):
    1. If the character is an operand, push it onto the operand stack.
    2. If the characters is "(", then push it onto the operator stack. 
    3. If the characters is ")", then "process as explained above until the corresponding "(" is
       encounterd in the operator stack. At this stage, POP the operator stack and ignore "(".
    4. If we encounter an operator:
        - If the operator stack is empty, then push the operator onto the operator stack
        - If the operator stack is not empty and the operator's precedence is greater than the
          precedence of the stack top of the operator stack, then push the character onto the
          operator stack.
        - If the operator stack is not empty and the character's precedence is lower than the
          precedence of the stack top of operator stack, then we pop the operator with high
          precedence, and two values from the value stack, apply the operator to the values and
          store the result in the value stack. And, push the current iterated operator in the
          operator stack. 
    5. Once we have iterated the entire expression, we pop one operator from the operator stack and
    two values from the value operator and apply the operator to the values, store the result in the
    avlue stack, and keep on repeating this, until we have just a single value left in the value
    stack.
    6. the last value in the value stack will be the result.

### Required data structures:
    - Operand Stack
    - Operator Stack

## Notes
- It looks like mostof the required functionality I require is in stdio.h, with a few functions from
  stdlib.h and string.h.
- I think that I could potentially yank the the first character from the string using sscanf. Here
  is the algorithm
    1. initialize a temp string variable called temp
    2. set the output of sscanf to temp
    3. figure out if temp is an operator, a operand, or an end parentheses.
    4. Push the temp to the correct stack.
    5. Repeat steps 1-4 until encountering an end parentheses, or a \0.
