/*
Find the length of a given string. [if user gives input "LovE" you should print 4]
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char input[20];
    scanf("%s", &input);
    int total = strlen(input);
    printf("%d", total);
    return 0;
}