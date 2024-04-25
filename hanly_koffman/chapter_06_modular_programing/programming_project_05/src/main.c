/*
 * Author: C. Maxwell Reilly
 * First Draft: April 5, 2024
 * Second Draft: April 7, 2024
 * Third Draft: April 25, 2024
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include "functions.h"

int
main(int argc, char *argv[])
{
   if (argc < 2)
   {
       // This is the standard way to do things
       double ng, lg, n, initial_guess = 1.0, difference;
       printf("Enter a number for n >> ");
       scanf("%lf", &n);
       lg = initial_guess;
       ng = 0.5 * (lg + n/lg);
       difference = lg - ng;
       while (fabs(difference) >= 0.0005)
       {
           lg = ng;
           ng = 0.5 * (lg + n/lg);
           difference = lg - ng;
       }
       printf("The square root of %lf = %lf\n", n, ng);
       return 0;
   }
   if (strcmp(argv[1], "-c") == 0)
   {
       // This uses our function if there is an argument.
       printf("Commandline Mode Active\n");
       return 0;
   } else if ( strcmp(argv[1], "-t") == 0)
   {
       printf("Test Mode Active\n");
       return 0;
   } else
   {
       printf("Invalid Option");
       return 0;
   }
}
