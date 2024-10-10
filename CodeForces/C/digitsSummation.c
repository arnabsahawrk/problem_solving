#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    int first = a % 10;
    int second = b % 10;

    printf("%d", first + second);

    return 0;
}