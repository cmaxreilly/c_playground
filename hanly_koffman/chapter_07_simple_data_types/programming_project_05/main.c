#include<stdio.h>
#include<math.h> /* For pow*/

double
find_root(double radicand, double index);

int
main(void)
{
    printf("\nsquare root of 4 is %lf\n", find_root(4, 2));
    printf("\nThe square root of 2 is %lf\n", find_root(2, 2));
    printf("\nThe cube root of 7 is %lf\n", find_root(7, 3));
    printf("\nThe cube root of -1 is %lf\n", find_root(-1, 3));
    return 0;
}

double
find_root(double radicand, double index)
{
    if (radicand <= 0)
    {
        printf("\nNegative radicands are illegal\n");
        return 0.0;
    }

    double guess = radicand / 2.0;
    double answer = 0;
    for (
            int i = 0;
            i < 100;
            i++)
    {
        guess = guess - (pow(guess, index) - radicand)/ (index * pow(guess, index - 1.0));
    }
    answer = guess;
    return answer;
}

