#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("---G U E S S  T H E  N U M B E R---\n");
    int userValue;
    srand(time(NULL));
    int number = rand() % 11;

    printf("Enter a integer number in a range of 0 to 10: ");
    scanf("%i", &userValue);

    if(userValue == number)
    {
        printf("Congrats! U guessed the number!\n");
    }

    else if (userValue != number)
    {
        printf("U wrong! I give u one try more: ");
        scanf("%i", &userValue);

        if(userValue == number)
        {
            printf("Congrats! U guessed the number!\n");
        } 
        else
        {
            printf("U lose!");
        }
    }
    return 0;
}