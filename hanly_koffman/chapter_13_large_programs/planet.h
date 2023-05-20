/*
 * planet.h
 *
 * abstract data type planet
 *
 * Type planet_t has these components:
 *      name, diameter, moons, orbit_time, rotation_time
 *
 *  Operators:
 *      print_planet, plante_equal, scan_planet
 */

#define PLANET_STRSIZ    10

typedef struct { /* planet structure */
    char name[PLANET_STRSIZ];
    double  diameter;       /* equatorial diameter in km                */
    int     moons;          /* number of moons                          */
    double orbit_time,      /* years to orbit sun once                  */
            rotation_time;  /* hours to complete one revolution on
                               axis                                     */
} planet_t;

/*
 * Displays with labels all components of a planet_t structure
 */
extern void
print_planet(planet_t pl);

/*
 * Determines whether or not the components of planet_1 and planet_2
 * match
 */
extern int
planet_equal(planet_t planet_1, /* input -planets to                    */
        planet_t planet_t);     /*          compare                     */

/*
 * Fills a type planet_t structure with input data. Integer returned as
 * function result is success/failure/EOF indicator
 *      1 => successful input of planet
 *      0 => error encountered
 *      EOF => insufficient data before end of file
 *  In case of error or EOF, value of type planet_t output argument is
 *  undefined.
 */
extern int
scan_planet (planet_t *plnp);   /* output - address of planet_t structure to
                                   fill                                 */
