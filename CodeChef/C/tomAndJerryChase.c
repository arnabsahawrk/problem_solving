#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int jerry, tom;
        scanf("%d %d", &jerry, &tom);

        if (jerry < tom)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}