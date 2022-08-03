/*
suppose you are going to make a simple calculator. Your task is to prepare four functions-add(),subtract(),multiply() and divide(). Each function takes two parameters and return the value after applying the corresponding action on those parameters.
*/
#include <stdio.h>
int add(int a, int b)
{
    int total;
    total = a + b;
    return total;
}

int substract(int a, int b)
{
    int total;
    total = a - b;
    return total;
}
int multiply(int a, int b)
{
    int total;
    total = a * b;
    return total;
}

int divide(int a, int b)
{
    int total;
    total = a / b;
    return total;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("addion is:%d\n", add(a, b));
    printf("substraction is:%d\n", substract(a, b));
    printf("multiplication is:%d\n", multiply(a, b));
    printf("division is:%d\n", divide(a, b));

    return 0;
}