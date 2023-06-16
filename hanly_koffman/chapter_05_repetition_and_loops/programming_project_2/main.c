/*
 * Author: C. Maxwell Reilly
 * Date: Thursday, Jun 15, 2023
 */


#include <stdio.h>

int find_gcd(int num_1, int num_2);

int
main(void)
{
    int num_1, num_2;
    printf("This program takes two numbers and finds their greatest common divisor (gcd)\n");
    printf("Enter number 1 >> ");
    scanf("%d", &num_1);
    printf("Enter number 2 >> ");
    scanf("%d", &num_2);
    printf("Your greatest common divisor is : %d\n", find_gcd(num_1, num_2));
    return(0);

}


int
find_gcd(int num_1, int num_2)
{
    int remainder;
    int result;
    int temp;
    if (num_1 < num_2)
    {
        temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }
    do {
        remainder = num_1 % num_2;
        num_2 = num_1;
        num_1 = remainder;
    } while (remainder != 0);
    result = num_2;
    return result;
}


