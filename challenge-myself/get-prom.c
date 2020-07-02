#include <stdio.h>

int main()
{
    float note1, note2, note3, note4, prom;

    printf("Enter your first note: ");
    scanf("%f", &note1);

    printf("Enter your second note: ");
    scanf("%f", &note2);

    printf("Enter your third note: ");
    scanf("%f", &note3);

    printf("Enter your fourth note: ");
    scanf("%f", &note4);

    prom = (note1 + note2 + note3 +note4) / 4;

    if(prom < 4.0)
    {
        printf("You failing with %f", prom);
    }

    else if((prom >= 4.0) && (prom < 7.0))
    {
        printf("You pass with %f", prom);
    }

    else if(prom >= 7.0)
    {
        printf("Congrats! You pass :) with %f", prom);
    }

    return 0;

}