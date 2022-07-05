#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// not complete program

int marks_summation(int *marks, int number_of_students, char gender)
{
    return ("%d", (*marks + 0) + (*marks + 1) + (*marks + 2) + (*marks + 3));
    printf("%c\n", gender);
    // printf("%d\n", *marks + 2);
    // printf("%d\n", *marks + 3);
}

int main()
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);

    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }
    scanf("%c", &gender);

    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
}