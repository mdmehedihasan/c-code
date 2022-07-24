/*

*/
#include <stdio.h>
int main()
{
    int i, j, k, l, m, n, o, p;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = 2; k >= i; k--)
        {
            printf("*");
        }
        for (l = 1; l >= i; l--)
        {
            printf("*");
        }
        printf("\n");
    }

    for (m = 0; m < 2; m++)
    {

        for (n = m; n == 0; n++)
        {
            printf(" ");
        }
        for (o = 0; o <= m; o++)
        {
            printf("*");
        }
        for (p = 0; m + 1 >= p; p++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}