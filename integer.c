#include <stdio.h>
#include <limits.h>
int main()
{
    printf(" minimum value is: %d\n"
           "maximub value is: %d\n"
           "size of int in bytes=%zu\n"
           "size of int in bits=%zu",

           INT_MIN, INT_MAX, sizeof(int),
           sizeof(int) * CHAR_BIT

    );

    return 0;
}