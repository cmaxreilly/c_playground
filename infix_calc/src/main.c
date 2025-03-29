/* Libraries */
#include <stdio.h> /* For printf() */
#include <ctype.h>
#include <stdlib.h>

#define NUMBER 0
#define BUFMAX 1000
int getch_buf[BUFMAX]; /* For ungetch */
int bufp = 0; /* pointer for buffer */

int getch(void);
void ungetch(int);

int
main(void)
{
    int my_character;
    printf("\nHello, world!\n\n");
    printf("Enter a character >");
    my_character = getch();
    printf("your character was %c.\n", my_character);
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

void
ungetch(int character)
{
    if (bufp > BUFMAX)
    {
        printf("Buffer overflow!\n");
    }
    else
    {
        bufp++;
        getch_buf[bufp] = character;
    }
}
