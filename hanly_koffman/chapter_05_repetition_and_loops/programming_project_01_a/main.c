/*
 * Author: C. Maxwell Reilly
 * Date: Thursday, Jun 1, 2023
 */

#include <stdio.h>

#define MAX_NUM 100
#define TEST 0

int numbers[MAX_NUM];
int n;

void instruct(void);
void get_n(void);
void get_numbers(void);
int find_smallest(void);
int find_largest(void);
double find_average(void);
void print_numbers(void);


int
main(void)
{
    instruct();
    get_n();
    get_numbers();
    if (TEST)
    {
        print_numbers();
    }
    printf("the smallest number in the group is: %d\n", find_smallest());
    if (TEST)
    {
        print_numbers();
    }
    printf("The largest number in the group is: %d\n", find_largest());
    if (TEST)
    {
        print_numbers();
    }
    printf("The average of the group is: %.2f\n", find_average());
    return(0);

}

void
instruct(void)
{
    printf("this program takes a list of numbers and figures out\n");
    printf("the smallest, largest, and average values in that list.\n");
}

void
get_n(void)
{
    printf("\nFirst, enter the lenght of your list of numbers at the prompt >> ");
    scanf("%d", &n);
}

void
get_numbers(void)
{
    int i;
    i = 1;
    do {
        printf("Enter number %d >> ", i);
        scanf("%d", &numbers[i - 1]);
        i ++;
    } while (i <= n);
    return;
}

int
find_smallest(void)
{
    int i;
    int smallest;
    smallest = numbers[0];
    for     (i = 0;
            i < n;
            i++) {
               if (TEST)
                   printf("smallest = %d, numbers[i + 1] = %d\n", smallest, numbers[i + 1]);
        if ((smallest > numbers[i + 1]) && (i + 1 < n))
            smallest = numbers[i + 1];
        else
            ;
    }
    return smallest;
}

int
find_largest(void)
{
    int i;
    int largest;
    largest = numbers[0];
    for     (i = 0;
            i < n;
            i++) {
        /* if (TEST)
            printf("largest = %d, numbers[i + 1] = %d\n", largest, numbers[i + 1]);
        else
            ; */
        if (largest < numbers[i + 1])
            largest = numbers[i + 1];
        else
            ;
    }
    return largest;
}

double
find_average(void)
{
    int total = 0;
    double average;
    int i;
    for     (i = 0;
            i < n;
            i++) {
        total += numbers[i];
    }
    average = total / n;

    return average;
}

void
print_numbers(void)
{
    int i;
    for
        (i = 0;
         i < n;
         i++)
        {
            printf("%d\n", numbers[i]);
        }
    return;
}

