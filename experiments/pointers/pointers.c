#include <stdio.h>

/*
 * A small program that demonstrates a function pointer.
 * Author: C. Maxwell Reilly
 * Wednesday May 17.
 */

void change_number(int* number, int new_number);

int
main(void)
{
    int x;
    x = 5;
    printf("Your number is %d.\n", x);
    change_number(&x , 20);
    printf("Your new number is %d.\n",x);

    return(0);
}

void
change_number(int* number, int new_number)
{
    *number = new_number;
}


/*
 * I have successfully made a small program that uses a function pointer correctly!
 */
