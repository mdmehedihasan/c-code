/*
Write a program which takes a string of alphabet as input and replace all the character of it. All the alphabets of the input string will be small letter. [If user gives input "abc"you  should print "def" if user gives input "xyz" you should print "abc"]
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i;
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++)
    {

        if (str[i] >= 120 && str[i] <= 122)
        {
            printf("%c", str[i] - 23);
        }
        else
        {
            printf("%c", str[i] + 3);
        }
    }

    return 0;
}