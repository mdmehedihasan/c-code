/*
Take two integer variables i=0 and j=0 now write the output of the following program without running the code
*/
#include <stdio.h>
int main()
{

    int i = 0;
    int j = 0;
    j = i++ + ++i;
    printf("%d %d", i, j);

    return 0;
}