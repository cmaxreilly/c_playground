#ifndef STACK_H
#define STACK_H

#include <stdio.h>

#define MAX_STACK 100


void print_double_stack(double stack[], int top);
void push_double(double stack[], double data, int* top);
double pop_double(double stack[], int* top);

/* utilites for making a stack of chars. */

/* print_char_stack simply prints all of the characters in the char stack. */
void print_char_stack(char stack[], int top);
/* push_char takes a stack, a piece of data, and a pointer the top of the stack and adds the data to
 * the stack while incremeenting the top. */
void push_char(char stack[], char data, int* top);
char pop_char(char stack[], int* top);

#endif // STACK_H
