#include <stdio.h>
int main()
{
    int n;
    printf("please enter the number for divisor: \n");
    scanf("%d", &n);

    printf("Divisor is: ");
    for (int divisor = 1; divisor <= n; divisor++)
    {
        if ((n % divisor == 0))
        {
            printf(" %d ", divisor);
        }
    }

    return 0;
}