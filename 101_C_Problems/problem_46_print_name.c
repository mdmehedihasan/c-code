/*
Get your name from keyboard and print it with greeting like-
Hello Mr. "Your Name"
*/

#include <stdio.h>
int main()
{
    char name[20];
    scanf("%s", &name);
    // gets(name);
    printf("Hello Mr.%s", name);
    return 0;
}