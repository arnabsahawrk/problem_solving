#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int candies;
        scanf("%d", &candies);

        if (candies % 3 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}