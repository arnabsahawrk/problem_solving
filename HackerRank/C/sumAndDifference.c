#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int firsInt, secondInt;
    float firstFloat, secondFloat;

    scanf("%d %d %f %f", &firsInt, &secondInt, &firstFloat, &secondFloat);

    printf("%d %d\n%.1f %.1f", firsInt + secondInt, firsInt - secondInt, firstFloat + secondFloat, firstFloat - secondFloat);

    return 0;
}