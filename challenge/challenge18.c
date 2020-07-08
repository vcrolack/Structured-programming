#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Powers(int a, int b)
{
    return pow(a, b);
}



int main()
{
    printf(" ---- P O W E R S ---- \n");

    int base, exponent, result;


    printf("Enter a base: ");
    scanf("%i", &base);

    printf("Enter a exponent: ");
    scanf("%i", &exponent);

    result = Powers(base, exponent);
    
    printf("The result is %i\n", result);

    return 0;

}