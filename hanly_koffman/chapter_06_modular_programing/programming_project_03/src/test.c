#include <stdio.h>
#include <math.h>
#include "include/functions.h"

int
main(void)
{
    /* divisible() test */
    if (divisible(6, 2) == 0)
    {
        printf("\ndivisible() working properly.\n");
    } else
    {
        printf("\n***ERROR***: divisible() broken.\n");
        return(1);
    }

    /* sum_of_digits() test */
    int test_digit = 1111;
    /* printf("sum of digits in %d = %d\n", test_digit, sum_of_digits(test_digit)); */
    if (sum_of_digits(test_digit) == 4)
    {
        printf("sum_of_digits() working properly.\n");
    } else
    {
        printf("\n***ERROR***: sum_of_digits() broken.\n");
        return 1;
    }

    /* sum_is_odd_or_even() test */
    int sum_is_odd_or_even_num;
    sum_is_odd_or_even(test_digit, &sum_is_odd_or_even_num);
    /* if (( */

    return(0);
}
