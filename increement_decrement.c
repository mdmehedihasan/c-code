#include <stdio.h>
int main()
{
    int a = 8;
    a++;
    printf("value of a is :%d\n", a); // 9
    ++a;
    printf("value of a is :%d\n", a); // 10
    --a;
    printf("value of a is :%d\n", a); // 9
    a--;
    printf("value of a is :%d\n", a); // 8

    /*twisting is start*/
    printf("Twisting part stated\n");
    int x = 5;
    printf("value of x is :%d\n", x++); // 5 then 6
    printf("value of x is :%d\n", ++x); // 7 then 7
    printf("value of x is :%d\n", x++); // 7 then 8
    printf("value of x is :%d\n", x);   // 8
    x = 5;
    printf("value of x is :%d\n", x--); // 5 then4
    printf("value of x is :%d\n", --x); // 3 then 3
    printf("value of x is :%d\n", x--); // 3 then 2
    printf("value of x is :%d\n", x);   // 2

    return 0;
}