#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char str[100001];
        scanf("%s", str);

        bool isGood = false;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == '0' && str[i + 1] == '1' && str[i + 2] == '0')
            {
                isGood = true;
                break;
            }

            if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1')
            {
                isGood = true;
                break;
            }
        }

        if (isGood)
            printf("Good\n");
        else
            printf("Bad\n");
    }

    return 0;
}