// prime number 1 to N   2 3 5 7 11 13 17 19
#include <stdio.h>
int main()
{
    int i, j, num, count = 0;
    printf("Please enter number:\n");
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                count = 4; // any number we can assume
        }
        if (count == 0)
            printf("%d 20", i);
        count = 0;
    }
    return 0;
}