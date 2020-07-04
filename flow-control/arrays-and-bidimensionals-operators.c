#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Arrays and iterators\n");

    int integer[11];

    for(int i = 0; i <= 11; i++)
    {
        integer[i] = i * i;
        printf("Value is (%i): %i\n", i, integer[i]);
    }


    return 0;
}