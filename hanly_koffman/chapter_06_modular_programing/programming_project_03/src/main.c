/*
 * Author: C. Maxwell Reilly
 * Started: Dec 4, 2023
 * Finished: Dec 8, 2023
 */

#include <stdio.h>
#include <math.h>
#include "functions.h"

int
main(void)
{
    /* Variables */
    int numbers[6] = { 104, 3773, 13, 121, 77, 30751 };
    int multiple_7, multiple_11, multiple_13, sum_is_odd_or_even, is_prime_number;

    /* Driver code */
    int i;
    print_header();
    print_separator();
    for ( i = 0;
            i < 6;
            i++)
    {
        driver_function(numbers[i], &multiple_7, &multiple_11, &multiple_13, &sum_is_odd_or_even, &is_prime_number);
        report(numbers[i], multiple_7, multiple_11, multiple_13, sum_is_odd_or_even, is_prime_number);
        printf("\n");
    }
    print_separator();

    return 0;
}
