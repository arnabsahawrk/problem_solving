#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int intervalLength = a + b;

    if (intervalLength % 2 == 1)
    {
        if (abs(a - b) == 1)
            printf("YES");
        else
            printf("NO");
    }
    else
    {
        if ((a > 0 && b > 0) && (a == b))
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}