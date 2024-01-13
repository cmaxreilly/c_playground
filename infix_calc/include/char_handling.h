#ifndef CHAR_HANDLING_H
#define CHAR_HANDLING_H

#define MAXOP   100     /* Max size of operand or operator  */
#define NUMBER   '0'    /* signal that a number was found   */
#define BUFSIZE 100     /* Buffer size for ungetch          */
#define MAXVAL  100     /* maxium depthc of the val stack   */

double pop(void);

/* get a (possibly pushed back) character */
int getch(void);

/* push character back on input */
void ungetch(int c);

int getop(char s[]);

/* push: push f onto value stack */
void push(double f);

#endif // CHAR_HANDLING_H
