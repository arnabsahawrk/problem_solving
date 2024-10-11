#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        int N;
        scanf("%d", &N);

        long long int factorial = 1;
        if (N != 0 || N != 1)
        {
            for (int j = 2; j <= N; j++)
            {
                factorial *= j;
            }
        }

        printf("%lld\n", factorial);
    }
    return 0;
}