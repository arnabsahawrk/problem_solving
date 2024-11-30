#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;

    int firstPrevious = 0, secondPrevious = 1, current = 0;

    for (int i = 2; i <= n; i++)
    {
        current = firstPrevious + secondPrevious;
        firstPrevious = secondPrevious;
        secondPrevious = current;
    }

    return current;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", fib(n));
    return 0;
}