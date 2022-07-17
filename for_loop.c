#include <stdio.h>
int main()
{
    for (int i = 100; i >= 0; i = i - 10)
        printf("%d\n", i); // 5
    return 0;
}