/* A program that prints a row of numbers from 1 to 100. 
 * If the number is divisible by 3, we print "Fizz." 
 * If the nmber is divisible by 5, print "Buzz."
 * If the number is divisible by 5 and 3, print "FizzBuzz."
 *
 * Author: C. Maxwell Reilly
 * Finished:
 */

#include <stdio.h>
#include <string.h>

void add_fizz(char string[]);
void add_buzz(char string[]);
void add_bazz(char string[]);

int main (void) {
    int i;
    for (i = 1; i < 100; i++)
    {
        char string[13] = "";
        if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
        {
            add_fizz(string);
            add_buzz(string);
            add_bazz(string);
            puts(string);
        } else if (i % 3 == 0 && i % 5 == 0)

        {
            add_fizz(string);
            add_buzz(string);
            puts(string);
        } else if (i % 3 == 0 && i % 7 == 0)
        {
            add_fizz(string);
            add_bazz(string);
            puts(string);
        } else if (i % 5 == 0 && i % 7 == 0)
        {
            add_buzz(string);
            add_bazz(string);
            puts(string);
        } else if (i % 5 == 0)
        {
            add_buzz(string);
            puts(string);
        } else if (i % 3 == 0)
        {
            add_fizz(string);
            puts(string);
        } else if (i % 7 == 0)
        {
            add_bazz(string);
            puts(string);
        } else
        {
            printf("%d\n", i);
        }
    }
    return (0);
}


void
add_fizz(char string[])
{
    strcat(string, "fizz");
}
void
add_buzz(char string[])
{
    strcat(string, "buzz");
}


void
add_bazz(char string[])
{
    strcat(string, "bazz");
}

