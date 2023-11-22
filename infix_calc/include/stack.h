#include<stdio.h>

#define MAX_STACK 100

void print_double_stack(double stack[], int top);
void push_double(double stack[], double data, int* top);
double pop_double(double stack[], int* top);

void print_char_stack(char stack[], int top);
char pop_char(char stack[], int* top);
void push_char(char stack[], double data, int* top);

void
print_double_stack(double stack[], int top)
{
    int i;
    for (i = 0;
            i <=top - 1; 
            i++)
    {
        printf("%.2f\n", stack[i]);
    }
}

void
push_double(double stack[], double data, int* top)
{
    int fun_top;
    fun_top = *top;
    if (fun_top >= MAX_STACK)
    {
        printf("Stack Overflow!\n");
    } else 
    {
        stack[fun_top] = data;
        fun_top++;
        (*top) = fun_top;
    }
}

double
pop_double(double stack[], int* top)
{
    int fun_top;
    double data;
    fun_top = *top;
    if (fun_top <= 0)
    {
        printf("Stack Underflow!\n");
        return 0.0;
    } else
    {
        fun_top--;
        data = stack[fun_top];
        (*top) = fun_top;
        return data;
    }
}

void
print_char_stack(char stack[], int top)
{
    int i;
    for (i = 0;
            i <=top - 1; 
            i++)
    {
        printf("%c\n", stack[i]);
    }
}

void
push_char(char stack[], double data, int* top)
{
    int fun_top;
    fun_top = *top;
    if (fun_top >= MAX_STACK)
    {
        printf("Stack Overflow!\n");
    } else 
    {
        stack[fun_top] = data;
        fun_top++;
        (*top) = fun_top;
    }
}

char
pop_char(char stack[], int* top)
{
    int fun_top;
    char data;
    fun_top = *top;
    if (fun_top <= 0)
    {
        printf("Stack Underflow!\n");
        return '0';
    } else
    {
        fun_top--;
        data = stack[fun_top];
        (*top) = fun_top;
        return data;
    }
}
