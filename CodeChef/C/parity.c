#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int chocolate;
        scanf("%d", &chocolate);

        if (chocolate % 2)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}