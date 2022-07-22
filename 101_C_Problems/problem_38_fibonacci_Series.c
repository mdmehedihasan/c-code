/*
Write a program which will take an integer N as input from user and print
*/
#include <stdio.h>

int main()
{
    int first = 0, second = 1, temp;
    while (1)
    {
        printf("%d\n", first);
        temp = first;
        first = second;         // 1
        second = second + temp; // 1
        if (first >= 15)
        {
            return 0;
        }
    }
}

// for (int i = 1; i <= 8; i++)
// {
//     printf("%d\n", first);
//     temp = first;
//     first = second;         // 1
//     second = second + temp; // 1
//     if (first >= 10)
//     {
//         return 0;
//     }
// }
