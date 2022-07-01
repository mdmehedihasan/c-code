#include <stdio.h>
#include <conio.h>
int main()
{
    char c[100];
    printf("Please enter your full name:\n");
    gets(c);
    printf("%s", c);
    return 0;
}