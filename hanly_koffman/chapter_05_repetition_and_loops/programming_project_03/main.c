/*
 * Author: C. Maxwell Reilly
 * Started: Friday, Jun 23, 2023
 * Finished: Sunday, August 13, 2023
 */


#include <stdio.h>

#define TEST 0

// function prototypes
double get_min_p_e(void); /* Get minimum passenger efficiency */
void print_header(double min_p_e);
void process_line(double min_p_e);
double calc_passenger_efficiency(int num_of_people, 
        double commute_distance, 
        double l_gas_per_week);
double calc_subsidy(int passengers, double kilometers);

    int
main(void)
{
    // main variables
    // input variables
    double min_p_e;

    // Driver code
    min_p_e = get_min_p_e();
    print_header(min_p_e);
    process_line(min_p_e);


    return 0;
}


/* Get minimum passenger efficiency */
    double
get_min_p_e(void) 
{
    double min_p_e;
    printf("Enter min passenger efficiency > ");
    scanf("%lf", &min_p_e);
    return(min_p_e);
}

    void
print_header(double min_p_e)
{
    printf("\n    CARPOOLS MEETING MINIMUM PASSENGER EFFICINCY OF %.2f KM / L \n\n", min_p_e);
    printf("Passengers    Weekly commute      Gasoline        Efficiency       Weekly\n");
    printf("                   (km)         Consumption(L)   (pass km / L)    Subsidy($)\n\n");
}

    void
process_line(double min_p_e)
{
    FILE *inp;
    // output variables
    int num_passengers;
    double distance_traveled,
           l_gas_per_week,
           passenger_efficiency,
           weekly_subsidy;

    inp = fopen("carpool.dat", "r");
    do
    {
    fscanf(inp, "%d", &num_passengers);
    fscanf(inp, "%lf", &distance_traveled);
    fscanf(inp, "%lf", &l_gas_per_week);
    passenger_efficiency = calc_passenger_efficiency(num_passengers, distance_traveled, l_gas_per_week);
    if (passenger_efficiency <= min_p_e)
    {
        weekly_subsidy = calc_subsidy(num_passengers, distance_traveled);
        printf("%6d", num_passengers);
        printf("%16.0f", distance_traveled);
        printf("%18.1f", l_gas_per_week);
        printf("%17.1f", passenger_efficiency);
        printf("%17.2f\n", weekly_subsidy);
    }
    } while (distance_traveled * l_gas_per_week * weekly_subsidy != 0);
 
}

double
calc_passenger_efficiency(int num_of_people, 
        double commute_distance, 
        double l_gas_per_week)
{
    double passenger_efficiency;
    passenger_efficiency = num_of_people * commute_distance / l_gas_per_week;
    return passenger_efficiency;
}

double
calc_subsidy(int passengers, double kilometers)
{
    double subsidy = passengers * kilometers;
    return subsidy;
}
