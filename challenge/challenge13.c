#include <stdio.h>

int main()
{
    printf("A R R A Y S  M U L T I P L I C A T O R\n");
    
    int result;
    int numbers[5];
    
    for(int i = 0; i < 5; i++)
    {
        printf("Enter a integer number, please: ");
        scanf("%i", &numbers[i]);
    }

    result = numbers[0] * numbers[1] * numbers[2] * numbers[3] * numbers[4];
    printf("The result is: %i", result);

    return 0;
}