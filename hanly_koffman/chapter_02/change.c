/* A small program to calcualte the value of change
 * Programmer: Max Reilly
 * February 20, 2023
 */

#include <stdio.h>

int main () {
    char first_initial, second_initial, third_initial;
    int pennies, nickels, dimes, quarters;
    int total_cents, dollars, change;
    printf("Enter your initials >");
    scanf("%c%c%c", &first_initial, &second_initial, &third_initial);
    printf("Hello %c%c%c. \nEnter how many pennies you have >\n", first_initial, second_initial, third_initial);
    scanf("%d", &pennies);
    printf("\nEnter how many nickels.\n");
    scanf("%d", &nickels);
    printf("\nEnter how many dimes.\n");
    scanf("%d", &dimes);
    printf("\nEnter how many quarters.\n");
    scanf("%d", &quarters);
    total_cents = pennies + nickels * 5 + dimes * 10 + quarters * 25;
    dollars = total_cents/100;
    change = total_cents % 100;
    printf("\nYour coins are worth %d dollars and %d cents.\n", dollars, change);
    return (0);
    
}
