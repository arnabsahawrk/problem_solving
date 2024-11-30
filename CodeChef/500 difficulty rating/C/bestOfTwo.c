#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);

        if (A > B)
            printf("%d\n", A);
        else
            printf("%d\n", B);
    }
    return 0;
}
