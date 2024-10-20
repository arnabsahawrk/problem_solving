#include <stdio.h>
#include <stdbool.h>
int main()
{
    char firstName[100], firstSureName[100], secondName[100], secondSureName[100];
    scanf("%s %s %s %s", firstName, firstSureName, secondName, secondSureName);

    bool areBrothers = true;

    for (int i = 0; firstSureName[i] != '\0' || secondSureName[i] != '\0'; i++)
    {
        if (firstSureName[i] != secondSureName[i])
        {
            areBrothers = false;
            break;
        }
    }

    if (areBrothers)
        printf("ARE Brothers");
    else
        printf("NOT");
}