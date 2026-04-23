/*
 * Author: C. Maxwell Reilly
 * Work started: 2026.04.23
 */

#include <stdio.h>
#include <math.h>

void scan_data(char* operator, double* operand);
void do_next_op(char operator, double operand, double* accumulator);

int
main(void)
{
    char operator;
    double operand, accumulator = 0.0;
    printf("Enter your operand and floating point number below.\n");
    printf("Enter \"q 0\" to quit\n");
    printf(" >");
    while (operator != 'q')
    {
        scan_data(&operator, &operand);
        do_next_op(operator, operand, &accumulator);
        printf("Value so far: %lf\n", accumulator);
        printf(" >");
    }
    return 0;
}

void
scan_data(char* operator, double* operand)
{
    scanf("%c", operator);
    scanf("%lf", operand);
}

void
do_next_op(char operator, double operand, double* accumulator)
{
    switch (operator){
        case '+':
            *accumulator += operand;
            break;
        case '-':
            *accumulator -= operand;
            break;
        case '*':
            *accumulator *= operand;
            break;
        case '/':
            *accumulator = *accumulator / operand;
            break;
        case '^':
            *accumulator = pow(*accumulator, operand);
            break;
    }
}
