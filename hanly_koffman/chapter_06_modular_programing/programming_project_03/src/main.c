/*
 * Author: C. Maxwell Reilly
 * Started: Dec 4, 2023
 * Finished:
 */

#include <stdio.h>
#include <math.h>
#include "functions.h"

/* Function prototypes */

void driver_function(int number, int* multiple_7p, int* multiple_11p, int* multiple_13p, int* sum_is_odd_or_evenp, int* is_prime_numberp);
void report(int number, int multiple_7, int multiple_11, int multiple_13, int sum_is_odd_or_even, int is_prime_number);
int divisible(int number, int divisor);
int sum_is_odd_or_even(int number, int *sum_is_odd_or_evenp);
int sum_of_digits(int number, int sum);

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

void
driver_function(int number, int* multiple_7p, int* multiple_11p, int* multiple_13p, int* sum_is_odd_or_evenp, int* is_prime_numberp)
{
    *multiple_7p = divisible(number, 7);
    *multiple_11p = divisible(number, 11);
    *multiple_13p = divisible(number, 13);
    /*
    *sum_is_odd_or_evenp = sum_is_odd_or_evenf(number);
    *is_prime_numberp = is_prime_numberf(number);
    */
    ;
}

int
divisible(int number, int divisor)
{
    if (number % divisor == 0)
    {
        return 1;
    } else {
        return 0;
    }
}

int
sum_is_odd_or_even(int number, int *sum_is_odd_or_evenp)
{
    return 0;
}

int
sum_of_digits(int number, int sum)
{
    int digit;
    digit = number - (number % 10);
    printf("digit = %d\n", digit);
    sum += digit;
    if (number > 10) {
        number = (number - digit) % 10;
        sum_of_digits(number, sum);
    }
    return sum;
}

void
report(int number, int multiple_7, int multiple_11, int multiple_13, int sum_is_odd_or_even, int is_prime_number)
{
    printf("%d", number);
    if (multiple_7 == 1) {
        printf(" is a multiple of 7, ");
    } else {
        printf(" is not a multiple of 7, ");
    }
    if (multiple_11 == 1) {
        printf(" is a multiple of 11, ");
    } else {
        printf(" is not a multiple of 11, ");
    }
    if (multiple_13 == 1) {
        printf(" is a multiple of 13, ");
    } else {
        printf(" is not a multiple of 13, ");
    }
    if (sum_is_odd_or_even == 1) {
        printf(" has digits that sum to an even number,");
    } else {
        printf(" has digits that sum to an odd number,");
    }
    if (is_prime_number == 1) {
        printf(" and is a prime number. \n");
    } else {
        printf(" and is not a prime number. \n");
    }
}
