#include<stdio.h>

void print_h(void);
void print_i(void);
void print_m(void);
void print_o(void);

int 
main(void)
{
    print_h();
    print_i();
    printf("\n\n\n");
    print_m();
    print_o();
    print_m();

    return(0);
}

void
print_h(void)
{
    printf("|    |\n");
    printf("|    |\n");
    printf("+----+\n");
    printf("|    |\n");
    printf("|    |\n");
}

void
print_i(void)
{
    printf("------\n");
    printf("  ||  \n");
    printf("  ||  \n");
    printf("  ||  \n");
    printf("------\n");
}

void
print_m(void)
{
    printf("^    ^\n");
    printf("|\\  /|\n");
    printf("| \\/ |\n");
    printf("|    |\n");
    printf("|    |\n");
}

void 
print_o(void)
{
    printf(" ---- \n");
    printf("|    |\n");
    printf("|    |\n");
    printf("|    |\n");
    printf(" ---- \n");
} 

    
