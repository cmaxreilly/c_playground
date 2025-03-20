/*
 * Self check exercises from HK chapter 7.
 */

#include <stdio.h>
#include "../library.c"


int
main(void)
{
    printf("1. Evaluate each of the following expressions, assuming before each operation\n");
    printf("   that the value of variable today (type day_t) is thursday.\n");
    day_t today = thursday;

    printf("a. (int)monday = %d\n", (int)monday);
    printf("b. (int)today = %d\n", (int)today);
    printf("c. today < tuesday = %d\n", today < tuesday);
    printf("d. (day_t)(today + 1) = %d\n", (day_t)(today + 1));
    printf("e (day_t)(today - 1) = %d\n", (day_t)(today -1));
    printf("f. today >= thursday = %d\n", today >= thursday);

    return(0);
}
