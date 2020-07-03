#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("BIDIMENSIONALS ARRAYS\n");

    int bidemensionalArray[4][4];

    bidemensionalArray[0][0] = 11;
    bidemensionalArray[0][1] = 12;
    bidemensionalArray[0][2] = 13;
    bidemensionalArray[0][3] = 14;

    bidemensionalArray[1][0] = 29;
    bidemensionalArray[1][1] = 28;
    bidemensionalArray[1][2] = 27;
    bidemensionalArray[1][3] = 26;

    bidemensionalArray[2][0] = 9;
    bidemensionalArray[2][1] = 8;
    bidemensionalArray[2][2] = 7;
    bidemensionalArray[2][3] = 6;

    bidemensionalArray[3][0] = 99;
    bidemensionalArray[3][1] = 98;
    bidemensionalArray[3][2] = 97;
    bidemensionalArray[3][3] = 96;

    printf("value in (0,1) : %i\n", bidemensionalArray[0][0]);
    printf("value in (0,2) : %i\n", bidemensionalArray[0][1]);
    printf("value in (0,3) : %i\n", bidemensionalArray[0][2]);
    printf("value in (0,4) : %i\n", bidemensionalArray[0][3]);

    return 0;
}