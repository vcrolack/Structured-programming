#include <stdio.h>

int main()
{
    printf("-----If-else condition-----\n");

    float valA, valB, valC;
    valA = 50;
    valB = 100;
    valC =150;

    printf("Condition: \n");
    
    if(valA == valB)
        printf("This condition is false.");
    else if(valB == valC)
        printf("Neither");
    else
    {
        printf("No conditions were met");
    }
    

    return 0;
}