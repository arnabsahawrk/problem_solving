#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    int array[T];

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < T / 2; i++)
    {
        int temp = array[i];
        array[i] = array[T - (i + 1)];
        array[T - (i + 1)] = temp;
    }

    for (int i = 0; i < T; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}