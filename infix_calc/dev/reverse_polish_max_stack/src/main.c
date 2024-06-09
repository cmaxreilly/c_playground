#include <stdio.h>
#include <stdlib.h>     /* for atof()   */
#include <ctype.h>
#include "../include/reverse_polish.h"
#include "../include/stack.h"

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
    test();
    int type;
    double op2;
    char s[MAXOP];
    printf("Enter your problem in reverse polish notation\n");
    printf(" >> ");
    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s)); /* converts the characters in s to a floating point number and pushes
                                  them to val. */
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
            case '%':
                op2 = pop();
                if (op2 != 0.0)
                    push((int)pop() % (int)op2);
                else
                    printf("error: zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                printf(" >> ");
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

    while((s[0] = c = getch()) == ' ' || c == '\t') /* So this is fairly opaque, but basically the
                                                       first half of this while statment assigns s[0] and
                                                       c to the output from the buffer and decides that, if
                                                       the output of getch is a space or tab, it does nothing. */
        ;
    s[1] = '\0';        /* I have no idea what this is, but it looks like it just assigns the second
                           entry in s to a null character for no reason, lol. */
    if (!isdigit(c) && c != '.')
        return c;   /* not a number */
    i = 0;
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

