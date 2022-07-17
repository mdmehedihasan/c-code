/*write a for loop which will print summation of all the numbers which are divided by 3 and 5 between 30 to 120*/
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 30; i <= 120; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum = sum + i;
        }
        }
    printf("%d", sum);
    return 0;
}