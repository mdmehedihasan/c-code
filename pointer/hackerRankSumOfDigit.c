#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    printf("%d", sum);

    return 0;
}