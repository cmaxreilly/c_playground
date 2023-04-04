/* A small program to see if functions can be defined
 * before main() and still get referenced without a 
 * function prototype.
 */
#include<stdio.h>

void
function(void)
{
    printf("It worked!\n");
}

int
main(void)
{
    function();
    return(0);
}
