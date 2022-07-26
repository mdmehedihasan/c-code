/*
Take an array of integer data type of size 10. Get input from user and store the values in the array and finally print the sum of those 10 integers.
*/
#include <stdio.h>
int main()
{
    int array[10], i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }

    printf("%d", sum);

    return 0;
}