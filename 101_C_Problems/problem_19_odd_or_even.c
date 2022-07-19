/*
Write a program which determine whether a number is ODD or EVEN
*/

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}