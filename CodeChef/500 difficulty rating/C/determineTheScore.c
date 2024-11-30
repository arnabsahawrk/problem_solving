#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int X, N;
        scanf("%d %d", &X, &N);
        X /= 10;
        printf("%d\n", X * N);
    }
}