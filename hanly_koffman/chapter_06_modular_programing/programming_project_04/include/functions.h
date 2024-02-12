#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/* Calculates the rate of heat transfer 'h' in Watts given
 * the coefficient of thermal conductivity 'k', the cross
 * sectional area of the conductor A, the temperature on one
 * side T2, the temperature on the other side, T1, and the 
 * thickness of the conductor in meters X. */
double calc_h(double k, double A, double T2, double T1, double X);

/* Calculates the coefficient of thermal conductivity K */
double calc_k(double h, double A, double T2, double T1, double X);

/* Function that calculates the cross sectional area of the conductor A */
double calc_A(double h, double k, double T2, double T1, double X);

/* Function that calculates the temperature on one side T2 */
double calc_T2(double h, double k, double A, double T1, double X);

/* Function that calculates the temperature on the other side T1 */
double calc_T1(double h, double k, double A, double T2, double X);

/* Function that calculates the thickness of the conductor in meters X */
double calc_X(double h, double k, double A, double T2, double T1);

/* Function that reports on all of the findings. */
void report(double h, double k, double A, double T2, double T1, double X);

#endif // FUNCTIONS_H
