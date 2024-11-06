#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (n == 1) || ((n % 2 == 0) && isPowerOfTwo(n / 2));
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    if (isPowerOfTwo(n))
        printf("True");
    else
        printf("False");
    return 0;
}