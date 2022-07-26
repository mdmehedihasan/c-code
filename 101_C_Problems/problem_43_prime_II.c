/*
Write a program which will display all the prime numbers between 0 to N
example- 2 3 5 7 11 13 17 19
*/
#include <stdio.h>
int main()
{
    int i, j;
    int count = 0;

    for (i = 2; i <= 2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count = 3;
            }
        }
        if (count == 0)
        {
            printf("%d ", i);
        }
        count = 0;
    }

    return 0;
}