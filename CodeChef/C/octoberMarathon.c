#include <stdio.h>
int main()
{
    int hours;
    scanf("%d", &hours);

    if (hours < 3)
        printf("GOLD");
    else if (hours >= 3 && hours < 6)
        printf("SILVER");
    else
        printf("BRONZE");

    return 0;
}