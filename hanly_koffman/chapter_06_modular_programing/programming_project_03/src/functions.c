#include <stdio.h>
#include "include/functions.h"

void
hello(void)
{
    printf("Hello, world!\n\n");
}

void
driver_function(int number, int* multiple_7p, int* multiple_11p, int* multiple_13p, int* sum_is_odd_or_evenp, int* is_prime_numberp)
{
    *multiple_7p = divisible(number, 7);
    *multiple_11p = divisible(number, 11);
    *multiple_13p = divisible(number, 13);
    *sum_is_odd_or_evenp = sum_is_odd_or_even(number, sum_is_odd_or_evenp);
    /*
    *is_prime_numberp = is_prime_numberf(number);
    */
    ;
}

/* Returns a 1 if the number is divisible by the divisor, and a 0 if not. */
/* Weird logic, actually. I should change this to 0 for success, 1 for failure */
int
divisible(int number, int divisor)
{
    if (number % divisor == 0)
    {
        return 0;
    } else {
        return 1;
    }
}


int
sum_of_digits(int number)
{
    int num = number, sum = 0, temp;
    num = number;
    while ( num > 0 )
    {
        temp = num % 10;
        sum += temp;
        num -= temp;
        num = num / 10;
    }
    return sum;
}

int
sum_is_odd_or_even(int number, int *sum_is_odd_or_evenp)
{
    if (sum_of_digits(number) % 2 == 0)
    {
        *sum_is_odd_or_evenp = 0;
    } else
    {
        *sum_is_odd_or_evenp = 1;
    }
    return 0;
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
    if (sum_is_odd_or_even == 0) {
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
