<<<<<<< HEAD
#ifndef REVERSE_POLISH_CALCULATOR_H
#define REVERSE_POLISH_CALCULATOR_H
=======
#ifndef REVERSE_POLISH_H
#define REVERSE_POLISH_H

>>>>>>> 2d87c6e (Catching up)
#include <stdio.h>
#include <stdlib.h>     /* for atof()   */
#include <ctype.h>

#define NUMBER   '0'     /* signal that a number was found   */
#define BUFSIZE 100     /* Buffer size for ungetch */
#define MAXVAL  100     /* maxium depthc of the val stack */

<<<<<<< HEAD
/* Function Declarations */

/* pop: pop and return top value from stack */
double pop(void);

/* get a (possibly pushed back) character */
int getch(void);

/* push character back on input.
 * c = character. */
void ungetch(int c);

/* getop: get next operator or numeric operand */
int getop(char s[]);

void push(double f);

#endif /* REVERSE_POLISH_CALCULATOR_H */
=======
/* Function declarations */

    /* getop: get next operator or numeric operand */
int getop(char s[]);
    /* get a (possibly pushed back) character */
int getch(void);
     /* push character back on input */
void ungetch(int c);
    /* Pop a character from the stack */
double pop(void);
    /* push: push f onto value stack */
void push(double f);
    /* Figure out what is on the top of the stack */
int getop(char s[]);




#endif // REVERSE_POLISH_H
>>>>>>> 2d87c6e (Catching up)
