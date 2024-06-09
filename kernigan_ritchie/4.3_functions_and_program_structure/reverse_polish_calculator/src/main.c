#include <stdio.h>
#include <stdlib.h>     /* for atof()   */
#include <ctype.h>
#include "../include/reverse_polish.h"

#define MAXOP   100     /* Max size of operand or operator  */

/* Global Variables */

int sp = 0;         /* next free stack position */
double val[MAXVAL]; /* value stack */
char buf[BUFSIZE];  /* buffer for ungetch */
int bufp = 0;       /* Used as a pointer to keep trakc of the current position of the buffer.
                       Mostly so pushing characters back to the buffer doesn't upset the order. */

/* reverse Polish calculator    */

int
main(void)
{
    int type;
    double op2;
    char s[MAXOP];
    printf("Enter your problem in reverse polish notation >> \n");
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


/* pop: pop and return top value from stack */
double
pop(void)
{
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}


int
getch(void) /* get a (possibly pushed back) character */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}


void
ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}


/* getop: get next operator or numeric operand */
int
getop(char s[])
{
    int i, c;

    while((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;   /* not a number */ i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')   /* collect fraction part */
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}


/* push: push f onto value stack */

void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("effor: stack full, can't push %g\n", f);
}

