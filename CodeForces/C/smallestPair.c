#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int array[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }
        int smallestPair = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int equation = (array[i] + array[j]) + (j - i);
                if (equation < smallestPair)
                    smallestPair = equation;
            }
        }
        printf("%d\n", smallestPair);
    }

    return 0;
}