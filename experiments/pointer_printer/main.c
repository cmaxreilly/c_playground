#include <stdio.h>

int a;

int
main()
{
    printf("Enter your desired integer >> ");
    scanf("%d", &a);
    printf("Your integer is: %d\n", a);
    printf("Your integer's address is: %p\n", &a);
    return(0);
}

