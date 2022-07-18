/*
Rahul got 65.00 on physics, 83.50 on mathematics,85.75 on c programming and 67.50 on English. Now write a program to calculate the average of his marks on 4 subjects and print it up to 2 digit after the decimal point.
*/
#include <stdio.h>
int main()
{
    double physics = 65.00, mathematics = 83.50, c_programming = 85.75, english = 67.50, marks;
    marks = (physics + mathematics + c_programming + english) / 4;
    printf("%.2lf", marks);
    return 0;
}