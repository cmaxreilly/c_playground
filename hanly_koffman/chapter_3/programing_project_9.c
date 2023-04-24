/*
 * Write a program to take a depth (in kilometers) inside the earth as input date;
 * compute and display the temperature at this depth in degrees Celsius and
 * degrees Fahrenheit. The relevant formulas are
 *
 * Celsius = 10 (depth) + 20 (Celsius temperature at depth in km)
 * Fahrenheit = 1.8 (Celsius) + 32
 *
 * Include two functions in your program. Function Celsius_at_depth
 * should compute and return the Celsius temperature at a depth measured in 
 * kilometers. Function Fahrenheit should convert a Celsius temperature to
 * Fahrenheit
 */

/*
 * Author: C. Maxwell Reilly
 *
 * Date: Monday April 24, 2023
 */

#include<stdio.h>
// Input
int depth; /* depth in kilometers */

/* Output */
double fahr, celc;

/* Function prototypes */
void user_input(void);
double celsius_at_depth(int depth);
double celc_to_fahrenheit(double celc);
void report(double fahr, double celc);

int
main(void)
{
    user_input();
    report(celc_to_fahrenheit(celsius_at_depth(depth)), celsius_at_depth(depth));
    return 0;
}

void
user_input(void)
{
    printf("\nThis program calculates the temperature in Celcius and Fahrenheit given a depth in kilometers.\n");
    printf("\nEnter depth in kilometers >> ");
    scanf("%d", &depth);
}

double
celsius_at_depth(int depth)
{
    celc = 10 * depth + 20;
    return(celc);
}

double
celc_to_fahrenheit(double celc)
{
    fahr = 1.8 * celc + 32;
    return(fahr);
}

void
report(double celc, double fahr)
{
    printf("The temperatures are %.2f degrees Celcius, and %.2f degrees Fahrenheit.\n", celc, fahr);
}
