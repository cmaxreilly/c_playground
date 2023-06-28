#include<stdio.h>

#define MAX_SIZE 100

void
push_to_stack(char* stack, int* top, char value)
{
    if (*top == MAX_SIZE - 1) {
        printf("Stack Overflow: Cannot push value '%c' to stack.\n", value);
        return;
    }
    *top = *top + 1;
    stack[*top] = value;
}

char
pop_from_stack(char* stack, int* top)
{
    char value;
    if (*top == 0) {
        printf("Stack underflow: Cannot pop value from stack.\n");
        return(0);
    }
    value = stack[*top]  ;
    *top = *top - 1;
    return(value);

}

void push_to_global_stack(char stack, int top, char value)
{
    if (top == MAX_SIZE -1) {
        printf("Stack Overflow: Cannot push value '%c' to stack.\n", value);
        return;
    }
    *top += 1;
    stack[*top] = value;
}

char pop_from_global_stack(char stack, int top)
{
    char value;
    if (top == 0) {
        printf("Stack underflow: Cannot pop value from stack.\n");
        return;
    }
    value = stack[top]  ;
    top -= 1;
    return(value);
