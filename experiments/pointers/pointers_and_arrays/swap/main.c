/*
 * Author: C. Maxwell Reilly
 * Started: Friday, Jun 23, 2023
 * Finished:
 */

#include<stdio.h>

void swap(int * n1, int * n2);

int
main()
{
    int num1 = 5, num2 = 10;
    printf("Numbers before swap: %d %d\n", num1, num2);
    swap(&num1, &num2);
    printf("Numbers after swap: %d %d\n", num1, num2);
    return 0;
}

void
swap(int * n1, int * n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
