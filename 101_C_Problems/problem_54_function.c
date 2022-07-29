/*
write a function that simply prints a message "Hello!! I am from inside of a function". Call this function from the main function
*/
#include <stdio.h>
void message()
{
    printf("Hello!! I am from inside of a function");
}
int main()
{
    message();

    return 0;
}