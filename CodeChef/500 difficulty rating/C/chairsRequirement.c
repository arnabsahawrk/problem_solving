#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int req = x - y;

        if (req >= 0)
            printf("%d\n", req);
        else
            printf("0\n");
    }

    return 0;
}