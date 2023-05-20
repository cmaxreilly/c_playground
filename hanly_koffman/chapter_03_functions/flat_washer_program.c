/* 
 * Computes the weight of a batch of flat washers.
 * Figure 3.5
 */

#include <stdio.h>
#define PI 3.14159

int main (void) {
    double hole_diameter, /* input diameter of hole         */
           edge_diameter, /* diameter of outer edge         */
           thickness,     /* thickness of washer            */
           density,       /* density of material used       */
           quantity,      /* number of washers made         */
           weight,        /* output: weight of washer batch */
           hole_radius,   /* radius of hole                 */
           edge_radius,   /* radius of outer edge           */
           rim_area,      /* area of rim                    */
           unit_weight;   /* weight of 1 washer             */

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
    rim_area = PI * edge_radius * edge_radius -
        PI * hole_radius * hole_radius;
    /* compute the weight of a flat washer. */
    unit_weight = rim_area * thickness * density;

    /* compute the weight of the batch of washers. */
    weight = unit_weight * quantity;

    /* Display the weight of the batch of washers. */
    printf("\nThe expected weight of the batch is %.2f", weight);
    printf(" grams.\n");

    return (0);
}

    
