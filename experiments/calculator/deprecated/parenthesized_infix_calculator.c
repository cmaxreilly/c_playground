/* 
 * A program that evaluates fully parenthesized 
 * infix expressions using three stack data 
 * structures.
 *
 * Author: C. Maxwell Reilly
 * Date Completed:
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 100 /* Maximum size is 100 chars. */

int parren_top = -1, parren_array[MAX_SIZE];
int operand_top = -1, operand_array[MAX_SIZE];
int operator_top = -1, operator_array[MAX_SIZE];
void push();
void pop();
void show();





int main ()
{
    return(0);
}

void 
push(int top, int stack)
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

void 
pop(int top, int stack)
{
    ;
}

void 
parren_show()
{
    ;
}


