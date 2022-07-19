#include <stdio.h>
int main()
{

    // first problem
    int a = 5;
    // printf("%d %d %d %d", ++a, a++, a, ++a);
    // printf("%d %d %d %d", --a, a--, a, --a);

    // second problem
    // int x = 10;
    // printf("%d %d %d %d %d %d %d %d", x--, --x, x, ++x, x--, x++, ++x, x);

    // 3rd problem
    int x = 10;
    int y = ++x;
    printf("%d %d %d %d %d %d", ++x, ++y, y, y++, x++, ++x);

    return 0;
}