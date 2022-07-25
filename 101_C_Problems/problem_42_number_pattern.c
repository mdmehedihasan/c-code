/*
Write a program to produce the following output using loop
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
6 12 18 24 30 36
*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j * i);
        }
        printf("\n");
    }

    return 0;
}