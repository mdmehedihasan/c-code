/*
You are given the radius of a circle, r=5.5 We know that pi=3.1416. Now write a program to calculate the area of the given circle and print it up to 2 digit after the decimal point.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float r = 5.5;
    printf("%.2f", M_PI * r * r);
    return 0;
}