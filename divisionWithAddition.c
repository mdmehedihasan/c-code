#include <stdio.h>
int main()
{
    int num = 211;
    int divisor = 3;
    int new_num = num;
    int result = 0;

    while (new_num >= divisor)
    {
        new_num = new_num - divisor;
        result = result + 1;
    }

    printf("The result of division is %d \n", result);

    if (new_num != 0)
    {
        printf("The remainder is %d", new_num);
    }

    return 0;
}