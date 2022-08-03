/*
write a function that takes an integer as input and prints EVEN if the number is divisible by 2 otherwise prints ODD. Call this function from the main function
*/
#include <stdio.h>
int even_odd(int a)
{
    if (a % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("ODD");
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    even_odd(num);
    return 0;
}