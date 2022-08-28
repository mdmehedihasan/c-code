/*
take a word from user and print the word in reverse order. [if the user gives "BANGLADESH" your program should print HSEDALGNAB]
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int len, i;
    char a[15];
    scanf("%s", &a);
    //   printf("%s", a);
    len = strlen(a);
    // printf("%d", len);
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }

    return 0;
}