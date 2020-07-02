#include <stdio.h>

int main()
{
    printf("----Logic operatos----\n");

    float valA, valB, valC;

    valA = 5;
    valB = valC = 10;

    if((valA < valB) && (valB == valC))
    {
        printf("The both conditions are true.\n");
    }
    else
    {
        printf("The both conditions not met.\n");
    }


        if((valA > valB) || (valA <= valC))
    {
        printf("At least one condition\n");
    }
    else
    {
        printf("The both conditions not met.\n");
    }
    
    return 0;
}