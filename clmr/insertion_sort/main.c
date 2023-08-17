/*
 * Author: C. Maxwell Reilly
 * Started: August 16, 2023
 * Finished: August 17, 2023
 */


#include <stdio.h>

#define TEST 0

int
main(void)
{
    int array[6] = {5, 2, 4, 6, 1, 3};
    // printf("test_array[0] = %d\n", sorted_array[0]);
    int j, key, length, i;
    length = sizeof(array)/ sizeof(array[0]);
    printf("length of array = %d\n", length);
    printf("Original array = {");
    for (i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
    printf(" }\n\nSorting ...\n\n");

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
    printf("New array = { ");
    for (i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("} \n\n");
    return 0;
}



