#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[50];
float calification, result;

float pass(float note)
{
    if(calification > 7.0)
    {
        return 1.0;
    }

    else
    {
        return 2.0;
    }
}


int main()
{
    printf("Ur pass or not\n");

    printf("Enter your name, please: ");
    fgets(name, 50, stdin);

    printf("Name: ");
    puts(name);

    printf("Please, enter your final calification: ");
    scanf("%f", &calification);

    result = pass(calification);

    if(result == 1)
    {
        printf("Congrats, %s pass!\n", name);
    }

    else if(result == 2)
    {
        printf("BIG F for you, %s.\n", name);
    }

    return 0;


}