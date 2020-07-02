#include <stdio.h>

int main()
{
    printf("----M A K E  Y O U R  H I S T O R Y----");

    int option;

    printf("U r in ur castle with ur wife. U r the king and your army captured ");
    printf("Gerriot, ur traitor brother. What do u want do?\nEnter a option: ");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        printf("\nExecute ur brother and save your wife and ur kingdom.");
        break;
    
    case 2:
        printf("\nForgive him, but later he kill ur wife and starts a rebelion.");
        break;

    case 3:
        printf("\nExile him, but years later, he makes yourself his kingdom more powerful and he destroys you.");
        break;
    default:
        printf("\nEnter a valid option, please");
        break;
    }
    return 0;
}