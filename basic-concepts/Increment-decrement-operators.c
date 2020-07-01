#include <stdio.h>

int main()
{
    printf("----------Assignment operators----------\n");

    int value;

    value = 11;
    printf("Value is %i\n", value);

    value += 1;
    printf("Value is %i\n", value);

    value -= 2;
    printf("Value is %i\n", value);

    value *= 5;
    printf("Value is %i\n", value);

    value /= 4;
    printf("Value is %i\n", value);

    value %= 6;
    printf("Value is %i\n", value);

    return 0;
}