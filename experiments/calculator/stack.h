/* A small program that instantiates and modifies a stack from the command line. 
 * Copied from https://www.digitalocean.com/community/tutorials/stack-in-c
 */

#include <stdio.h>

#include <stdlib.h>

#define SIZE 4

int top = -1, inp_array[SIZE];
void push();
void pop();
void show();
void push_to_stack(int* top, int* array[SIZE], int new_character);
void push ()
{
    int x;

    if (top == SIZE -1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter element to be added to the stack: ");
        scanf("%d", &x);
        top = top + 1;
        inp_array[top] = x;
    }

}

void pop ()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        top = top -1;
    }
}

void show ()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", inp_array[i]);
    }
}

