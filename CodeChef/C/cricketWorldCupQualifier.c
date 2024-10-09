#include <stdio.h>

int main()
{
    unsigned short int X;
    scanf("%hu", &X);

    if (X >= 12)
        printf("Yes");
    else
        printf("No");

    return 0;
}
