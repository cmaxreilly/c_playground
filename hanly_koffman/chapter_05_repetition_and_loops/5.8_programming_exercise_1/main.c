/*
 * Author: C. Maxwell Reilly
 * Date: Wednesday, May 31, 2023
 */

#include <stdio.h>

int evenly_divides(void);


int
main(void)
{
    evenly_divides();
    return(0);

}

int
evenly_divides(void)
{
    int first_number, second_number, error;

    printf("Enter the first number >> ");
    scanf("%d", &first_number);
    do {
        printf("Enter another number >> ");
        scanf("%d", &second_number);
        if (second_number % first_number != 0) {
            first_number = second_number;
            printf("Enter another number >> ");
            scanf("%d", &second_number);
        }
    } while (second_number % first_number != 0);
    printf("%d evenly divides %d\n", first_number, second_number);
    return(0);
}

