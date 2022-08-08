/*
write a function which calculates the area of Bangladesh National Flag. The function takes only the length of the flag as parameter and returns the area of the flag.[Ration of length and width is length: Width=10:6]
*/
#include <stdio.h>
float area_of_flag(float given_length)
{
    float fixed_width = 6, fixed_length = 10, result;
    float length_for_one = 6.0 / 10.0;
    float width = length_for_one * given_length;
    return (width * given_length);
}

int main()
{
    float insert_length, res;
    scanf("%f", &insert_length);
    res = area_of_flag(insert_length);
    printf("%.2f", res);

    return 0;
}