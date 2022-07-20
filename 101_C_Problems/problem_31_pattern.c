/*
write a program to print the following output
*
line break
***
line break
*****
line break
*******
*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("line break");
                break;
            }
            else
                printf("*");
        }

        printf("\n");
    }
    return 0;
}