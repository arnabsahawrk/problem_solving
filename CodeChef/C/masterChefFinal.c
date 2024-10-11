#include <stdio.h>
int main()
{
    unsigned short int T;
    scanf("%hu", &T);

    for (int i = 0; i < T; i++)
    {
        unsigned short int X;
        scanf("%hu", &X);

        if (X > 10)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}