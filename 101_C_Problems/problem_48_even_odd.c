/*
TAKE AN array of integer data type of size 5. Scan the valuees from the user. Now print the output like the following one-
Values in array:10 25 25 15 30
Sum of Odd values:65
Sum of even values:40
*/
#include <stdio.h>
int main()
{
    int num[5], oddSum = 0, i, evenSum = 0;
    printf("Values in array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            evenSum = evenSum + num[i];
        }
        else
        {
            oddSum = oddSum + num[i];
        }
    }
    printf("Sum of Odd values:%d\nSum of even values:%d", oddSum, evenSum);

    return 0;
}