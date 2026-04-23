/*
 * Author: C. Maxwell Reilly
 * Work started: 2026.04.23
 */

#include <stdio.h>
#include <math.h>

void print_table(int start, int end);

int
main(void)
{
    int start, end;
    printf("This program scans 2 values and then creates a table of negative powers of two.\n");
    printf("enter start value > ");
    scanf("%d", &start);
    printf("enter end value > ");
    scanf("%d", &end);
    printf("Power of 2 | Fraction | Decimal value\n");
    print_table(start, end);
    return 0;
}

void
print_table(int start, int end)
{
    for (int i = start; i <= end ; i++)
    {
        printf("-%4d      | 1/%2.0f     | %.4f\n", i, pow(2, i), pow(2.0, (double) i * -1));
    }
}
