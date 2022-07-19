/*
Suppose you are going to apply for admission in a college. If you got GPA 5 in SSC exam then you can apply for that college. Now give your GPA as input from the keyboard and print “YES” if you can apply otherwise print “NO”.
*/
#include <stdio.h>
int main()
{
    int gpa;
    scanf("%d", &gpa);
    if (gpa == 5)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}