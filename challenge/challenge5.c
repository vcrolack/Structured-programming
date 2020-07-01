/*
-> Enter a integer number
-> Using assignment operators, makes module operation
whit the number enter and five.
-> Print result incremented in one.
*/

#include <stdio.h>

int main()
{
    int number;
    printf("Please, enter a integer number: ");
    scanf("%i", &number);

    number %= 5;
    ++number;

    printf("The value is: %i", number);

    return 0;
}