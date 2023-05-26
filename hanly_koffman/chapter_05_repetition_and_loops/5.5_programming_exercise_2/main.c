/*
 * Author: C. Maxwell Reilly
 * Date: Friday, May 26, 2023
 */

#include<stdio.h>

void instruct(void);

double  centimeters;
int     inches, lower_lim, upper_lim, increment = 5;


int
main(void)
{
    instruct();
    /* get limit values from user */
    printf("Lower limit >> ");
    scanf("%d", &lower_lim);
    printf("Upper limit >> ");
    scanf("%d", &upper_lim);

    /* Display the table heading */
    printf("    Inches    Centimeters\n");

    /* Display the table */
    for     (inches = lower_lim;
            inches <= upper_lim;
            inches += 5){
        centimeters = inches * 2.54;
        printf("%8c%4d%8c%4.2f\n", ' ', inches, ' ', centimeters);
    }
    return(0);

}

void
instruct(void)
{
    printf("This program takes a lower limit and an upper limit in inches\n");
    printf("and prints out a table of inches to centimeters. Enter your \n");
    printf("your lower limit at the prompt below. \n\n");
}
