/*
 * Author: C. Maxwell Reilly
 * First Draft: June 5, 2024 (Successful)
 * HK implementation of a stack
 */

#include <stdio.h>

#define STACK_SIZE 100

/* Function declarations */
void push(char stack[],
        char item,
        int *top,
        int max_size);
char pop(char stack[],
        int *top);

int
main(void)
{
    char stack[STACK_SIZE];
    int top = 0;

    push(stack, '2', &top, STACK_SIZE);
    push(stack, '+', &top, STACK_SIZE);
    push(stack, 'C', &top, STACK_SIZE);
    printf("First item = %c\n", pop(stack, &top));
    printf("Second item = %c\n", pop(stack, &top));
    printf("Third item = %c\n", pop(stack, &top));
    return 0;
}

void
push(char stack[],
        char item,
        int *top,
        int max_size)
{
    if (*top < max_size - 1)
    {
        ++(*top);
        stack[*top] = item;
    }
}

char
pop(char stack[],
        int *top)
{
    char item;

    if (*top >= 0)
    {
        item = stack[*top];
        --(*top);
    } else
    {
        item = '\0';
    }
    return (item);
}
