/*
 * Author: C. Maxwell Reilly
 * Date: Monday, May 22, 2023
 */

#include<stdio.h>

double x, y;

int
main(void)
{
    printf("This program takes the x-y coordinates of a point and\n");
    printf("tells you if it is on an axis or in which quadrant it\n");
    printf("is found. Have fun!\n\n");
    printf("Enter the x coordinate at the prompt >> ");
    scanf("%lf", &x);
    printf("Enter the y coordinate at the prompt >> ");
    scanf("%lf", &y);
    printf("\n");
    if (x == 0.0)
        printf("Your coordinate is on the y axis\n");
    else if (y == 0.0)
        printf("Your coordinate is on the x axis\n");
    else if (x > 0.0)
        if (y > 0.0)
            printf("Your coordinate is in Quadrant I\n");
        else
            printf("Your coordinate is in Quadrant IV\n");
    else if (x < 0.0)
        if (y > 0.0)
            printf("Your coordinate is in Quadrant II\n");
        else
            printf("Your coordinate is in Quadrant III\n");
    else
        printf("Invalid coordinates\n");
    printf("\n");

    return(0);

}
