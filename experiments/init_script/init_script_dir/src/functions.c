#include <stdio.h>
#include <math.h>
#include "functions.h"

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
    *sum_is_odd_or_evenp = sum_is_even(number);
    *is_prime_numberp = is_prime(number);
}

/* Returns a 1 if the number is divisible by the divisor, and a 0 if not. */
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

/* Takes an integer, returns the sum of it's digits (ex: 1111 = 4) */
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

/* Takes a number, returns 1 if it is even and 0 if it is odd */
int
sum_is_even(int number)
{
    if (sum_of_digits(number) % 2 == 0)
    {
        return 1;
    } else
    {
        return 0;
    }
}

int
is_prime(int number)
{
    if (number < 2)
    {
        return 0; // Numbers below 2 are not prime
    }
    for (   int i = 2;
            i < sqrt(number);
            i++)
    {
        if (number % i == 0)
        {
           return 0;
        }
    }
    return 1;
}

void
print_header(void)
{
    printf(" Number | multiple 7 | multiple 11 | Multiple 13 | Sum of Digits Odd or Even | Is Prime number |\n");
}

void
print_separator(void)
{
    printf("--------|------------|-------------|-------------|---------------------------|-----------------|\n");
}

void
report(int number, int multiple_7, int multiple_11, int multiple_13, int sum_is_odd_or_even, int is_prime_number)
{
    printf("%8d|", number);
    if (multiple_7 == 1) {
        printf("    yes     |");
    } else {
        printf("     no     |");
    }
    if (multiple_11 == 1) {
        printf("     yes     |");
    } else {
        printf("      no     |");
    }
    if (multiple_13 == 1) {
        printf("     yes     |");
    } else {
        printf("      no     |");
    }
    if (sum_is_odd_or_even == 1) {
        printf("         even              |");
    } else {
        printf("          odd              |");
    }
    if (is_prime_number) {
        printf("      yes        |");
    } else {
        printf("       no        |");
    }
}
