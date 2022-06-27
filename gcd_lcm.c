#include <stdio.h>
int main()
{
    int a, b, num1, num2, temp, lcd, gcd;
    printf("Please enter first integer number:");
    scanf("%d", &a);
    printf("Please enter second integer number:");
    scanf("%d", &b);
    num1 = a;
    num2 = b;
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (a != 0)
    {
        if (b == 0)
        {
            break;
        }
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    gcd = a;

    lcd = (num1 * num2) / gcd;
    printf("GCD is %d \n", gcd);
    printf("LCD is %d", lcd);

    return 0;
}