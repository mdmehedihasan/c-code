#include <stdio.h>
int main()
{
    int i, j, sum = 1;
    int n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", sum);
            sum = sum + 1;
        }

        printf("\n");
    }

    return 0;
}