#include <stdio.h>
#include <limits.h>
int main()
{

    printf("The int size is: %d\n", sizeof(int));
    printf("The MIN value of INT is:%d\n", INT_MIN);
    printf("The MAX value of INT is:%d\n", INT_MAX);
    // depens on limits.h
    printf("The int size is: %lld\n", sizeof(long long int));
    printf("The MIN value of long long INT is:%lld\n", LONG_LONG_MIN);
    printf("The MAX value of long long INT is:%lld\n", LONG_LONG_MAX);

    return 0;
}