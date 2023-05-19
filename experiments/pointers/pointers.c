#include <stdio.h>

/*
 * A small program that demonstrates a function pointer.
 * Author: C. Maxwell Reilly
 * Wednesday May 17.
 */

void change_number(int* number, int new_number);
void change_array(int *B[4], int new_number);
int
main(void)
{

    int x;
    x = 5;
    printf("Your number is %d.\n", x);
    change_number(&x , 20);
    printf("Your new number is %d.\n",x);
    int array[4] = {1, 2, 3, 4};
    int i;
    printf("Your array is: \n");
    for( i = 0; i < 4; i ++)
        printf("%d, ", array[i]);
    printf("\n");
    change_array(&array, 5);
    printf("Your new array is: \n");
    i=0;
    for( i = 0; i < 4; i ++)
        printf("%d, ", array[i]);
    printf("\n");
    return(0);
}

void
change_number(int* number, int new_number)
{
    *number = new_number;
}

void
change_array(int *B[4], int new_number)
{
    B[0] = new_number;
}
/*
 * I have successfully made a small program that uses a function pointer correctly!
 */
