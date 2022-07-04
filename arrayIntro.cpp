#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int ar[3] = {4, 8, 9};
    printf("%d\n", &ar[0]); // first index address
    printf("%d\n", ar);     // value of ar array is the address of first index
    printf("%d\n", *(ar + 1));
    return 0;
}