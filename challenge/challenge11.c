#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("---- F I B O N A C C I  S E Q U E N C E ----\n");

    int returnNumber, summer;
    int num1 = 1;
    int num2 = 0;

    printf("Please, enter a integer number: ");
    scanf("%i", &returnNumber);

    printf("%i\n%i\n", num2, num1); 

    for(int i = 0; i < returnNumber; i++)
    {
        summer = num1 + num2;
        num2 = num1;
        num1 = summer;
        printf("%i\n", summer);
    }

    return 0;
}