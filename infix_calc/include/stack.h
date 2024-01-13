#ifndef STACK_H
#define STACK_H

#include <stdio.h>

#define MAX_STACK 100


void print_double_stack(double stack[], int top);
void push_double(double stack[], double data, int* top);
double pop_double(double stack[], int* top);

void print_char_stack(char stack[], int top);
void push_char(char stack[], double data, int* top);
char pop_char(char stack[], int* top);

#endif // STACK_H
