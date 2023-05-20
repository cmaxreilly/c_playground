/* 
 * Write a complete C program for Self-Check Exercise 1.
 * My program worked initially, so I just copied this over and edited this top comment.
 */

#include <stdio.h>

int main (void) {
    /* Problem inputs */
    double hourly_rate; /* hourly_rate */
    double hours_worked; /* hours worked */
    
    /* Problem outputs */
    double gross_salary; /* gross salary */

    /* Get problem inputs from user */
    printf("Enter hourly rate in dollars per hour >> ");
    scanf("%lf", &hourly_rate);
    printf("Enter hours worked >> ");
    scanf("%lf", &hours_worked);

    /* Algorithm */
    gross_salary = hours_worked * hourly_rate; /* gross salary = hours worked * hourly rate */

    /* Output section */
    printf("Your gross salary is $%.2f.\n", gross_salary);
    return(0);
}
