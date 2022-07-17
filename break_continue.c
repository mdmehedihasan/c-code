#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 2)
            break; // continue 1,3,4,5
        printf("%d\n", i);
    }
    return 0;
}