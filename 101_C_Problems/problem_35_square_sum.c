/*
print the summation of squares of all numbers from 5 to 25
*/

#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 5; i <= 25; i++)
    {
        sum = sum + (i * i);
    }
    printf("%d", sum);

    return 0;
}