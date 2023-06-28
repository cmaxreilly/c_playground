/*
 * Author: C. Maxwell Reilly
 * Started: Tuesday, Jun 27, 2023
 * Finished:
 */

#include<stdio.h>

#define MAX_STACK 100

void print_stack(double stack[], int top);
void push(double stack[], double data, int* top);
double pop(double stack[], int* top);

    int
main()
{
    double stack[MAX_STACK];
    int top=0;
    push(stack, 1, &top);
    push(stack, 6, &top);
    push(stack, 69, &top);
    push(stack, 420, &top);
    push(stack, 42, &top);
    push(stack, 58008, &top);
    print_stack(stack, top);
    printf("Popped value = %.2f\n", pop(stack, &top));
    printf("Popped value = %.2f\n", pop(stack, &top));
    printf("Popped value = %.2f\n", pop(stack, &top));
    printf("Popped value = %.2f\n", pop(stack, &top));
    printf("Popped value = %.2f\n", pop(stack, &top));
    printf("Popped value = %.2f\n", pop(stack, &top));
    printf("Popped value = %.2f\n", pop(stack, &top));
    print_stack(stack, top);

    return 0;
}

    void
print_stack(double stack[], int top)
{
    int i;
    for (i = 0;
            i <=top - 1; 
            i++)
    {
        printf("%.2f\n", stack[i]);
    }
}

    void
push(double stack[], double data, int* top)
{
    int fun_top;
    fun_top = *top;
    if (fun_top >= MAX_STACK)
    {
        printf("Stack Overflow!\n");
    } else 
    {
        stack[fun_top] = data;
        fun_top++;
        (*top) = fun_top;
    }
}

    double
pop(double stack[], int* top)
{
    int fun_top;
    double data;
    fun_top = *top;
    if (fun_top <= 0)
    {
        printf("Stack Underflow!\n");
        return 0.0;
    } else
    {
        fun_top--;
        data = stack[fun_top];
        (*top) = fun_top;
        return data;
    }
}

