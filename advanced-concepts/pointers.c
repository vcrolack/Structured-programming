#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pointers\n");

    float val;

    float *apVal;

    apVal = &val;

    *apVal = 3.1416;

    printf("Value of val is: %f", val);


    return 0;
}