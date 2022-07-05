#include <stdio.h>
#include <limits.h>
int main()
{
    float a;
    double b = 3;
    double c = 4;
    double d = b * c;
    printf("the value of double is: %0.3lf\n", d);
    a = 4 / 3;
    printf("Value of a is: %f\n", a);
    printf("The size of float is:%d\n", sizeof(float));
    printf("The size of float is:%d\n", sizeof(double));
    return 0;
}