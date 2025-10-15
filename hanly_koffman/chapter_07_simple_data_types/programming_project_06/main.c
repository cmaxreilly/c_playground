#include<stdio.h>
#include<math.h> /* for sin and sqrt */

double trap(double a, double b, double n, double (*f) (double) );
double sine_func(double n);
double g(double x);
double f(double x);

int
main(void)
{
    printf("\nSine of 9 is %f\n", sine_func(9.00));
    printf("This number should be the same: %f\n", trap(1.0, 1.0, 9.0, sine_func));
    return 0;
}

double
trap(double a, double b, double n, double (*f) (double) )
{
    double sum = 0;
    sum += f(n);
    return sum;
}

double
sine_func(double n)
{
    return sin(n);
}

double
g(double x)
{
    return (x*x)*sin(x);
}

double
f(double x)
{
    return sqrt(4 - (x*x));
}
