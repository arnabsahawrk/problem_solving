#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x;
        scanf("%d", &x);

        if (x * 4 <= 1000)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}