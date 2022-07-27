/*
Take an array of integer data type of size of 5. Scan the values from the user. now print the average of integers which are greater than 100
*/

#include <stdio.h>
int main()
{
    int i, num[5], sum = 0, divisor = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > 100)
        {
            sum = sum + num[i];
            divisor = divisor + 1;
        }
    }
    printf("Average is: %d", sum / divisor);

    return 0;
}