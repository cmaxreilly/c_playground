/* 
 * Describe the problem inputs and outputs and write the algorithm for a program that computes
 * an employee's gross salary given the hours worked and the hourly rate.
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
