/*
Say you are given the following array of integer data type [-99,45,100,37,89,-3327,245] find out the larger number.
*/
#include <stdio.h>
int main()
{

    int arr[7] = {-99, 45, 100, 37, 89, -327, 245}, i;
    int max = arr[0];

    for (i = 0; i < 7; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d", max);

    return 0;
}