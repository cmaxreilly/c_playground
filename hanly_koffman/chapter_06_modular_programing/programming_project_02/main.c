/*
 * Author: C. Maxwell Reilly
 * Started: Saturday, October 7th, 2023
 * Finished: 
 */

#include <stdio.h>
#include <math.h>

void instructions(void);
void get_user_input(double *amount_paid, double *amount_due);
double get_change(double amount_paid, double amount_due);
/* Splits the cents from the dollars */
void split_change(double change, int *dollarsp, int *centsp);
void dollars_change(int dollars, int *twenties, int *tens, int *fives, int *ones);
void coins_change(int cents, int *penniesp, int *nicklesp, int *dimesp, int *quartersp);
void report_paper_money(int twenties, int tens, int fives, int ones);
void report_coinage(int pennies, int nickles, int dimes, int quarters);

int
main(void)
{
    /* Input variables */
    double amount_paid, amount_due, change;
    /* Dollars split from cents */
    int dollars, cents;
    /* Output: Different divisions of cents */
    int pennies, nickles, dimes, quarters;
    /* Output: Different division of dollars */
    int ones, fives, tens, twenties;

    /* Driver code */
    instructions();
    get_user_input(&amount_paid, &amount_due);
    change = get_change(amount_paid, amount_due);
    /* printf("\nTotal change = $%.2f\n", change); */
    split_change(change, &dollars, &cents);
    printf("\nChange = %d Dollars and %d cents\n", dollars, cents);
    dollars_change(dollars, &twenties, &tens, &fives, &ones);
    report_paper_money(twenties, tens, fives, ones);
    report_coinage(pennies, nickles, dimes, quarters);
    printf("\nTotal change = %d dollars and %d cents.\n", dollars, cents);
    return 0;
}

void
instructions(void)
{
    printf("Greetings. This program dispenses change.\n");
}

void
get_user_input(double *amount_paidp, double *amount_duep)
{
    printf("Enter amount due at the prompt >> ");
    scanf("%lf", amount_duep);
    printf("Enter amount paid >> ");
    scanf("%lf", amount_paidp);
    if (*amount_paidp < *amount_duep)
    {
        printf("Insufficient funds\n");
        get_user_input(amount_paidp, amount_duep);
    }
}

double
get_change(double amount_paid, double amount_due)
{
    return amount_paid - amount_due;
}

void
split_change(double change, int *dollarsp, int *centsp)
{
    /* Looks like there is an off by one error with in the output of cents
     * in this function */
    /* It appears that the off by one error is only present when cents != 0 */
    *dollarsp = floor(change);
    *centsp = floor((change - *dollarsp) * 100);
    /* bug fixed with this if statement. Still don't know why...*/
    /* Update: It appears this bug returns when the price is below 10.00. Weird... */
    /* I am going to write the report_coinage() function and get back to this.*/
    if (*centsp > 0)
    {
        *centsp += 1;
    }
}

void
dollars_change(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = *tens = *fives = *ones = 0;
    int amount_remaining = dollars;
    *twenties = (amount_remaining - (amount_remaining % 20)) / 20;
    amount_remaining -= *twenties * 20;
    *tens = (amount_remaining - (amount_remaining % 10)) / 10;
    amount_remaining -= *tens * 10;
    *fives = (amount_remaining - (amount_remaining % 5)) / 5;
    amount_remaining -= *fives * 5;
    *ones = amount_remaining;
}

void
coins_change(int cents, int *penniesp, int *nicklesp, int *dimesp, int *quartersp)
{
    *penniesp = *nicklesp = *dimesp = *quartersp = 0;
    int amount_remaining = cents;
    *quartersp = (amount_remaining -(amount_remaining % 25))/25;
    amount_remaining -= *quartersp * 25;
    *dimesp = (amount_remaining -(amount_remaining % 10))/10;
    amount_remaining -= *dimesp * 10;
    *nicklesp = (amount_remaining -(amount_remaining % 5))/5;
    amount_remaining -= *nicklesp * 5;
    *penniesp = amount_remaining;
}

void
report_paper_money(int twenties, int tens, int fives, int ones)
{
    printf("Twenties = %d ($%d)\n", twenties, twenties*20);
    printf("Tens = %d ($%d)\n", tens, tens*10);
    printf("Fives = %d ($%d)\n", fives, fives*5);
    printf("Ones = %d ($%d)\n", ones, ones);
}

void
report_coinage(int pennies, int nickles, int dimes, int quarters)
{
    printf("Quarters = %d (¢%d)\n", quarters, quarters*20);
    printf("Dimes = %d (¢%d)\n", dimes, dimes*10);
    printf("Nickles = %d (¢%d)\n", nickles, nickles*5);
    printf("Pennies = %d (¢%d)\n", pennies, pennies);
}
