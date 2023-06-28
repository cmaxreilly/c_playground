/* A program that prints a row of numbers from 1 to 100. 
 * If the number is divisible by 3, we print "Fizz." 
 * If the nmber is divisible by 5, print "Buzz."
 * If the number is divisible by 5 and 3, print "FizzBuzz."
 *
 * Author: C. Maxwell Reilly
 * Finished:
 */

#include <stdio.h>

int main (void) {
    int i;
    for (i = 1; i < 100; i++)
        if (i % 3 == 0)
            if (i % 5 == 0)
                printf("FizzBuzz\n");

            else
                printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    return (0);
}
