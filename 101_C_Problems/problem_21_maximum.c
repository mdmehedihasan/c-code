/**
 * take 3 integer from user using scanf() function and write a program to find the maximum one.
 */
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("maximum is: %d", a);
    }

    else if (b > a && b > c)
    {
        printf("maximum is: %d", b);
    }

    else
    {
        printf("maximum is: %d", c);
    }
    return 0;
}