#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Files! Creat a file\n");

    FILE *archivo;
    archivo = fopen("archivo001.dat", "w");

    if(archivo != NULL)
    {
        printf("The file created succesfuly.\n");
        fclose(archivo);

    }else
    {
        printf("The file not created.");
    }
    


    return 0;
}