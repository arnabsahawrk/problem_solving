#include <stdio.h>
int main()
{
    float number;
    scanf("%f", &number);

    int intPart = (int)number;
    float floatPart = number - intPart;

    if (floatPart > 0.0)
        printf("float %d %.3f", intPart, floatPart);
    else
        printf("int %d", intPart);
}