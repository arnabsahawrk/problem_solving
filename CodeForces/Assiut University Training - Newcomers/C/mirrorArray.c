#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int mirrorMatrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &mirrorMatrix[i][j]);
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0, k = col - 1; j < k; j++, k--)
        {
            int temp = mirrorMatrix[i][j];
            mirrorMatrix[i][j] = mirrorMatrix[i][k];
            mirrorMatrix[i][k] = temp;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", mirrorMatrix[i][j]);

        printf("\n");
    }
    return 0;
}