/* Write a program that takes a positive nmber with a fractional part and rounds it to two decimal places.
 * For example, 32.4851 would round to 32.49, and 32.4431 would round to 32.44. ( Hint: See problem 2b in 
 * Self-Check Exercises for Section 3.2.)
 *
 * Author: C. Maxwell Reilly
 *
 * Date: Tuesday April 4
 */

#include<stdio.h>
#include<math.h>

double round_2_d(double);
void instruct(void);


int
main(void)
{
    double number;
    instruct();
    printf("Enter your number at the prompt >> ");
    scanf("%lf", &number);
    printf("Your number is %.2f.\n", round_2_d(number));
    return (0);
}



double
round_2_d(double number)
{
    double rounded_number;
    rounded_number = floor(number * 100 + 0.5) / 100;
    return(rounded_number);
}

void
instruct(void)
{
    printf("Use this program to round a number to two decimal places\n");
}
