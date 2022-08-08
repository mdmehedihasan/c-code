
/*
write a function named toUpperCase() which takes a small letter alphabet as input and return the capital version. If user gives 'a' as parameter the function  will return 'A'
*/
#include <stdio.h>
char toUpperCase(char givenChar)
{
    return (givenChar - 32);
}

int main()
{
    char ch;
    scanf("%c", &ch);
    char res = toUpperCase(ch);
    printf("%c", res);

    return 0;
}