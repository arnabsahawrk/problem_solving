#include <stdio.h>

double average(int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        double value;
        scanf("%lf", &value);
        sum += value;
    }
    return sum / n;
}

int main()
{
    int n;
    scanf("%d", &n);

    double mean = average(n);
    printf("%.6lf\n", mean);

    return 0;
}
