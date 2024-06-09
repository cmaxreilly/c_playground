/* From 1st draft: Attempt at implementing a stack with a struct, with the help of Chat GPT */
/* From 2nd Draft: Got rid of most GPT written code because I don't get how null pointers work, lol.
 * also wrote an effective push function that actually works with my struct. */
/* Third Draft: Merging this project with the Ritchie calculator to figure out how to get my stack
 * to work with a postfix calculator. */


#include <stdio.h>
#include <string.h>
#include "../include/stack.h"

#define MAX_STACK 100 // Define the maximum stack size
#define MAX_TERM  100 // Define maximum term size in stack as 100 digits.

typedef struct {
    char data[MAX_STACK][MAX_TERM];
    int top;
} Stack;

/* function declarations */
void m_push(Stack *stack, char *data);
char* m_pop(Stack *stack);
void print_stack(Stack *stack);
/* Function Definitions */

void
m_push(Stack *stack, char *data)
{
    if (stack->top < MAX_STACK)
    {
        strncpy(stack->data[stack->top], data, MAX_TERM);
        stack->data[stack->top][MAX_TERM-1] = '\0';
        stack->top++;
    }
    else
    {
        printf("Stack Overflow!\n");
    }
}


char*
m_pop(Stack *stack)
{
    if (stack->top <= 0)
    {
        printf("Stack underflow!\n");
        return NULL;
    }
    stack->top--;
    return stack->data[stack->top];
}

void
test(void)
{
    printf("Hello, from stack.c!\n");
}
