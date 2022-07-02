#include <stdio.h>
#define AGE(a, b) a *b
int main()
{
    // int a = age;
    /*
    macro is a segment of code whcih is replace the name of macro to value of macro.
    A macro is a fragment of code that is given a name. You can define a macro in C using the #define preprocessor directive.
    */
    printf("%d", AGE(5, 7));
    return 0;
}