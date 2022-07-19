/*
You are given the rank and salary scale of a company
*/

#include <stdio.h>
int main()
{
    int rank;
    scanf("%d", &rank);
    if (rank == 1)
    {
        printf("Your Salary is: 250,000 BDT");
    }
    else if (rank == 2)
    {
        printf("Your Salary is: 210,000 BDT");
    }
    else if (rank == 3)
    {
        printf("Your Salary is: 150,000 BDT");
    }
    else if (rank == 4)
    {
        printf("Your Salary is: 80,000 BDT");
    }
    else if (rank >= 5)
    {
        printf("Your Salary is: 50,000 BDT");
    }

    return 0;
}