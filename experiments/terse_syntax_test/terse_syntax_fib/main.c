#include <stdio.h>

#define MAX_LOOP 100
int
main(void)
{
    int i;
    long long int fib_num = 1, prev_num = 1, temp;
    for (i = 0; i < MAX_LOOP; i++)
    {
        printf("%lld\n", fib_num);
        temp = prev_num;
        prev_num = fib_num;
        fib_num = temp + fib_num;
    }
}

