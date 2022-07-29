/*
write  a  function that takes two integers as input and prints their sum inside the function
*/

#include <stdio.h>
int sum_of_num()
{
    int a, b;
    printf("Enter two integer\n");
    scanf("%d %d", &a, &b);
    return (a + b);
}
int main()
{
    int total = sum_of_num();
    printf("%d", total);

    return 0;
}