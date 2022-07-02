#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    int result;
    int faka = 0;

    if (n / 100)
    {
        result = n / 100;
        printf("%d nota(s) de R$ 100,00\n", result);
        n = n % 100;
    }
    else
    {
        printf("%d nota(s) de R$ 100,00\n", faka);
    }

    if (n / 50)
    {
        result = n / 50;
        printf("%d nota(s) de R$ 50,00\n", result);
        n = n % 50;
    }
    else
    {
        printf("%d nota(s) de R$ 50,00\n", faka);
    }

    if (n / 20)
    {
        result = n / 20;
        printf("%d nota(s) de R$ 20,00\n", result);
        n = n % 20;
    }
    else
    {
        printf("%d nota(s) de R$ 20,00\n", faka);
    }

    if (n / 10)
    {
        result = n / 10;
        printf("%d nota(s) de R$ 10,00\n", result);
        n = n % 10;
    }
    else
    {
        printf("%d nota(s) de R$ 10,00\n", faka);
    }

    if (n / 5)
    {
        result = n / 5;
        printf("%d nota(s) de R$ 5,00\n", result);
        n = n % 5;
    }
    else
    {
        printf("%d nota(s) de R$ 5,00\n", faka);
    }

    if (n / 2)
    {
        result = n / 2;
        printf("%d nota(s) de R$ 2,00\n", result);
        n = n % 2;
    }
    else
    {
        printf("%d nota(s) de R$ 2,00\n", faka);
    }

    if (n / 1)
    {
        result = n / 1;
        printf("%d nota(s) de R$ 1,00\n", result);
        n = n % 1;
    }
    else
    {
        printf("%d nota(s) de R$ 1,00\n", faka);
    }
    return 0;
}