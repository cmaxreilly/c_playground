#include <stdio.h>
#include <stdlib.h>     /* for atof()   */
#include <ctype.h>
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
            case 'q':
                printf("Session terminated successfully\n");
                return(0);
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
    return(0);
}
