/*
 * Author: C. Maxwell Reilly
 * Started: Dec 4, 2023
 * Finished:
 */

#include <stdio.h>
#include <math.h>
#include "include/functions.h"

/* Function prototypes */


int
main(void)
{
    hello();
    /* Variables */
    int numbers[6] = { 104, 3773, 13, 121, 77, 30751 };
    int multiple_7, multiple_11, multiple_13, sum_is_odd_or_even, is_prime_number;
    /* Driver code */
    int i;
    printf("Sum of digits of 1111 = %d\n\n", sum_of_digits(1111, 0));
    for ( i = 0;
            i < 6;
            i++)
    {
        /*
        printf("%d\n", numbers[i]);
        */
        driver_function(numbers[i], &multiple_7, &multiple_11, &multiple_13, &sum_is_odd_or_even, &is_prime_number);
        report(numbers[i], multiple_7, multiple_11, multiple_13, sum_is_odd_or_even, is_prime_number);
        printf("\n\n");

    }
    return 0;
}
