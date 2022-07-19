/*
Take temporary of Dhaka City as input in celcius scale from the user scanf() and convert it to Fahrenheit.
formula: F=c(9/5)+32
*/
#include <stdio.h>
int main()
{

    float celcius;
    scanf("%f", &celcius);
    printf("\nFahrenheit is: %.3f", celcius * (9.0 / 5.0) + 32);

    return 0;
}