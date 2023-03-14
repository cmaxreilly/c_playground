/* 
 * In order for exercise 1 to work for overtime, I would 
 * have to add an input of type double for overtime hours
 * worked. Then, in the algorithm area of the program, I 
 * would have to set gross salary equal to normal hours 
 * worked times hourly rate, plus overtime hours worked 
 * times hourly rate time 1.5.
*/

#include <stdio.h>

int main (void) {
    /* Problem inputs */
    double hourly_rate; /* hourly_rate */
    double normal_hours_worked; /* hours worked */
    double overtime_hours_worked; /* overtime hours worked */
    /* Problem outputs */
    double gross_salary; /* gross salary */

    /* Get problem inputs from user */
    printf("Enter hourly rate in dollars per hour >> ");
    scanf("%lf", &hourly_rate);
    printf("Enter normal hours worked >> ");
    scanf("%lf", &normal_hours_worked);
    printf("Enter overtime hours worked >> ");
    scanf("%lf", &overtime_hours_worked);

    /* Algorithm */
    gross_salary = normal_hours_worked * hourly_rate + overtime_hours_worked * hourly_rate * 1.5; /* gross salary = hours worked * hourly rate + overtime hours worked * hourly rate * 1.5. */

    /* Output section */
    printf("Your gross salary is $%.2f.\n", gross_salary);
    return(0);
}

