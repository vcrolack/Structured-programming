#include <stdio.h>

int main()
{
    printf("Increment and decrement operators\n");

    int value, result;

    value = 25;
    result = value++;
    printf("The value is %i\n",result);

    value = 25;
    result = ++value;
    printf("The value is %i\n",result);

    value = 25;
    result = value--;
    printf("The value is %i\n",result);

    value = 25;
    result = --value;
    printf("The value is %i\n",result);
    
    return 0;
}