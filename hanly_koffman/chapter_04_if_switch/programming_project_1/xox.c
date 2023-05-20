/*
 * Programming project 1 from Chapter 4:
 * 
 * Write a program that displays a message consisting of three block letters;
 * each letter is either an X or an O. The program user's data determines whether
 * a particular leter will be an x or o. For example, if the user enters the three
 * letters XOX, the block letters X, O, and X will be displayed.
 */

/* Author: C. Maxwell Reilly
 * Date: Friday, May 19, 2023
 */

#include<stdio.h>

void block_x(void);
void block_o(void);

int
main(void)
{
    char first_choice, second_choice, third_choice;
    printf("This program prints block x's and o's based upon your choices.\n");
    printf("Enter your choices (x or o) >> ");
    scanf("%c", &first_choice);
    scanf("%c", &second_choice);
    scanf("%c", &third_choice);
    switch (first_choice) {
        case 'X':
        case 'x':
            block_x();
            break;
        case 'O':
        case 'o':
            block_o();
            break;
        default:
            printf("Invalid choice\n");
    }

    switch (second_choice) {
        case 'X':
        case 'x':
            block_x();
            break;
        case 'O':
        case 'o':
            block_o();
            break;
        default:
            printf("Invalid choice\n");
    }

    switch (third_choice) {
        case 'X':
        case 'x':
            block_x();
            break;
        case 'O':
        case 'o':
            block_o();
            break;
        default:
            printf("Invalid choice\n");
    }
    return(0);
}

void
block_x(void)
{
    printf("xx        xx\n");
    printf("  xx    xx  \n");
    printf("    xxxx    \n");
    printf("    xxxx    \n");
    printf("  xx    xx  \n");
    printf("xx        xx\n");
    printf("\n\n\n");
}

void
block_o(void)
{
    printf("    oooo    \n");
    printf(" ooo    ooo \n");
    printf("o          o\n");
    printf("o          o\n");
    printf(" ooo    ooo \n");
    printf("    oooo    \n");
    printf("\n\n\n");
}

