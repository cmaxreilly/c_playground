/*
 * A small program to test a function I got from Chat GPT that takes a stack, a top, and
 * a new value and pushes the new value to the stack. Based upon that function, I wrote 
 * another function that pops and returns the top value from the a given stack. Next, I 
 * will copy these functions into my calculator app stack header file, and start using them
 * in the calculator. Once I can get this integrated, I will start focusing on the algorithm
 * and control flow for the calculator.
 *
 * Author: C. Maxwell Reilly w ChatGPT
 * Date: Friday, May 19, 2023
 */


#include <stdio.h>
#include <ctype.h>
#include "stack.h"



/* int
getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int);
*/

int main() {
    char stack[MAX_SIZE];
    int top = -1;  // Initialize the top of the stack
    // Pushing values to the stack
    push_to_stack(stack, &top, 'A');
    push_to_stack(stack, &top, 'B');
    push_to_stack(stack, &top, 'C');
    push_to_stack(stack, &top, 'D');

    // Printing the stack contents
    printf("Stack Contents: ");
    for (int i = 0; i <= top; i++) {
        printf("%c ", stack[i]);
    }
    printf("\n");
    printf("Popped value is %c ", pop_from_stack(stack, &top));
    printf("\n");
    return 0;
}


