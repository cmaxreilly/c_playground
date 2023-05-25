/*
 * Author: C. Maxwell Reilly
 * Date: Monday, May 25, 2023
 */

#include<stdio.h>

/* Constant macros */
#define CBEGIN 10
#define CLIMIT -5
#define CSTEP 5


int
main(void)
{
    /* Variable declaration */
    int     celsius;
    double  fahrenheit;

    /* Display the table heading */
    printf("    celsius    Fahrenheit\n");

    /* Display the table */
    for     (celsius = CBEGIN;
            celsius >= CLIMIT;
            celsius -= CSTEP) {
        fahrenheit = 1.8 * celsius + 32.0;
        printf("%6c%3d%8c%7.2f\n", ' ', celsius, ' ', fahrenheit);
    }
    return(0);

}

