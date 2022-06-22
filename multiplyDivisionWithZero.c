#include <stdio.h>
int main()
{
    int a = 10;
    int b = 0;
    // multiply with Zero
    printf("%d x %d = %d \n", a, b, a * b);

    // division with zero than is not possible
    if (b == 0)
    {
        printf("Divisor is Zero");
    }

    return 0;
}