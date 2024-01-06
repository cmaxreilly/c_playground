/* 
 * My hack at an infix calculator
 */

#include<stdio.h>
#include"include/stack.h"
#include"include/precedence.h"
void test_stack(void);
void test_tree(void);

int
main(void)
{

    return 0;
}

/* Driver code to test my stack functions */
void
test_stack(void)
{
    double num_stack[MAX_STACK];
    int num_stack_top = 0;
    push_double(num_stack, 6, &num_stack_top);
    /*
    push_double(num_stack, 6, &num_stack_top);
    push_double(num_stack, 6, &num_stack_top);
    printf("Double stack: \n");
    print_double_stack(num_stack, num_stack_top);
    char char_stack[MAX_STACK];
    int char_stack_top = 0;
    push_char(char_stack, 'H', &char_stack_top);
    push_char(char_stack, 'I', &char_stack_top);
    push_char(char_stack, 'M', &char_stack_top);
    push_char(char_stack, 'O', &char_stack_top);
    push_char(char_stack, 'M', &char_stack_top);
    push_char(char_stack, '!', &char_stack_top);
    print_char_stack(char_stack, char_stack_top);
    */
}

/* Driver code to test my priority tree functions */

void
test_tree(void)
{
    ;
}
