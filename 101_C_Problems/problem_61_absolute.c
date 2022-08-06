/*
write a function that takes any real number and return its absolute value. If user gives -5 as parameter the function will return 5
*/

#include <stdio.h>

float absolute_value(float num)
{
    if (num < 0)
    {
        return (num * (-1));
    }
    else
        return num;
}
int main()
{
    float number;
    scanf("%f", &number);
    float finalResult = absolute_value(number);
    printf("The final absolute value is: %.2f", finalResult);

    return 0;
}