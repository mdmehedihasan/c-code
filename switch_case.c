#include <stdio.h>

int main()
{
    char ch = 'a';
    switch (ch)
    {
    case 'a':
        printf("value is:a\n");
        break;
    case 'b':
        printf("value is : b\n");
    default:
        printf("Unknown or ");
    }

    return 0;
}