/*
write a function named findMax(). It takes three parameters and retun the maximum value among the three parameters. Call this function from the main function.
*/

#include <stdio.h>

int findMax(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
        return c;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int res = findMax(a, b, c);
    printf("max number is: %d", res);

    return 0;
}