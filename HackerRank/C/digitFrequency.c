#include <stdio.h>
int main()
{

    char str[1001];
    scanf("%s", str);
    int frequencyArray[10] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            frequencyArray[str[i] - '0']++;
    }

    for (int i = 0; i < 10; i++)
        printf("%d ", frequencyArray[i]);

    return 0;
}
