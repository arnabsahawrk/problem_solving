#include <stdio.h>
#include <stdbool.h>

bool isPowerOfThree(int n)
{
    if (n == 0)
        return false;

    return (n == 1) || ((n % 3 == 0) && isPowerOfThree(n / 3));
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    if (isPowerOfThree(n))
        printf("True");
    else
        printf("False");
    return 0;
}