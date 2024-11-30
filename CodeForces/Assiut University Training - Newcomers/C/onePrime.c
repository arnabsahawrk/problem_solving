#include <stdio.h>
#include <stdbool.h>
int main()
{
    int numb;
    scanf("%d", &numb);

    bool notPrime = true;

    if (numb != 2 || numb != 3)
    {
        for (int i = 2; i < numb / 2; i++)
        {
            if (numb % i == 0)
            {
                printf("NO");
                notPrime = false;
                break;
            }
        }
    }

    if (notPrime)
        printf("YES");

    return 0;
}