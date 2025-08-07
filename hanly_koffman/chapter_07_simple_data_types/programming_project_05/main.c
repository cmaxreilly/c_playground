#include<stdio.h>
#include<math.h> /* For pow*/

double
find_root(double radicand, double index);

int
main(void)
{
    printf("\nsquare root of 4 is %lf\n", find_root(4, 2));
    return 0;
}

double
find_root(double radicand, double index)
{
    double guess = radicand / 2.0;
    double answer = 0;
    for (
            int i = 0;
            i < 100;
            i++)
    {
        guess = guess - (pow(guess, index) - radicand/index * guess);
    }
    answer = guess;
    return answer;
}

