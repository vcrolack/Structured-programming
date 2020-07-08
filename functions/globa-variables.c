#include <stdio.h>
#include <stdlib.h>

char publicText[] = {"Text in a global variable\n"};

void check()
{
    printf("\n Print since check function");

    printf("Global variable: \n");
    printf("%s", publicText);

    printf("Local variable: \n");
    //printf("%s", privateText);

}



int main(){
    printf("--- Global Variables ---\n");
    char privateText[] = {"Text in a local variable.\n"};

    printf("Global variable: \n");
    printf("%s", publicText);

    printf("Local variavvle: \n");
    printf("%s", privateText);

    check();

    return 0;
}