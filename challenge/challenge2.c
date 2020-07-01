/*
-> Enter the necessary values for to calculate  the cylinder area
-> Makes the operation
-> Print the result of the area
*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main()
{
    float radio, height, area, volume;

    printf("----------Cylinder Area----------\n");

    printf("Please, enter a radio: ");
    scanf("%f", &radio);

    printf("\nPlease, enter a height: ");
    scanf("%f", &height);

    area = ((2 * PI * radio * height) + (2 * PI * pow (radio, 2)));
    volume = (2 * height * radio * PI);

    printf("\nThe cylinder area is: %f\n", area);
    printf("The cylinder volume is: %f\n", volume);

    return 0;

}