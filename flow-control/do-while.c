#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----D O  W H I L E----\n");

    char answer = 'q';
    char value;

    do
    {
        printf("Ingresa una letra: ");
        scanf(" %c", &value);

    } while (value != answer);
    
    printf("Coincide las letras %c == %c", value, answer);
    return 0;
}