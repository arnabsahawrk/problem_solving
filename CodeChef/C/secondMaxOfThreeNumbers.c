#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a <= b && a <= c)
        {
            if (b >= c)
                printf("%d\n", c);
            else
                printf("%d\n", b);
        }
        else if (b <= a && b <= c)
        {
            if (a >= c)
                printf("%d\n", c);
            else
                printf("%d\n", a);
        }
        else
        {
            if (a >= b)
                printf("%d\n", b);
            else
                printf("%d\n", a);
        }
    }

    return 0;
}