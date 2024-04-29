/*
 * My hack at an infix calculator
 * 1st draft: Monday April 24, 2024
 */
#define TEST 1

#include <stdio.h>
#include <stdlib.h>
#include "include/stack.h"
#include "include/precedence.h"
#include "include/test.h"
#include "include/char_handling.h"

int
main(void)
{
    int type;
    double op2;
    char stack[MAXOP];
    char char_stack[MAXOP];
    int char_stack_top;
    double num_stack[MAXOP];
    printf("Enter problem in reverse polish notation.\n");
    printf("Enter 'q' to end session\n");

    /* Testing char stack functions */
    if (TEST == 1)
    {
        push_char(char_stack, 'p', &char_stack_top);
        printf("Test: p = %c\n", pop_char(char_stack, &char_stack_top));
    }

    while ((type = getop(stack)) != EOF) {
        switch (type) {
            case 'q':
                return 0;
            case NUMBER:
                /* push_char(atof(stack));
                break; */
                push_char(char_stack, atof(char_stack), &char_stack_top);
                break;
            case '+':
                push(pop() + pop());
                break;
                /* push_char(char_stack, (pop_char(char_stack, &char_stack_top) + pop_char(char_stack,
                                &char_stack_top)), &char_stack_top);*/
                break;
            case '*':
                push(pop() * pop());
                break;
                /* push_char(char_stack, (pop() * pop()), &char_stack_top);
                break; */
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error: zero divisor\n");
                break;
            case '\n':
                printf("\n%c.8g\n", pop_char(char_stack, &char_stack_top));
                break;
            default:
                printf("error: unknown command %s\n", char_stack);
                break;
        }
    }
    return(0);
}
