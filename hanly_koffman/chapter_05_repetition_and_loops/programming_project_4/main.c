/*
 * Author: C. Maxwell Reilly
 * Started: Sunday, August 20, 2023
 * Finished:
 */


#include <stdio.h>
#include <math.h>

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
            status = 0;
        }
        else
        {
            printf("Invalid n! Try again.\n");
            printf("Enter an integer up to 10 digits long > ");
            scanf("%ld", &n);
        }
    }
    printf("\n");
    print_number_vertically(n);
    printf("\n");

    return 0;
}


void
print_number_vertically(long n)
{
    int i = 1;
    long temp = 0, tens;

    while(temp < n)
    {
        tens = pow(10, i);
        temp = n % tens;
        printf("%ld\n", temp/(tens / 10));
        n = n - temp;
        i++;
    }


}


