/*
Write a program which will take a sentence as input and tell us how many words are there. [if user gives input "I love Bangladesh" then the output should be : 3 ]
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char inp[1000];
    int i, count = 1;

    gets(inp);

    for (i = 0; i < strlen(inp); i++)
    {
        if (inp[i] == ' ')
        {
            count = count + 1;
            continue;
        }
    }
    printf("%d", count);

    return 0;
}