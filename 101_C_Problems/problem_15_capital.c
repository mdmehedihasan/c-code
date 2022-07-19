/*
Take a small letter alphabet as input from the user and print the capital version of that letter
*/
#include <stdio.h>
int main()
{
    char letter;
    scanf("%c", &letter);
    printf("%c\n", letter - 32);

    return 0;
}