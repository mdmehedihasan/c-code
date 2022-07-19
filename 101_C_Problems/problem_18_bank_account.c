/*
You are going to open a bank account. If your age is greater than 18 then you can open an account. Get your age by input and print"Yess" if you are eligible otherwise Print No
*/
#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Yes");
    }
    else
        printf("NO");

    return 0;
}