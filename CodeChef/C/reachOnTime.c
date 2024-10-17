#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int cs = 0; cs < t; cs++)
    {
        int x;
        scanf("%d", &x);
        if (x >= 30)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}