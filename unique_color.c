#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a != b && a != c)
    {
        printf("3 color");
    }
    else if (a == b && a == c)
        printf("1 color");
    else if (a == b && a != c)
        printf("2 color");
    else if (a != b && a == c)
        printf("2 color");
    else if (a != b && b == c)
        printf("2 color");
    return 0;
}