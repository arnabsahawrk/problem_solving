#include <stdio.h>

int romanToInt(char *s)
{
    int i = 0;
    int finalOutput = 0;

    while (s[i] != '\0')
    {

        if (s[i] == 'I')
        {
            if (s[i + 1] == 'V')
            {
                finalOutput += 4;
                i += 2;
                continue;
            }
            else if (s[i + 1] == 'X')
            {
                finalOutput += 9;
                i += 2;
                continue;
            }
            else
            {
                finalOutput++;
            }
        }
        else if (s[i] == 'X')
        {
            if (s[i + 1] == 'L')
            {
                finalOutput += 40;
                i += 2;
                continue;
            }
            else if (s[i + 1] == 'C')
            {
                finalOutput += 90;
                i += 2;
                continue;
            }
            else
            {
                finalOutput += 10;
            }
        }
        else if (s[i] == 'C')
        {
            if (s[i + 1] == 'D')
            {
                finalOutput += 400;
                i += 2;
                continue;
            }
            else if (s[i + 1] == 'M')
            {
                finalOutput += 900;
                i += 2;
                continue;
            }
            else
            {
                finalOutput += 100;
            }
        }
        else if (s[i] == 'V')
        {
            finalOutput += 5;
        }
        else if (s[i] == 'L')
        {
            finalOutput += 50;
        }
        else if (s[i] == 'D')
        {
            finalOutput += 500;
        }
        else
        {
            finalOutput += 1000;
        }
        i++;
    }

    return finalOutput;
}

int main()
{
    char romanNumeral[] = "MCMXCIV";
    printf("%d", romanToInt(romanNumeral));

    return 0;
}