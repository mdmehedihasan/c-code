/*
Take a two dimensional array of integer data type of size[3*3]. Take the values from the user using scanf().Now print the average of all the values.
*/
#include <stdio.h>
int main()
{
    int arr[3][3], sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }
    printf("%d", sum / 9);
    return 0;
}