/* From 1st draft: Attempt at implementing a stack with a struct, with the help of Chat GPT */
/* From 2nd Draft: Got rid of most GPT written code because I don't get how null pointers work, lol.
 * also wrote an effective push function that actually works with my struct. */


#include <stdio.h>
#include <string.h>

#define MAX_STACK 100 // Define the maximum stack size
#define MAX_TERM  100 // Define maximum term size in stack as 100 digits.

typedef struct {
    char data[MAX_STACK][MAX_TERM];
    int top;
} Stack;

/* function declarations */
void push(Stack *stack, char *data);
char* pop(Stack *stack);
void print_stack(Stack *stack);

int
main()
{
    /* Example usage of generic stack */

    char a[3] = "10";
    double b = 3.14;
    char c = 'x';
    Stack stack;
    stack.top = 0;

    printf("Stack top initialized to %d\n", stack.top);
    push(&stack, a);
    printf("value of a = %s pushed to stack\n", a);
    printf("The top of the stack = %s\n", stack.data[stack.top-1]);

    char *popped = pop(&stack);
    printf("%s added to stack and removed from stack.\n", popped);
/*
    push(stack, &b);
    push(stack, &c);

    print_stack(stack);

    int* popped_c = (int*)pop(stack);
    printf("Popped element: %d\n", *popped_c);
    print_stack(stack);
    destroy_stack(stack);
    */
    return 0;
}

/* Function Definitions */

void
push(Stack *stack, char *data)
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
pop(Stack *stack)
{
    if (stack->top <= 0)
    {
        printf("Stack underflow!\n");
        return NULL;
    }
    stack->top--;
    return stack->data[stack->top];
}
