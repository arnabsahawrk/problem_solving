#include <stdio.h>
#include <stdbool.h>

bool isPowerOfFour(int n)
{
    if (n == 0)
        return false;

    return (n == 1) || ((n % 4 == 0) && isPowerOfFour(n / 4));
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    if (isPowerOfFour(n))
        printf("True");
    else
        printf("False");
    return 0;
}