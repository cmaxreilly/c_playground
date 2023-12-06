/*
 * Author: C. Maxwell Reilly
 * Started: Dec 4, 2023
 * Finished:
 */

#include <stdio.h>
#include <math.h>
#include "include/functions.h"

int
main(void)
{
    /* Variables */
    int numbers[6] = { 104, 3773, 13, 121, 77, 30751 };
    int multiple_7, multiple_11, multiple_13, sum_is_odd_or_even, is_prime_number;

    /* Driver code */
    int i;
    int test = 12345;
    printf("Sum of digits of %d = %d\n\n", test, sum_of_digits(test));
    for ( i = 0;
            i < 6;
            i++)
    {
        driver_function(numbers[i], &multiple_7, &multiple_11, &multiple_13, &sum_is_odd_or_even, &is_prime_number);
        report(numbers[i], multiple_7, multiple_11, multiple_13, sum_is_odd_or_even, is_prime_number);
        printf("\n\n");

    }
    return 0;
}
