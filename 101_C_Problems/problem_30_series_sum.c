/*
Write a program which will print the summation of the given series
101+99+97+...+3+1=?
*/

#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 101; i >= 1; i -= 2)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}