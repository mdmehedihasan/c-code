#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void update(int *a, int *b) // receive the address of a and b
{
    int x = *a;      // store the a addresses value in x
    int y = *b;      // store the b addresses value in y
    *a = x + y;      // store the addition in a pointer
    *b = abs(x - y); // store the substraction in  b pointer
}
int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);         // passing the address of a and b
    printf("%d\n%d", a, b); //

    return 0;
}