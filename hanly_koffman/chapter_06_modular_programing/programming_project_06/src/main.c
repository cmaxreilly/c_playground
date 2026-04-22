/*
 * Author: C. Maxwell Reilly
 * Work started: 2026.04.22
 */

#include <stdio.h>

int
main(void)
{
    int num_of_customers = 0;
    int total_kwh = 0;
    float total_charges = 0;
    FILE *data;
    int customer_number;
    int customer_usage;
    int label_number = 1;

    data = fopen("dat/customer_kilowatt-hours.dat", "r");
    fscanf(data, "%d", &customer_number);
    fscanf(data, "%d", &customer_usage);
    printf("%d: %d, usage: %d\n", label_number, customer_number, customer_usage);
    while (fscanf(data, "%d", &customer_number) == 1)
    {
        fscanf(data, "%d", &customer_usage);
        label_number++;
        printf("%d: customer %d: %d kwh\n", label_number, customer_number, customer_usage);
    }


    fclose(data);
    return 0;
}
