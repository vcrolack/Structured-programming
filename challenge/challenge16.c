#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float calificaciones[5][6];
    int count;

    for(int i = 0; i<5; i++)
    {
        float sum = 0;
        for(int j = 0; j < 6; j++)
        {
            calificaciones[i][j] = rand() % 5 + 6;
            printf("Califications[%i][%i] = %f\n", i, j, calificaciones[i][j]);

            sum += calificaciones[i][j];
        }
        calificaciones[i][6] = sum / 5;
        printf("\nEl promedio de %i es: %f\n\n", i, calificaciones[i][6]);
    }

    return 0;
}