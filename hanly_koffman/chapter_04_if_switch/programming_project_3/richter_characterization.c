/*******************************************************************************
 * The National Eathquake Information Center has asked you to write a pro-      *
 * gram implementing the following decision table to characterize an earth-     *
 * quake based on its Ricther scale number.                                     *
 *                                                                              *
 * Richter Scale                                                                *
 * Number (n)           Characterization                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 * n < 5.0              Little or no damage                                     *
 * 5.0 =< n < 5.5       Some damage                                             *
 * 5.5 =< n < 6.5       Serious damage: walls may crack or fall                 *
 * 6.5 =< n < 7.5       Disaster: houses and building may collapse              *
 * higher               Catastrophe: most buildings destroyed                   *
 *                                                                              *
 * Could you handle this problem with a switch statement? If so, use a          *
 * switch statement; if not, explain why.                                       *
 ********************************************************************************/

/*
 * Author: C. Maxwell Reilly
 * Date: Sunday May 21, 2023
 */

#include<stdio.h>

double input;

int
main(void)
{
    printf("This program takes a floating point input of a Richter Scale number\n");
    printf("and prints out a characterization of that number (like Some damage, \n");
    printf("Serious Damage, or Disaster). Enter your number at the prompt >>");
    scanf("%lf", &input);

    if (input < 0.0)
        printf("\nError: invalid Richter Scale input\n\n");
    else if(input < 5.0)
        printf("\nLittle or no damage\n\n");
    else if(input < 5.5)
        printf("\nSome Damage\n\n");
    else if(input < 6.5)
        printf("\nSerious Damage: walls may crack or fall\n\n");
    else if(input < 7.5)
        printf("\nDisaster: houses and buildings may collapse\n\n");
    else
        printf("\nCatastrophe: most buildings destroyed\n\n");
    return(0);

}
