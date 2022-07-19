/*
Take the value from user and assume that it is the number of his math exam.
Now you have to write a program which shows the grade depending on the given scales.
*/
#include <stdio.h>
int main()
{
    int math;
    scanf("%d", &math);

    if (math >= 80 && math <= 100)
    {
        printf("A+");
    }
    else if (math >= 70 && math < 80)
    {
        printf("A");
    }
    else if (math >= 50 && math < 60)
    {
        printf("B");
    }
    else if (math >= 40 && math < 50)
    {
        printf("C");
    }
    else if (math >= 33 && math < 40)
    {
        printf("D");
    }
    else if (math >= 0 && math < 33)
    {
        printf("F");
    }
    else
        printf("Please input the valid number");

    return 0;
}