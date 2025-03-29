/* Libraries */
#include <stdio.h> /* For printf() */
#include <ctype.h>
#include <stdlib.h>

#define NUMBER 0
#define BUFMAX 1000
int getch_buf[BUFMAX]; /* For ungetch */
int bufp = 0; /* pointer for buffer */

int getch(void);
int
main(void)
{
    printf("\nHello, world!\n\n");
    return 0;
}

int
getch(void)
{
    if (bufp > 0)
    {
        bufp--;
        return getch_buf[bufp];
    }
    else
    {
        return getchar();
    }
}
