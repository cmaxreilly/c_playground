/*
 * First draft: June 16, 2024
 * Allocation of arrays with calloc
 */

#include <stdio.h>
#include <stdlib.h> /* gives access to calloc */

#define STRSIZE 10
typedef struct {
    char    name[STRSIZE];
    double  diameter;       /* equatorial diameter in km    */
    int     moons;          /* number of mooons             */
    double  orbit_time,     /* years to orbit sun once      */
            rotation_time;  /* hours to complete one
                               revolution on axis.          */
} planet_t;
int scan_planet(planet_t *plnp);

int
main(void)
{
    char        *string1;
    int         *array_of_nums;
    planet_t    *array_of_planets;
    int         str_size, num_nums, num_planets, i;
    printf("Enter string length and string >> ");
    scanf("%d", &str_size);
    string1 = (char *)calloc(num_nums, sizeof (char));
    scanf("%s", string1);

    printf("\nHow many numbers? >> ");
    scanf("%d", &num_nums);
    array_of_nums = (int *)calloc(num_nums, sizeof (int));
    array_of_nums[0] = 5;
    for (i = 1; i < num_nums; ++i)
        array_of_nums[i] = array_of_nums[i - 1 ] * i;

    printf("\nEnter the number of planets and planet data >> ");
    scanf("%d", &num_planets);
    array_of_planets = (planet_t *)calloc(num_planets, sizeof (planet_t));
    for (i = 0; i < num_planets; i++)
        scan_planet(&array_of_planets[i]);

    return 0;
}

/* For scan_planet function, go to figure 11.4 on page 549 */
int
scan_planet(planet_t *plnp)  /* output - address of planet_t structure
                                to fill                                 */
{
    int result;
    result = scanf("%s%lf%d%lf%lf", (*plnp).name,
                                    &(*plnp).diameter,
                                    &(*plnp).moons,
                                    &(*plnp).orbit_time,
                                    &(*plnp).rotation_time);
    if (result == 5)
        result = 1;
    else if (result != EOF)
        result = 0;
    return (result);
}
