#include <stdio.h>
#include <math.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int floorResult = floor((double)A / (double)B);
    int ceilResult = ceil((double)A / (double)B);
    int roundResult = round((double)A / (double)B);

    printf("floor %d / %d = %d\n", A, B, floorResult);
    printf("ceil %d / %d = %d\n", A, B, ceilResult);
    printf("round %d / %d = %d\n", A, B, roundResult);

    return 0;
}