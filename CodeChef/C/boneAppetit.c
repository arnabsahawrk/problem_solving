#include <stdio.h>
int main()
{
    int M, N, X, Y;
    scanf("%d %d %d %d", &M, &N, &X, &Y);

    printf("%d", (M * X) + (N * Y));
    return 0;
}