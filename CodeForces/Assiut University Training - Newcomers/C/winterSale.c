#include <stdio.h>
int main()
{
    /* before solved the problem know percentage formula
    To find the percentage of number formula: (number * percentage) / 100
    To find number when I have the percentage: (final number * 100) / remaining percentage
     */

    int X, P;
    scanf("%d %d", &X, &P);

    float remainingPercentage = 100 - X;
    printf("%.2f", (P * 100) / remainingPercentage);

    return 0;
}