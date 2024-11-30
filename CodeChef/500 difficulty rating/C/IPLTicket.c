#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        if (A <= B)
            printf("0\n");
        else
            printf("%d\n", A - B);
    }

    return 0;
}