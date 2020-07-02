#include <stdio.h>

int main()
{
    printf("Unidimensionals arrays\n");

    int integerList[30];

    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList[] = {23.6, 45.2, 21.8, 98.1, 34.5};

    char charList[5];
    
    charList[0] = 'D';
    charList[1] = 'A';
    charList[2] = 'V';
    charList[3] = 'I';
    charList[4] = 'D';

    printf("\n FIRST INTEGER: \t\t %i",integerList[0]);
    printf("\n FIRST FLOAT: \t\t %f",floatList[0]);
    printf("\n CHAR LIST: \t\t %c%c%c%c%c",charList[0], charList[1], charList[2], charList[3], charList[4]);
    return 0;
}