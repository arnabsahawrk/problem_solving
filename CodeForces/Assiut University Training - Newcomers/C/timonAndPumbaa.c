#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    if (a - b >= 0)
        printf("%d", a - b);
    else
        printf("0");

    return 0;
}