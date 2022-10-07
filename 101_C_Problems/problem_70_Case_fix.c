/*
You are given a string mixed with uppercase and lowercase letters. Your tast is to write a program which will flip the letters (upperCase->Lowercase, LowerCase->UpperCase)
example- input: output
eLepHant Elephant
cAt Cat
SuNDay Sunday
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i;
    scanf("%s", str);
    if (str[0] >= 97 && str[0] <= 122)
    {
        printf("%c", str[0] - 32);
    }
    else
        printf("%c", str[0]);

    for (i = 1; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            printf("%c", str[i] + 32);
        }
        else
            printf("%c", str[i]);
    }
    return 0;
}