/* Write a complete C program that prompts the user for the Cartesian coordinates of two points (x, y,) and (x, y) and displays the distance between them computed using the following formula: distance = √((x1 - x2) ** 2 + (y1 -y2)2)*/

#include <stdio.h>
#include <math.h>

int main (void) {
    double x1, x2, y1, y2, distance;
    printf("Enter the x coordinate for the first point >>");
    scanf("%lf", &x1);
    printf("y coordinate >>");
    scanf("%lf", &y1);
    printf("Enter the x coordinate for the second point >>");
    scanf("%lf", &x2);
    printf("y coordinate >>");
    scanf("%lf", &y2);
    distance = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    printf("The distance between the two points is %.2f.\n", distance);
    return(0);
}

