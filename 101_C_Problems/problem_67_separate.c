/*
Take a string as input from the user and print the every single charanter of it into a separate line. if user gives "DHAKA" Then it should be
D
H
A
K
A
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char input[20];
    int i, length;
    scanf("%s", &input);
    length = strlen(input);
    for (i = 0; i < length; i++)
    {
        printf("%c \n", input[i]);
    }
    return 0;
}