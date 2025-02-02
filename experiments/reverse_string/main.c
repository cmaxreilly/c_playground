/*
 * Author: C. Maxwell Reilly
 * 1.31.25
 */

#include<stdio.h>
#include<stdlib.h>

char*
reverse_string(char* string_to_reverse)
{
    char* return_string;
    int string_length = 0;
    int length = 0;
    int i1 = 0;
    int i2;

    while(string_to_reverse[length] != '\0')
        length++;
    // length += 1;
    i2 = length - 1;
    // printf("The first letter of your word is %c\n", string_to_reverse[0]);
    // printf("The last letter of your word is %c\n", string_to_reverse[length - 1]);
    while(i1 < length)
    {
        return_string[i1] = string_to_reverse[i2];
        i1++;
        i2--;
    }
    return return_string;
}

int
main()
{
    char* string;
    printf("Enter a string you want reversed > ");
    scanf("%s", string);
    reverse_string(string);
    printf("Your string is %s\n", string);
    return 0;
}
