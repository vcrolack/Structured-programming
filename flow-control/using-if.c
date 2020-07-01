#include <stdio.h>


int main()
{
    printf("*****-----If condition-----****\n");

    float valA, valB, valC;

    valA = valB = 100;

    printf("-----First condition------\n");
    if(valA == valB)
        printf("The both values'r same\n");

    printf("-----Second condition-----\n");
    if(valA == valB)
    {
        printf("The both values'r same\n");
        valC = valA + valB;
        printf("Also, the sum's result is: %f\n", valC);
    }


    return 0;
}