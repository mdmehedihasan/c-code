/*
write a function that takes an integer as input and prints all of its divisors. Call this function from the main function.
*/
#include <stdio.h>
void divisor(int a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    divisor(num);
    return 0;
}