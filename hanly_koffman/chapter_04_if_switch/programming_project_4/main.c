/*
 * Author: C. Maxwell Reilly
 * Date: Monday, May 22, 2023
 */

#include<stdio.h>

int input;

int
main(void)
{
    printf("This program taks a number of Watts of a lightbulb as input, and\n");
    printf("prints a brightness in Lumens to the standard output.\n");
    printf("\nEnter your wattage at the prompt >> ");
    scanf("%d", &input);
    printf("\n");
    switch (input) {
        case 15:
            printf("Brightness is 125 Lumens\n");
            break;
        case 25:
            printf("Brightness is 215 Lumens\n");
            break;
        case 40:
            printf("Brightness is 500 Lumens\n");
            break;
        case 60:
            printf("Brightness is 880 Lumens\n");
            break;
        case 75:
            printf("Brightness is 1000 Lumens\n");
            break;
        case 100:
            printf("Brightness is 1675 Lumens\n");
            break;
        default:
            printf("Unknown Bulb\n");
    }
    printf("\n");
        

    return(0);

}
