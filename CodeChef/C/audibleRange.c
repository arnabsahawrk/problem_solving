#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int Hertz;
        scanf("%d", &Hertz);

        if (Hertz < 67 || Hertz > 45000)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}