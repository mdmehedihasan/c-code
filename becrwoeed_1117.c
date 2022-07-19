#include <stdio.h>
int main()
{

    float a, sum;
    int count = 0;

    while (count != 2)
    {
        scanf("%f", &a);
        if (a >= 0 && a <= 10)
        {
            sum = sum + a;
            count++;
        }
        else
            printf("nota invalida\n");
        continue;
    }

    printf("media = %.2f\n", sum / 2);

    return 0;
}