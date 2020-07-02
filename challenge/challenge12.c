#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("---- T H E  F I R S T  H U N D R E D  N U M B E R S ----\n");

    int num1 = 0;

    do
    {
        num1++;
        printf("%i\n", num1);
    }while(num1 < 100);

    return 0;
}