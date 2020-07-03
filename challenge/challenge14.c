#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("---- C R E A T E  A  B I D I M E N S I O N A L  A R R A Y -----\n");

    int sumF1, sumF2, sumF3;
    int arrayBi[3][4] = { 
                        {1, 1, 1, 1},
                        {2, 2, 2, 4},
                        {14, 10, 1, 1} 
                        };
    sumF1 = arrayBi[0][0] + arrayBi[0][1] + arrayBi[0][2] + arrayBi[0][3];
    sumF2 = arrayBi[1][0] + arrayBi[1][1] + arrayBi[1][2] + arrayBi[1][3];
    sumF3 = arrayBi[2][0] + arrayBi[2][1] + arrayBi[2][2] + arrayBi[2][3];

    printf("Fila1's result is %i.\nFila2's result is %i.\nFila3's result is %i.\n", sumF1, sumF2, sumF3);

    return 0;
}