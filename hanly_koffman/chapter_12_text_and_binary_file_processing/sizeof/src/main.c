/*
 * figuring out escape_r
 */

#include<stdio.h>

int
main(void)
{
    printf("An integer requires %lu bytes ", sizeof (int));
    printf("in this implementation.\n");
    printf("A character requires %lu bytes ", sizeof (char));
    printf("in this implementation.\n");
    printf("A long requires %lu bytes ", sizeof (long));
    printf("in this implementation.\n");
    printf("A double requires %lu bytes ", sizeof (double));
    printf("in this implementation.\n");
    return 0;
}
