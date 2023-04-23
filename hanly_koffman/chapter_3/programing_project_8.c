/* 
 * A manufacturer wishes to determine the cost of producing an open-top cylin-
 * drical container. The surface area of the container is the sum of the area of
 * the circular base plus the are of the outside (circumference of the base
 * times the height of the container). Write a program to take the radius of
 * the base, the height of the container, the cost per square centimeter of the 
 * material (cost), and the number of containers to be produced (quantity).
 * Calculate the cost of each container and the total cost of producing all the 
 * containers. Write and call a function that displays instructions to the user and 
 * a function that computes surface area.
 */

/* 
 * Author: C. Maxwell Reilly
 *
 * Date Started: April 17, 2023
 *
 * Date Complete: April 19, 2023
 */

#include<stdio.h>
#define PI 3.1415962

double radius, height, cost;
int quantity;

double total_area, unit_cost, batch_cost;

void instruct(void);
void user_input(void);
double surface_area(double radius, double height);
double cost_per_container(double surface_area, double cost);
double total_cost(double cost_per_container, int quantity);
void report(double unit_cost, double batch_cost);

int
main(void)
{
    instruct();
    user_input();
    total_area = surface_area(radius, height);
    unit_cost = cost_per_container(total_area, cost);
    batch_cost = total_cost(unit_cost, quantity);
    report(unit_cost, batch_cost);
    return(0);
}

void
instruct(void)
{
    printf("This program calculates the cost of individual cylindrical containers and the cost of a batch\n");
    printf("based upon the radius of the container, the height of the container, the cost of the material, \n");
    printf("and the quantity of the containers.\n\n");
}

void
user_input(void)
{
    printf("Enter radius of base of container in centimeters >> ");
    scanf("%lf", &radius);
    printf("Enter height of the container in centimeters >> ");
    scanf("%lf", &height);
    printf("Enter the cost of the cost of the material per square centimeter >> ");
    scanf("%lf", &cost);
    printf("Enter the number of units needed >> ");
    scanf("%d", &quantity);
}

double
surface_area(double radius, double height)
{
    double circle_area, cyl_area, total_area;
    circle_area = (PI * radius * radius);
    cyl_area = 2 * PI * radius * height;
    total_area = circle_area + cyl_area;
    return(total_area);
}

double
cost_per_container(double surface_area, double cost)
{
    return(surface_area * cost);
}

double
total_cost(double cost_per_container, int quantity)
{
    return(cost_per_container * quantity);
}
void
report(double unit_cost, double batch_cost)
{
    printf("\nRadius = %.2f\n", radius );
    printf("Height = %.2f\n", height);
    printf("Cost = %.2f\n", cost);
    printf("Quantity = %d\n", quantity);
    printf("Area = %.2f\n", surface_area(radius, height) );
    printf("Unit Cost = %.2f\n", unit_cost);
    printf("Batch Cost = %.2f\n", batch_cost);
    printf("\n");
}
