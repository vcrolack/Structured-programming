/* Challenge 1
-> Create two variables
-> Enter and save the valuo of both variables
-> Exchange the value of the variables with help of a auxiliar variable
-> Print the variable's value already exchanged*/

#include <stdio.h>

int main()
{
    int x, y, aux;

    printf("Please, enter a integer number for X: ");
    scanf ("%i", &x);

    printf("Please, enter a integer number for Y: ");
    scanf("%i", &y);

    aux = x;
    x = y;
    y = aux;

    printf("The value of X is: %i\n", x);
    printf("The value of Y is: %i", y);

    return 0;
}