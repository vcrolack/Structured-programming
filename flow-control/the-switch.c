#include <stdio.h>

int main()
{
    printf("----SWITCH-----\n");

    int option;

    scanf("%i", &option);

    switch (option)
    {
    case 1:
        printf("You choiced number one\n");
        break;

    case 2:
        printf("You choiced number two\n");
        break;
    
    case 3:
        printf("You choiced number three\n");
        break;

    default:
        printf("WTF!\n");
        break;
    }
    return 0;
}