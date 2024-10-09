#include <stdio.h>

int main()
{
    unsigned short int rainy, cloudy;
    scanf("%hu %hu", &rainy, &cloudy);

    printf("%hu", 7-(rainy+cloudy));
}