/* 
 * Write an interactive program that contains an if staement that ma be used
 * to compute the area of a square (area = side ^ 2) or a triangle (area = 1/2 * base * height)
 * after prompting the user to type the first character of the figure 
 * name (s or t).
 *
 * Author: C. Maxwell Reilly
 * Date: April 25, 2023
 */

#include<stdio.h>
#include<math.h>
#include<string.h>

int
main(void)
{
    char usr;
    double height, base;
    double side;

    printf("Enter the s to calculate the area of a square, or t to calculate the area of a triangle >> ");
    scanf("%c", &usr);
    if (strcmp(&usr ,"s") == 0){
        printf("Enter the length of one of the sides >> ");
        scanf("%lf", &side);
        printf("Your square has an area of %.2lf", side * side);
    } else if (strcmp(&usr, "t") == 0) {
        printf("Enter the height of your triangle >> ");
        scanf("%lf", &height);
        printf("Enter the base of your triangle >> ");
        scanf("%lf", &base);
        printf("Your triangle has an area of %.2lf\n", 1/2 * base * height);
    } else {
        printf("Invalid option\n");
    }
    return(0);
}
