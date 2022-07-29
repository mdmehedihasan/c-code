/*
You are given the following array of integers-
[1,23,10,15,17,21,44,43,53]
Now write a program which will print the prime numbers with its index
*/
#include <stdio.h>
int main()
{
    int A[9] = {1, 23, 10, 15, 17, 21, 44, 43, 53}, i, j;
    for (i = 0; i < 9; i++)
    {
        int count = 0;
        if (A[i] >= 2)
        {
            for (j = 2; j < A[i]; j++)
            {
                if (A[i] % j == 0)
                {
                    count = 3;
                }
            }
            if (count == 0)
            {
                printf("%d is a prime, index %d\n", A[i], i);
            }
        }
    }

    return 0;
}