/*
 * Author: C. Maxwell Reilly
 * Started: Friday, October 6th, 2023
 * Finished: Saturday, October 7th, 2023
 */
#include <stdio.h>

void instructions(void);
void get_user_input(int *amount_desired);
void teller_machine(int amount_desired, int *tens, int *twenties, int *fifties);
void report(int amount_desired, int tens, int twenties, int fifties);

int
main(void)
{
    int amount_desired, tens, twenties, fifties;
    instructions();
    get_user_input(&amount_desired);
    teller_machine(amount_desired, &tens, &twenties, &fifties);
    report(amount_desired, tens, twenties, fifties);
    return 0;
}

void
instructions(void)
{
    printf("Greetings. This machine takes an input of an integer divisible by tens\n");
    printf("and determines the most efficient way to distribute that to the customer\n");
    printf("using 50s, 20s, and 10s.\n\n");
}

void
get_user_input(int *amount_desired)
{
    /* This function uses a simple if statment and recusion to create the event loop that prevents
     * the amount from not being divisible by ten */
    printf("Enter your desired amount at the prompt >> ");
    scanf("%d", amount_desired);
    if (*amount_desired % 10 != 0)
    {
        printf("Make sure amount is divisible by tens, and try again\n");
        get_user_input(amount_desired);
    }
}

void
teller_machine(int amount_desired, int *tens, int *twenties, int *fifties)
{
    int amount_remaining = amount_desired;
    *fifties = (amount_remaining - (amount_remaining % 50) ) / 50;
    amount_remaining -= *fifties * 50;
    *twenties = (amount_remaining - (amount_remaining % 20)) / 20;
    amount_remaining -= *twenties * 20;
    *tens = amount_remaining / 10;
}

void
report(int amount_desired, int tens, int twenties, int fifties)
{
    printf("%d ten dollar bills ($%d)\n", tens, tens * 10);
    printf("%d twenty dollar bills ($%d)\n", twenties, twenties * 20);
    printf("%d fifty dollar bills($%d)\n", fifties, fifties * 50);
    printf("For a total of $%d.\n", amount_desired);
}

/* Reflection: A very satisfying puzzle to solve! With function pointers, I feel as if 
 * a great deal of what has been holding me back as a programmer has gotten easier.
 * Suddenly, things like scope and memory make a lot more sense!
 */

