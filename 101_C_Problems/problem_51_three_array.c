/*
Take theree arrays[A,B and AB] of float data type of size 5. Scan the values of two arrays[A and B] from user. Now assign the summation of the two arrays to the AB.
(AB[i]=A[i]+B[i])
finally print the values of AB array
*/
#include <stdio.h>
int main()
{
    float A[5], B[5], AB[5];
    int i, j, k;
    printf("Enter Array of A Element:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &A[i]);
    }

    printf("Enter Array of B Element:\n");
    for (j = 0; j < 5; j++)
    {
        scanf("%f", &B[j]);
    }

    printf("Value of AB:");
    for (k = 0; k < 5; k++)
    {
        AB[k] = A[k] + B[k];
        printf("%.1f ", AB[k]);
    }

    return 0;
}