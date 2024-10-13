#include <stdio.h>
int main()
{
    long long int memo, momo, k;
    scanf("%lld %lld %lld", &memo, &momo, &k);

    if (memo % k == 0 && momo % k == 0)
        printf("Both");
    else if (memo % k == 0)
        printf("Memo");
    else if (momo % k == 0)
        printf("Momo");
    else
        printf("No One");

    return 0;
}