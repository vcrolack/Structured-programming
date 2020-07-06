#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[50];
    int size;

    printf("Enter a string, please: ");
    fgets(string, 50, stdin);
    

    size = strlen(string);

    for(int i = size; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    return 0;

}