/*
 * Author: C. Maxwell Reilly
 * Started: Tuesday Feb. 13, 2024
 * Finished:
 */

#include <stdio.h>
#include <math.h>
#include "functions.h"

int
main(void)
{

    /* Variables for my formula */

    /* Driver Variables */
    int n;


    /* Control Flow */
    printf("Hello! This program takes in a number and calculates that step in\n");
    printf("the Fibonacci sequence, as well as the ration at that step.\n");
    printf("Enter the step you would like to see >> ");
    scanf("%d", &n);
    printf("n = %d\n", n);
    printf("Divine Ratio = %lf\n", DIVINE_RATIO);

    return 0;

}
