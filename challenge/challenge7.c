#include <stdio.h>

int main()
{
    int userValue1, userValue2;

    printf("Please, enter a integer number: ");
    scanf("%i",&userValue1);

    printf("Repeat. Please, enter a integer number: ");
    scanf("%i", &userValue2);

    if(userValue1 < userValue2)
    {
        printf("%i", userValue1);
    }

    else
    {
        printf("%i", userValue2);
    }

    return 0;
}