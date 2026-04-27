#include<stdio.h>
#include<math.h> /* for sin and sqrt */

double trap(double a, double b, double n, double (*f) (double) );
/* a is start of interval, b is end of interval, n is divisions of interval,
 * f is function. */
double sine_func(double n);
double g(double x);
double f(double x);

int
main(void)
{
    printf("\n");
    printf("Calculating definite integral of sin from [0, 3.1415] ...\n");
    for     (int i = 1;
            i <= 7;
            i++) {
        printf("Using %d subintervals: %lf\n", (int) pow(2, i), trap(0, 3.1415, pow(2, i), sine_func));
    }
    printf("\n");
    printf("Calculating definite integral of sqrt(4 - x^2) from [-2, 2] ...\n");
    for     (int i = 1;
            i <= 7;
            i++) {
        printf("Using %d subintervals: %lf\n", (int) pow(2, i), trap(-2, 2, pow(2, i), f));
    }
    printf("\n");
    return 0;
}

double
trap(double a, double b, double n, double f(double farg) )
{
    double h = (b - a ) / n; // Length of segments
    // printf("a = %lf\n", a);
    // printf("b = %lf\n", b);
    // printf("n = %lf\n", n);
    // printf("h = (b - a) / n = %lf (should equal \n", h);
    double sum = 0.0, line_one, line_two, segment_area;
    int i;

    for (   i = 0;
            i < n;
            i++)
    {
        line_one = f(a + (i * h));
        line_two = f(a + ((i + 1) * h));
        segment_area = ((line_one + line_two) / 2) * h;
        // printf("line one length = %lf\n", line_one);
        // printf("line two length = %lf\n", line_two);
        // printf("segment %d area = %lf\n\n", i, segment_area);
        sum += segment_area;
    }
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
