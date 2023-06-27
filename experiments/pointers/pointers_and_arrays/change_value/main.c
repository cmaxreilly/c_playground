/*
 * Author: C. Maxwell Reilly
 * Started: Friday, Jun 23, 2023
 * Finished:
 */

#include<stdio.h>

void change_num(int* old_num, int new_num);

int
main()
{
    int num = 1, new_num;

    printf("Your old number is :%d\n", num);
    printf("Enter your new integer >> ");
    scanf("%d", &new_num);
    change_num(&num, new_num);
    printf("Your new number is : %d\n", num);
    return 0;
}


void
change_num(int* old_num, int new_num)
{
    (* old_num) = new_num;
}

