/*
write a currency converter function named dollarToBD(). It takes us dollar as input in a float variable and return the amount of Bangladeshi Taka. 1 usd =78,05
*/

#include <stdio.h>
float dollarToBD(float dollar)
{
    float taka;
    taka = 78.55 * dollar;
    return taka;
}
int main()
{
    float dollar;
    scanf("%f", &dollar);
    float totalTaka = dollarToBD(dollar);
    printf("Total Taka is : %.3f", totalTaka);
    return 0;
}