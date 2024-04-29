/* From 1st draft: Attempt at implementing a stack with a struct, with the help of Chat GPT */


#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation

#define MAX_STACK 100 // Define the maximum stack size

typedef struct {
    void** data; // Array to store stack elements
    int top;
} Stack;

/* Stack creation function
 * WARNING: Use of this function without the corresponding destroy stack
 * fucntion will cause a memory leak!!! (My first one, lol.)*/
Stack*
create_stack()
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    if (stack == NULL)
    {
        printf("Error: unable to allocate memory for stack.\n");
        exit(EXIT_FAILURE);
    }
    stack->data = (void**)malloc(MAX_STACK * sizeof(void*));
    if (stack->data == NULL)
    {
        printf("Error: unable to allocate memory for stack data.\n");
        exit(EXIT_FAILURE);
    }
    stack->top = -1;
    return stack;
}

/* Function to destroy stack and prevent a memory leak */
void
destroy_stack(Stack* stack)
{
    free(stack->data);
    free(stack);
}

/* Function to check if stack is empty */
int is_empty(Stack* stack)
{
    return (stack->top == -1);
}

/* Function to push elements to the stack */
void
push(Stack* stack, void* data)
{
    if (stack->top == MAX_STACK - 1)
    {
        printf("Error: Stack overflow.\n");
        exit(EXIT_FAILURE);
    }
    stack->top++;
    stack->data[stack->top] = data;
}

/* Function to pop an element from the stack */
void*
pop(Stack* stack)
{
    if(is_empty(stack))
    {
        printf("Error: Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    void* data = stack->data[stack->top];
    stack->top--;
    return data;
}

/* Function to print the stack for demonstration purposes */
void
print_stack(Stack* stack)
{
    if (is_empty(stack))
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack contents:\n");
    for (int i = stack->top;
            i >= 0;
            i--)
    {
        printf("%p\n", stack->data[i]);
    }
}


int
main()
{
    /* Example usage of generic stack */
    Stack* stack = create_stack();

    int a = 10;
    double b = 3.14;
    char c = 'x';

    push(stack, &a);
    push(stack, &b);
    push(stack, &c);

    print_stack(stack);

    int* popped_c = (int*)pop(stack);
    printf("Popped element: %d\n", *popped_c);

    print_stack(stack);

    destroy_stack(stack);
    return 0;
}
