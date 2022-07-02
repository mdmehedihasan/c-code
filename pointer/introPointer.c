#include <stdio.h>
int main()
{
    /*
    1 byte = 8 bits
    int takes 4 byte
    char takes 1 byte
    */
    int a = 10;
    int *pa;
    pa = &a;

    printf("value: %d \n", a);    // print value of a
    printf("address: %d \n", &a); // print address of a
    printf("value: %d \n", *&a);  // print value of a
    printf("address:%d\n", pa);   // print address of a
    printf("value:%d\n", *pa);    // print value of a
    return 0;
}