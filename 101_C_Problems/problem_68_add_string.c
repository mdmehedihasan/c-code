/*
Take three different string as input from the user ("We","Love","Bangladesh"). Now concate these three string and print it We love Bangladesh
There is a leading space in "Love and Bangladesh"
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "We", b[20] = " Love", c[30] = " Bangladesh";
    int i, j = 0;
    // scanf("%s", a);
    // scanf("%s", b);
    // scanf("%s", c);
    strcat(a, b);
    strcat(a, c);
    printf("%s", a);

    return 0;
}