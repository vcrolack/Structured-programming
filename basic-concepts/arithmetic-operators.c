#include <stdio.h>


int main()
{
    int rSum, rMod;
    float rRes, rDiv, rMult;

    rSum = 7 + 5;
    rRes = 7.21 - 2.32;
    rDiv = 7.0 / 3.0;
    rMult = 7 * 3;
    rMod = 7 % 3;

    printf("Sum's result: %i\n", rSum);
    printf("Rest's result: %f\n", rRes);
    printf("Division's result: %f\n", rDiv);
    printf("Multiplication's result: %f\n", rMult);
    printf("Module's result: %i", rMod);

    return 0;
}