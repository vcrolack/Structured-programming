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

    return 0;





}