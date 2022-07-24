/*
find summation and average of all the numbers which are completely divisible by 3,5,and 12 between 10 to 500.
*/
#include <stdio.h>
int main()
{
    int i, count = 0, sum = 0, avg;
    for (i = 10; i <= 500; i++)
    {
        if (i % 3 == 0 && i % 5 == 0 && i % 12 == 0)
        {
            sum = sum + i;
            count++;
        }
    }
    printf("summation: %d , average: %d", sum, sum / count);

    return 0;
}