/*
take four integer variables a,b,x and y. Scan the values of the variables from user using scanf(). Now print the output of the following equation:
(a*b)+(x*y)
*/

#include <stdio.h>
int main()
{

    int a, b, x, y;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    printf("\n%d", (a * b) + (x * y));
    return 0;
}