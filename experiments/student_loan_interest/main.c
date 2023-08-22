/*
 * Author: C. Maxwell Reilly
 * Started: Sunday, August 20, 2023
 * Finished:
 */


#include <stdio.h>

#define TEST 0

// function prototypes
void print_number_vertically(long n);

int
main(void)
{
    int status = 1;
    long n;

    printf("Enter an integer up to 10 digits long > ");
    scanf("%ld", &n);

    while (status == 1)
    {
        if (0 < n && n <= 9999999999)
        {
            printf("n = %ld\n", n);
            status = 0;
        }
        else
        {
            printf("Invalid n! Try again.\n");
            printf("Enter an integer up to 10 digits long > ");
            scanf("%ld", &n);
        }
    }
    print_number_vertically(n);

    return 0;
}


void
print_number_vertically(long n)
{
    long temp, i;

    for (   i = 10;
            n > i;
            i *= 10)
    {
        temp = n % i;
        n -= temp;
        printf("%ld\n", temp);
    }
}


