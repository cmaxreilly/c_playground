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
void split_change(double change, int *dollarsp, int *centsp);
void figure_paper_money(int dollars, int *twenties, int *tens, int *fives, int *ones);
void report_paper_money(int twenties, int tens, int fives, int ones);
void report_coinage(int pennies, int nickles, int dimes, int quarters);

int
main(void)
{
    double amount_paid, amount_due, change;
    int dollars, cents, pennies, nickles, dimes, quarters, ones, fives, tens, twenties;
    instructions();
    get_user_input(&amount_paid, &amount_due);
    change = get_change(amount_paid, amount_due);
    /* printf("\nTotal change = $%.2f\n", change); */
    split_change(change, &dollars, &cents);
    figure_paper_money(dollars, &twenties, &tens, &fives, &ones);
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
    *dollarsp = floor(change);
    *centsp = floor((change - *dollarsp) * 100);
}

void
figure_paper_money(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = *tens = *fives = *ones;
    int amount_remaining = dollars;
    *twenties = (amount_remaining - (amount_remaining % 20)) / 20;
    amount_remaining -= *twenties * 20;
    *tens = (amount_remaining - (amount_remaining % 20)) / 20;
    amount_remaining -= *tens * 20;
    *fives = (amount_remaining - (amount_remaining % 20)) / 20;
    amount_remaining -= *fives * 20;
    *ones = amount_remaining;
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
    ;
}
