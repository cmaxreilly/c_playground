#include <stdio.h>      /* for getchar(), printf() */
#include <stdlib.h>     /* for atof()   */
#include <ctype.h>

#define NUMBER   '0'     /* signal that a number was found   */
#define BUFSIZE 100     /* Buffer size for ungetch */
#define MAXVAL  100     /* maxium depth of the val stack */
#define MAXOP   100     /* Maximum size of operand or operator. */

/* Function Declarations */

/* get a (possibly pushed back) character */
int getch(void);

/* push character back on input.
 * c = character. */
void ungetch(int c);

/* getop: get next operator or numeric operand */
int getop(char s[]);

/* pop: pop and return top value from stack */
double pop(void);

/* push a character to the top of the stack */
void push(double f);

/* Global Variables */

int sp = 0;         /* next free stack position */
double val[MAXVAL]; /* value stack */
char buf[BUFSIZE];  /* buffer for ungetch */
int bufp = 0;

int
main(void)
{
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
    return 0;
}

int
getch(void) /* get a (possibly pushed back) character */
{
    if (bufp > 0)
    {
        --bufp;
        return (buf[bufp]);
    }
    else
        return getchar();

    /* Original implementation. Very code golfy and confusing for me.
     * return (bufp > 0) ? buf[--bufp] : getchar();
     */
}

/* Pushing the character back on the input is actually more of a metaphor. the standard input is
 * read only, and so getchar() can only move forward through the input. We work around this by simply
 * creating our own buffer as a substitute, since the operating system provides no such functionality.
 */
void
ungetch(int c)  /* push character back on input */
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

int
getop(char s[])
{
    int i, c;

    while((s[0] = c = getch()) == ' ' || c == '\t')
        ; /* Processes the whitespace at the beginning of the stdin.*/
    s[1] = '\0';
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

void
push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("effor: stack full, can't push %g\n", f);
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
