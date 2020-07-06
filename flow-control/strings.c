#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Strings\n");

    char nameC[50];

    int size;

    printf("Enter the name whit gets: \n");

    fgets(nameC, 50, stdin);

    printf("The name is: ");
    puts(nameC);

    size = strlen(nameC);
    printf("\n The string's size is %i\n", size);

    return 0;
}