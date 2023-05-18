/* 
 * Assume that the flat washers are manufactured by stamping them out from a rectangular piece of material of 
 * uniform thickness. Extend the washer program to compute (a) the number of square centimeters of material needed
 * to manufacture a specified quantity of flat washers and (b) the weight of the leftover material.
 */

#include <stdio.h>
#define PI 3.14159

int main (void) {
    double hole_diameter, /* input diameter of hole         */
           edge_diameter, /* diameter of outer edge         */
           thickness,     /* thickness of washer            */
           density,       /* density of material used       */
           quantity;      /* number of washers made         */
    double weight,        /* output: weight of washer batch */
           hole_radius,   /* radius of hole                 */
           edge_radius,   /* radius of outer edge           */
           rim_area,      /* area of rim                    */
           unit_weight,   /* weight of 1 washer             */
           hole_area,
           material_per_washer, /* material per one washer in cm squared */
           required_material,
           leftover_material;



    /* Get the inner diameter, outer diameter, and thickness. */
    printf("Inner diameter in centimeters> ");
    scanf("%lf", &hole_diameter);
    printf("Outer diameter in centimeters> ");
    scanf("%lf", &edge_diameter);
    printf("Thickness in centimeters> ");
    scanf("%lf", &thickness);

    /* Get the material density and the quantity manufactured. */
    printf("Material density in grams per cubic centimeter> ");
    scanf("%lf", &density);
    printf("Quantity in batch> ");
    scanf("%lf", &quantity);
    
    /* Compute the rim area. */
    hole_radius = hole_diameter / 2.0;
    edge_radius = edge_diameter / 2.0;
    hole_area = PI * hole_radius * hole_radius;
    rim_area = PI * edge_radius * edge_radius - hole_area;
    /* compute the weight of a flat washer. */
    unit_weight = rim_area * thickness * density;

    /* compute the weight of the batch of washers. */
    weight = unit_weight * quantity;

    /* Compute the weight of the material required to make one washer */
    material_per_washer = edge_diameter * edge_diameter;

    /* Compute the number of square centimeters of material needed to manufacture the specified quantity of
     * washers 
     */
    required_material = material_per_washer * quantity; 

    /* Compute the weight of leftover material. */
    leftover_material = (required_material * thickness * density) - weight;

    /* Display the weight of the batch of washers. */
    printf("\nThe expected weight of the batch is %.2f", weight);
    printf(" grams.\n");

    /* Display material needed */
    printf("\nIn order to manufacture this batch of washer, you will need %.2f", required_material);
    printf(" grams of material.\n");


    /* Display the weight of leftover material. */
    printf("\nThis will result in leftover material weighing %.2f", leftover_material);
    printf(" grams.\n");

    return (0);
}

    
