#include <stdio.h>
int main()
{
    int numb, i = 0, sum = 0;
    scanf("%d", &numb);

    while (i < 5)
    {
        int temp = 0;
        temp = numb % 10;
        sum += temp;
        i++;
        numb /= 10;
    }

    printf("%d", sum);

    return 0;
}