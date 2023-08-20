/*
 * Author: C. Maxwell Reilly
 * Started: Sunday, August 20, 2023
 * Finished:
 */


#include <stdio.h>

#define TEST 0

// function prototypes
void print_number_vertically(n);

int
main(void)
{
    int status = 1;
    double n;

    printf("Enter an integer up to 10 digits long > ");
    scanf("%lf", &n);

    while (status == 1)
    {
        if (n <= 9999999999)
        {
            printf("n = %.0f\n", n);
            status = 0;
        }
        else
        {
            printf("n is too large! Try again.\n");
            printf("Enter an integer up to 10 digits long > ");
            scanf("%lf", &n);
        }
    }

    return 0;
}


