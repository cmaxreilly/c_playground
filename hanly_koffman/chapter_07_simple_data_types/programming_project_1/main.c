#include <stdio.h>

int
main(void)
{
    int i;
    float sf = 0.0, xf = 0.1f;
    double sd = 0.0, xd = 0.1;
    for (   i = 0;
            i < 1000;
            i++)
    {
        sf += xf;
    }

    for (   i = 0;
            i < 1000;
            i++)
    {
        sd += xd;
    }
    printf("The floating point sum: %.40f\n", sf);
    printf("The double sum:         %.40lf\n", sd);
    return(0);
}
