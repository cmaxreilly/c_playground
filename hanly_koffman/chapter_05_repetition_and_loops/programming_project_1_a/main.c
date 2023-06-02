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
int find_average(void);


int
main(void)
{
    instruct();
    get_n();
    get_numbers();
    if (TEST)
    {
        int i;
        for (i = 0;
                i < n;
                i ++)
        {
            printf("%d\n", numbers[i]);
        }
    }
    printf("The smallest number in the group is: %d\n", find_smallest());
    return(0);

}

void
instruct(void)
{
    printf("This program takes a list of numbers and figures out\n");
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
}

int
find_smallest(void)
{
    int i;
    int smallest;
    i = 0;
    do {
        smallest = numbers[i];
        if (smallest > numbers[i + 1])
            smallest = numbers[i + 1];
        else
            ;
    } while (i <= n);
    return smallest;
}

int
find_largest(void)
{
    return 0;
}

int
find_average(void)
{
    return 0;
}

