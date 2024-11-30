#include <stdio.h>
#include <math.h>
void sieveOfEratosthenes(int range)
{
    int isPrime[1000] = {0};

    for (int i = 2; i <= sqrt(range); i++)
    {
        if (isPrime[i] == 0)
        {
            for (int j = i * i; j <= range; j += i)
            {
                isPrime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= range; i++)
    {
        if (isPrime[i] == 0)
            printf("%d ", i);
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    sieveOfEratosthenes(N);
}