/*
 * Author: C. Maxwell Reilly
 * First Draft: May 26, 2024
 *
 * Program to print part of the collating sequence.
 */

#include <stdio.h>

#define START_CHAR  ' '
#define END_CHAR    'z'

int
main(void)
{
    int char_code; /* numeric code of each character printed */

    for (   char_code = (int)START_CHAR;
            char_code <= (int)END_CHAR;
            char_code = char_code + 1)
    {
        printf("%c = %d\n", (char)char_code, (int)char_code);
    }
    printf("\n");
    return 0;
}
