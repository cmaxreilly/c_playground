/*
 * Author: C. Maxwell Reilly
 * 1.31.25
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void
reverse_string(char* string_to_reverse)
{
    char temp;
    int length = strlen(string_to_reverse);
    int i1 = 0;
    int i2 = length -1;

    while(i1 < i2)
    {
        temp = string_to_reverse[i1];
        string_to_reverse[i1] = string_to_reverse[i2];
        string_to_reverse[i2] = temp;

        i1++;
        i2--;
    }
}

int
main()
{
    char* string;
    printf("Enter a string you want reversed > ");
    scanf("%s", string);
    reverse_string(string);
    printf("Your string reversed is: %s\n", string);
    return 0;
}
