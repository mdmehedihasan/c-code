#include <stdio.h>
#include <math.h>
// not complete
int main()
{
    int i, t, num, p, count = 0;
    printf("Please enter number:\n");
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &num);
        p = 0;
        for (i = 2; i < sqrt(num); i++)
        {

            if (num % i == 0)
            {
                p++;
                printf("Not prime \n");
                break;
            }
            else
            {
                printf("Prime ");
                break;
            }
        }
    }
    return 0;
}