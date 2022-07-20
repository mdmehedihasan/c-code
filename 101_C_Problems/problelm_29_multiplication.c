/*
Take an integer as input and print it's multiplication table up to 10. If user gives 5, Your out put should look like the following example-
5*1=5
5*2=10
5*3=15
----
5*10=50
*/

#include <stdio.h>
int main()
{
    int number, i;
    scanf("%d", &number);
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", number, i, number * i);
    }
    return 0;
}