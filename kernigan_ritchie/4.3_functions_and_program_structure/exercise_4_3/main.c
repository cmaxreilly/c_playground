#include <stdio.h>
#include <stdlib.h>     /* for atof()   */
#include <ctype.h>
#include <math.h>
#include "reverse_polish.h"

#define MAXOP   100     /* Max size of operand or operator  */

/* reverse Polish calculator    */

int
main(void)
{
    int type;
    double op2;
    char s[MAXOP];
    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
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
                printf("\t%.8g\n", pop());
                break;
            case '%':
                op2 = pop();
                if (op2 != 0.0)  {
                    double i1, i2, f1, f2;    /* temporary variables for modf() */
                    f1 = modf(op2, &i1);
                    f2 = modf(pop(), &i2);
                    if (f1 == 0.0 && f2 == 0.0) {
                        int temporary_val, popped_val;
                        temporary_val = i1;
                        popped_val = i2;
                        push(popped_val % temporary_val);
                    } else
                        printf("Error: fractional part cannot undergo modulo operator");
                }
                else
                    printf("error: zero divisor\n");
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
    return(0);
}
