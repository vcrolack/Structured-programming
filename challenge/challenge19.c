#include <stdio.h>
#include <stdlib.h>

float clpToUsd(float money)
{
    return money * 0.0013;
}

float UsdToClp( float money)
{
    return money * 799.4;
}




int main()
{
    printf(" --- C U R R E N C Y  C O N V E R T E R --- \n");

    int option;
    float clp, usd, result;

    printf("Enter a option, please:\n1. Change clp to usd\n2. Change usd to clp: ");
    scanf("%i", &option);

    while((option != 1) && (option != 2)) //Validate the option
    {
        printf("You entered a wrong option. Try again: ");
        scanf("%i", &option);
    }

    if(option == 1)
    {
        printf("Enter your total currency, please: ");
        scanf("%f", &clp);
        result = clpToUsd(clp);
        printf("Your money has a value: %f usd", result);
    }

    else if(option == 2)
    {
        printf("Enter your total currency, please: ");
        scanf("%f", &usd);
        result = UsdToClp(usd);
        printf("Your money has a value: %f", result);
    }

    return 0;
}
