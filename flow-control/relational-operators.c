#include <stdio.h>


int main()
{
    printf("-----Relational operators------\n");

    float valA, valB;

    valA = 5;
    valB = 10;

    if(valA < valB)
    {
        printf("Question 1: True\n");
    }
    else
    {
        printf("Question 1: False\n");
    }

    if(valA > valB)
    {
        printf("Question 2: True\n");
    }
    else
    {
        printf("Question 2: False\n");
    }

    if(valA  >= valB)
    {
        printf("Question 3: True\n");
    }
    else
    {
        printf("Question 3: False\n");
    }

    if(valA <= valB)
    {
        printf("Question 4: True\n");
    }
    else
    {
        printf("Question 4: False\n");
    }

    if(valA != valB)
    {
        printf("Question 5: True\n");
    }
    else
    {
        printf("Question 5: False\n");
    }

    if(valA == valB)
    {
        printf("Question 6: True\n");
    }
    else
    {
        printf("Question 6: False");
    }

    return 0;
    
}