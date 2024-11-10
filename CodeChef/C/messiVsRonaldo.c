#include <stdio.h>
int main()
{
    int MessiGoals, MessiAssists, RonaldoGoals, RonaldoAssists;
    scanf("%d %d %d %d", &MessiGoals, &MessiAssists, &RonaldoGoals, &RonaldoAssists);

    int MessiPoints = (MessiGoals * 2) + MessiAssists;
    int RonaldoPoints = (RonaldoGoals * 2) + RonaldoAssists;

    if (MessiPoints > RonaldoPoints)
    {
        printf("Messi");
    }
    else if (MessiPoints < RonaldoPoints)
    {
        printf("Ronaldo");
    }
    else
    {
        printf("Equal");
    }

    return 0;
}