/*
Take an integer number as an input from the user and print "Yes" if the number is divisible by 3 and 5 and print "No" if the number is not
*/

#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}