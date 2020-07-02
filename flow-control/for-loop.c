#include <stdio.h>

int main()
{
    printf("-----For loop-----\n");

    int upperLim, bottomLim;

    printf("Print in desecendant order\n");


    printf("Enter upper limit: ");
    scanf("%i", &upperLim);

    printf("Enter bottom limit: ");
    scanf("%i", &bottomLim);

    for(int i = upperLim; i >= bottomLim; i--)
    {
        printf("Number is %i\n", i);
    }

    return 0;

}