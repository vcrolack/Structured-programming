#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA;
    float floatA;
    char letterA;

    //Input values lines
    printf("Enter a value for integer A (It must be a integer number): ");
    scanf("%i", &integerA);

    printf("Enter a value for float A (It must be a float number): ");
    scanf("%f", &floatA);

    printf("Enter a value for letter A (It must be a character): ");
    scanf(" %c", &letterA);

    // In the next line, I printed my variable integerA.
    printf("The value of my integer A is: %i\n", integerA);
    printf("The value of my float A is: %f\n", floatA);
    printf("The value of my character is: %c\n", letterA);

    return 0;
}