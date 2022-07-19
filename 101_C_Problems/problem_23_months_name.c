/*
write a program that takes an integer as input [1-12] and print the corresponding month name.
*/
#include <stdio.h>
int main()
{
    int month;
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    default:
        printf("Please enter the number between 1 to 12");
        break;
    }

    return 0;
}