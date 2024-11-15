#include <stdio.h>

int firstMatrix[1000][1000], secondMatrix[1000][1000], resultMatrix[1000][1000];

void theEquation(int currentR, int col, int currentC)
{
    if (col == currentC)
        return;

    resultMatrix[currentR][currentC] = firstMatrix[currentR][currentC] + secondMatrix[currentR][currentC];

    theEquation(currentR, col, currentC + 1);
}

void sumOfMatrix(int n, int m, int currentRow)
{
    if (currentRow == n)
        return;

    theEquation(currentRow, m, 0);

    sumOfMatrix(n, m, currentRow + 1);
}
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &firstMatrix[i][j]);
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &secondMatrix[i][j]);
    }

    sumOfMatrix(row, col, 0);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", resultMatrix[i][j]);

        printf("\n");
    }

    return 0;
}