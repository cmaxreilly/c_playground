/*
 * Author: C. Maxwell Reilly
 * Started: August 17, 2023
 * Finished:
 */


#include <stdio.h>

#define TEST 0

// function prototypes

void print_int_array(int array[]);
int* sort_int_array(int array[]);

int
main(void)
{
    int array[6] = {5, 2, 4, 6, 1, 3};
    // printf("test_array[0] = %d\n", sorted_array[0]);
    int j, key, length, i;
    length = sizeof(array)/ sizeof(array[0]);
    printf("length of array = %d\n", length);
    printf("Original array = {");
    /* for (i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    } */
    print_int_array(array);
    printf(" }\n\nSorting ...\n\n");
    int new_array = *(sort_int_array(array));

    /* printf("New array = { ");
    for (i = 0; i < 6; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("} \n\n");*/
    printf("New array = { ");
    print_int_array(&new_array);
    printf("} \n\n");
    return 0;
}

void
print_int_array(int array[])
{
    int i;
    //  int length = sizeof(array)/ sizeof(array[0]);
    if (TEST)
    {
        ;
        //printf("Length of new array = %d\n", length);
    }

    for (i = 0; i < 6; i++)
    {
        printf("%d, ", array[i]);
    }
}


int *
sort_int_array(int array[])
{
    int i, j, key, length;
    length = sizeof(array)/ sizeof(array[0]);
    int sorted_array = *array;
    for (   j = 1;
            j <= length;
            j ++)
    {
        key = array[j];
        i = j - 1;
        while (i >= 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            i = i -1;
        }
        array[i + 1] = key;
    }
    return array;
}

