#include <stdio.h>

int main()
{
    float note;

    printf("Ingresa una nota: ");
    scanf("%f", &note);

    if(note < 60)
    {
        printf("You are failing!");
    }

    else if( (note > 60) && (note < 90))
    {
        printf("You pass!");
    }

    else if(note > 90)
    {
        printf("Congrats! You pass :)");
    }

    return 0;
}