/* Draws a stick figure.
 * Copied from page 119 of Hanly and Koffman
 */

#include <stdio.h>

/* Function prototypes */
void draw_circle(void);     /* Draws a circle           */

void draw_intersect(void);  /* Draws intersecting lines */

void draw_base(void);       /* Draws a base line        */

void draw_triangle(void);   /* Draws a triangle         */

int
main(void)
{
    /* Draw a circle.               */
    draw_circle();

    /* Draw a triangle.             */
    draw_triangle();

    /* Draw intersecting lines.     */
    draw_intersect();

    return(0);
}

/*
 * Draws a circle
 */
void
draw_circle(void)
{
    printf("   *   \n");
    printf(" *   * \n");
    printf("  * *  \n");
}

/*
 * Draws intersecting lines
 */
void
draw_intersect(void)
{
    printf("  / \\   \n");
    printf(" /   \\  \n");
    printf("/     \\ \n");
}

/* 
 * Draws a base line
 */
void 
draw_base(void)
{
    printf("-------\n");
}

/*
 * Draws a triangle
 */ void
draw_triangle(void)
{
    draw_intersect();
    draw_base();
}

