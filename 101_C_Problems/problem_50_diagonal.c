/*
take a two dimensional array of integer data type of size[3*3] .Take the values from the user using scanf(). Now print the summation of the values of diagonal elements. Like the following [1+5+9=15]
*/
#include <stdio.h>
int main()
{
    int num[3][3], i, j, sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        sum += num[i][i];
    }
    printf("The summation is: %d", sum);

    return 0;
}