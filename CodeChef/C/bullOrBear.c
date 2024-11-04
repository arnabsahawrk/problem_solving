#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int bought, sold;
        scanf("%d %d", &bought, &sold);

        if (sold - bought == 0)
            printf("NEUTRAL\n");
        else if (sold - bought > 0)
            printf("PROFIT\n");
        else
            printf("LOSS\n");
    }

    return 0;
}
