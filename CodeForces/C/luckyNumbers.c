#include <stdio.h>
#include <stdbool.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    bool notFound = true;
    for (int i = A; i <= B; i++)
    {
        int temp = i;
        while (temp != 0)
        {
            int luckyNumber = temp % 10;
            temp /= 10;
            if (luckyNumber != 4 && luckyNumber != 7)
                break;

            if (temp == 0)
            {
                printf("%d ", i);
                notFound = false;
            }
        }
    }

    if (notFound)
        printf("-1");
}