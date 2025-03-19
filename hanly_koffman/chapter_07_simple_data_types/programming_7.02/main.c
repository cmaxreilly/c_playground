/*
 * Self check exercises from HK chapter 7.
 */

#include <stdio.h>

#define START_CHAR  'a'
#define END_CHAR    'z'

char
next_char(char input)
{
    int temp = (int) input;
    char output = (char)(temp + 1);
    return output;
}

int
main(void)
{

    printf("1.\n");
    printf("Write a function next_char that returns as its type char value the char-\n");
    printf("acter that follows in the collating sequence the value passed as the argu-\n");
    printf("ment for next_char. (For now, ignore the possibility of a boundary error.)\n");
    printf("2.\n");
    printf("Rewrite the loop in Self-Check Exercise 2 so it uses function next_char\n");
    printf("and has a type char loop control variable\n");
    char character;

    for ( character = 'a';
            character <= 'z';
            character = next_char(character))
        printf("%c", character);
    printf("\n");


    return(0);
}
