#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct personalData
{
    char name[20];
    char lastName[20];
    int age;
};



int main()
{
    printf("DATA STRUCTURE\n");

    struct personalData person;

    FILE *archivo;
    archivo = fopen("DatosPersonales001.dat", "wb");

    if(archivo != NULL)
    {
        fflush(stdin);

        printf("Read struct's data: \n");
        printf("Enter name, please: \n");
        fgets(person.name, 20, stdin);
    
        printf("Enter last name, please: \n");
        fgets(person.lastName, 20, stdin);
    
        printf("Enter age, please: \n");
        scanf("%i", &person.age);


        printf("Print data: \n");
        printf("%s", person.name);
        printf("%s", person.lastName);
        printf("%i", person.age);

        fwrite(&person, sizeof(person), 1, archivo);

        fclose(archivo);
    } else
    {
        printf("No se ha podido crear el archivo\n");
    }
    


    return 0;





}