/*
-> Enter a temperature in fahrenheit.
-> Makes the operation to convert fahrenheit to celcius.
-> Print the result.
*/

#include <stdio.h>

int main()
{
    float tempF, tempC;
    printf("----------Conversor of conversor----------\n");

    printf("Please, enter a temperature in fahrenheit: ");
    scanf("%f", &tempF);

    tempC = (tempF - 32) * 5/9;

    printf("The conversor's result is: %f °C", tempC);

    return 0;
}