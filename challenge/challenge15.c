#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arraySize, maxNum = 0;
    printf("Encontrar el numero mas grande de un arreglo.\n\n");
    printf("Tamano del arreglo: ");
    scanf("%i", &arraySize);

    int values[arraySize];

    for(int n=0; n<arraySize; n++)
    {
        printf("Valor[%i]: ",n+1);
        scanf("%i",&values[n]);
        if(values[n] > maxNum)
            maxNum = values[n];
    }

    printf("\nEl numero mayor es: %i\n", maxNum);

    return 0;
}
