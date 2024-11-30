#include <stdio.h>
int main()
{
    unsigned short int T;
    scanf("%hu", &T);

    for (int i = 0; i < T; i++)
    {
        unsigned short int X, Y;
        scanf("%hu %hu", &X, &Y);

        printf("%hu\n", X - Y);
    }

    return 0;
}
