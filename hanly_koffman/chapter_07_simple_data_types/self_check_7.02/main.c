/*
 * Self check exercises from HK chapter 7.
 */

#include <stdio.h>

#define START_CHAR  'a'
#define END_CHAR    'z'

int
main(void)
{
    int char_code; /* numeric code of each character printed */

    printf("Self check 1. a.\n");
    printf("(int)'D' - (int)'A' = %d\n", (int)'D' - (int)'A');
    printf("Self check 1. b.\n");
    printf("(char)((int)'C' + 2) = %d\n", (char)((int)'C' + 2));
    printf("Self check 1. c.\n");
    printf("(int)'6' - (int)'7' = %d\n", (int)'6' - (int)'7');
    printf("\nSelf check 2:\n");
    printf("Write a for loop that would print the alphabet in lowercase letters, assuming\n");
    printf("that letters have consecutive codes\n");

    for     (char_code = (int)START_CHAR;
            char_code <= (int)END_CHAR;
            char_code += 1)
        printf("%c", (char)char_code);
    printf("\n");

    return(0);
}
