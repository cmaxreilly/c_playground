/*
 * Author: C. Maxwell Reilly
 * Work started: 2026.04.22
 */

#include <stdio.h>

int calculate_charge(int kwh_usage);

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
    printf("   | customer | usage | charge \n");
    printf("-------------------------------\n");
    printf("%2d |      %3d |  %4d | $%3.2lf\n", label_number, customer_number, customer_usage, (float) calculate_charge(customer_usage)/100);
    while (fscanf(data, "%d", &customer_number) == 1)
    {
        fscanf(data, "%d", &customer_usage);
        label_number++;
        printf("%2d |      %3d |  %4d | $%3.2lf\n", label_number, customer_number, customer_usage, (float) calculate_charge(customer_usage)/100);
    }


    fclose(data);
    return 0;
}

int
calculate_charge(int kwh_usage) /* in cents */
{
    if (kwh_usage < 0)
        return 0;
    if (kwh_usage < 300)
        return kwh_usage * 9;
    if (kwh_usage <= 600)
        return 300 * 9 + (kwh_usage - 300) * 8;
    if (kwh_usage <= 1000)
        return (300 * 9) + (300 * 8) + ((kwh_usage - 600) * 6);
    if (kwh_usage > 1000)
        return (300 * 9) + (300 * 8) + (400 * 6) + ((kwh_usage - 1000) * 5);
}
