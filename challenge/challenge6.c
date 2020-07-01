#include <stdio.h>

int main()
{
    int userValue;
    const int THENUMBER = 5;

    printf("---G U E S S  T H E  N U M B E R---\n");

    printf("Enter a integer number in a renge of 0 to 10: ");
    scanf("%i", &userValue);

    if(userValue == THENUMBER)
    {
        printf("Congrats! U'r very lucky\n");
    }

    else if(userValue != THENUMBER)
    {
        printf("I give u one try more: ");
        scanf("%i", &userValue);
        if(userValue == THENUMBER)
        {
            printf("Congrats! U'r very lucky\n");
        }
            else
            {
                printf("U lose");
            }
    }
    return 0;
}