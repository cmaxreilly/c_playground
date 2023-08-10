/*
 * Author: C. Maxwell Reilly
 * Started: Friday, Jun 23, 2023
 * Finished:
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
    if (TEST)
        printf("Hello from the function proces_line()\n");

    inp = fopen("carpool.dat", "r");
    do
    {
    fscanf(inp, "%d", &num_passengers);
    fscanf(inp, "%lf", &distance_traveled);
    fscanf(inp, "%lf", &l_gas_per_week);
    if (TEST)
        printf("Num passengers = %d, distance travelled = %f, l gas = %f.\n", num_passengers, distance_traveled, l_gas_per_week);
    passenger_efficiency = calc_passenger_efficiency(num_passengers, distance_traveled, l_gas_per_week);
    if (passenger_efficiency <= min_p_e)
    {
        printf("%4c%2d%14c%2.0f%15c%2.1f%14c%2.1f%14c\n", ' ', num_passengers, ' ', distance_traveled, ' ', l_gas_per_week, ' ', passenger_efficiency, ' ');
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
