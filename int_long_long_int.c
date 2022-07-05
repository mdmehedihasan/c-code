#include <stdio.h>
int main()
{
    int a;
    int b;
    a = 2147483647;
    b = 2147483648;
    long long int c = 2147483648;
    printf("%d\n", a);
    printf("%d\n", b);   // limit exit for int
    printf("%lld\n", c); // long long int

    return 0;
}