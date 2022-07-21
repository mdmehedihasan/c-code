/*
write a program which will take an integer N from  user and print all the numbers between N to -32. Stop your program when user will give N=-1 as input
*/

#include <stdio.h>
int main()
{
    int i, N;

    while (1)
    {
        scanf("%d", &N);
        if (N == -1)
        {
            break;
        }
        else if (N > -32)
        {
            for (i = N; i >= -32; i--)
            {
                printf("%d\n", i);
            }
        }
        else
        {
            for (i = N; i <= -32; i++)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}