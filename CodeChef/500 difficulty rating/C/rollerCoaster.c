#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int X, H;
        scanf("%d %d", &X, &H);

        if (X - H >= 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}