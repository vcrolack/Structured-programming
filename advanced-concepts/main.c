#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

int main()
{
    printf("Libreries\n");

    float firstValue = 10;
    float secondValue = 15;
    float result;
    int option;

    printf("I'm a calculator.\n");
    printf("What do you want?\n");
    printf("1. Addition\n2. Sustraction\n3. Multiplication\n4. Division\n");
    
    scanf("%i", &option);

    switch(option)
    {
        case 1:
            result = addition(firstValue, secondValue);
            break;

        case 2:
            result = sustraction(firstValue, secondValue);
            break;
        
        case 3:
            result = multiplication(firstValue, secondValue);
            break;
        
        case 4:
            result = division(firstValue, secondValue);
            break;
    }

    printf("The operation's result is: %f", result);

    for(;;){
        printf("d");
    }
    return 0;
}

