#include <stdio.h>
#include <math.h>
int main()
{
    long long int A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    if (B * log(A) > D * log(C))
        printf("YES");
    else
        printf("NO");

    return 0;
}