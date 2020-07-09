#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    printf("Inside the factorial function, n vale: %i\n", n);

    if(n > 1)
    {
        printf("The function call itself again\n");
        return n * factorial(n-1);
    } else
    {
        printf("n is equals 1. Finished the recursion.\n");
        return 1;
    }

}


int main()
{
    printf("Recursion\n");
    
    int result = factorial(5);
    printf("\nThe result is: %i", result);
    return 0;
}