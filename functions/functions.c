#include <stdio.h>
#include <stdlib.h>

int Addition(int a, int b)
{
    int result = a + b;

    return result;
}





int main()
{
     printf("Functions\n");

    int additionRes = Addition(3, 4);

    printf("The result is: %i\n", additionRes);

     return 0;
}