#include <stdio.h>

void easyFibonacci(int prev, int next, int count, int n)
{
    if (count >= n)
        return;

    int fib = prev + next;
    printf(" %d", fib);

    easyFibonacci(next, fib, count + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("0\n");
    }
    else if (n == 2)
    {
        printf("0 1\n");
    }
    else
    {
        printf("0 1");
        easyFibonacci(0, 1, 2, n);
        printf("\n");
    }

    return 0;
}
