#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int star = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < star; k++)
        {
            printf("*");
        }

        printf("\n");
        space--;
        star += 2;
    }

    return 0;
}