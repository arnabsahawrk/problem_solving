#include <bits/stdc++.h>
using namespace std;

void swappingWithMatrix(int matrix[][502], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[x][i];
        matrix[x][i] = matrix[y][i];
        matrix[y][i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        int temp = matrix[i][x];
        matrix[i][x] = matrix[i][y];
        matrix[i][y] = temp;
    }
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int matrix[502][502];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }

    swappingWithMatrix(matrix, n, x - 1, y - 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }
    return 0;
}