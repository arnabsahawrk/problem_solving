#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    while (B != 0)
    {
        int temp;
        temp = B;
        B = A % B;
        A = temp;
    }

    printf("%d", A);
}