/*
Take four double variables x,y,z and avg. Assign values to x,y and z as you want. Now calculate the average of x,y and z and assign it to avg. finally print the average like-
Average of x,y and z is:--
*/
#include <stdio.h>
int main()
{
    double x = 200, y = 13.23, z = 43.34, avg;
    avg = (x + y + z) / 3;
    printf("Average of x,y and z is:%lf", avg);
    return 0;
}