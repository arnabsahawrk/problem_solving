#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x;
        scanf("%d", &x);

        if (x < 3)
            printf("LIGHT\n");
        else if (x >= 3 && x < 7)
            printf("MODERATE\n");
        else
            printf("HEAVY\n");
    }

    return 0;
}