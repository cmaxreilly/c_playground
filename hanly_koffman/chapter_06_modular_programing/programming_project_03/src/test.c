#include <stdio.h>
#include <math.h>
#include "include/functions.h"

int
main(void)
{
    /* divisible() test */
    if (divisible(6, 2) == 1)
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

    /* is_prime() test */
    if (is_prime(7) == 0)
    {
        printf("is_prime() working properly.\n");
    } else
    {
        printf("***ERROR***: is_prime() broken\n");
        return 1;
    }

    /* driver function test */
    int num = 7, multiple_7, multiple_11, multiple_13, is_prime_number;
    driver_function(num, &multiple_7, &multiple_11, &multiple_13, &sum_is_odd_or_even_num, &is_prime_number);
    if (multiple_7 == 1 && multiple_11 == 0 && multiple_13 == 0 && sum_is_odd_or_even_num == 1 && is_prime_number == 0)
    {
        printf("driver_function() working properly.\n");
    } else
    {
        printf("***ERROR***: driver_function() broken\n");
        printf("multiple_7 = %d\n", multiple_7);
        printf("multiple_11 = %d\n", multiple_11);
        printf("multiple_13 = %d\n", multiple_13);
        printf("sum_is_odd_or_even_num = %d\n", sum_is_odd_or_even_num);
        printf("is_prime_number = %d\n", is_prime_number);
        return 1;
    }


    return 0;
}
