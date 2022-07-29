/*
Take two arrays [A and B] float data type of size 5. Scan the values
*/
#include <stdio.h>
int main()
{
    float A[5], B[5], sum_of_A = 0.0, sum_of_B = 0.0, Avg_of_A, Avg_of_B;
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &A[i]);
        sum_of_A = sum_of_A + A[i];
    }
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &B[i]);
        sum_of_B = sum_of_B + B[i];
    }

    // printf("%f %f", sum_of_A, sum_of_B);
    Avg_of_A = sum_of_A / 5.0;
    Avg_of_B = sum_of_B / 5.0;

    if (Avg_of_A > Avg_of_B)
    {
        printf("Avg:%.2f ->A", Avg_of_A);
    }
    else
    {
        printf("Avg:%.2f ->B", Avg_of_B);
    }

    return 0;
}