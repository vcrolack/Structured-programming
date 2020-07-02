#include <stdio.h>

int main()
{
    printf("----WHILE LOOP----\n");

    int limit;
    int i = 1;
    printf("Enter a number: ");
    scanf("%i", &limit);

    while(i <= limit)
    {
        printf("Number = %i\n", i);
        i++;
    }
}