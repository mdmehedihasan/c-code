#include <stdio.h>
int main()
{
    int a, b, c;
    float average;
    printf("Enter three integer value:");
    scanf("%d %d %d", &a, &b, &c);
    average = (a + b + c) / 3;
    printf("Value of a:%d\n", a);
    printf("Value of b:%d\n", b);
    printf("Value of c:%d\n", c);
    printf("Average of a,b and c:%0.2f\n", average);

    return 0;
}