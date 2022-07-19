/*
take two integer indicating the x and y coordinate of a two-dimensional graph paper where the center point is  x=0 and y=0. Now print the quadrant of the
*/

#include <stdio.h>
int main()
{

    int x, y;
    scanf("%d%d", &x, &y);
    if (x >= 0 && y >= 0)
        printf("1st Quadrant");
    else if (x < 0 && y >= 0)
        printf("2nd Quadrant");
    else if (x < 0 && y < 0)
        printf("3rd Quadrant");
    else
        printf("Fourth Quadrant");
    return 0;
}