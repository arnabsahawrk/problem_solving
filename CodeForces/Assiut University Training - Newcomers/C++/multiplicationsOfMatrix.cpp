#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int matrixAB[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            cin >> matrixAB[i][j];
    }

    int c, d;
    cin >> c >> d;

    int matrixCD[c][d];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
            cin >> matrixCD[i][j];
    }

    int multiplicationMatrix[a][d];
    memset(multiplicationMatrix, 0, sizeof(multiplicationMatrix));

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            for (int k = 0; k < b; k++)
            {
                multiplicationMatrix[i][j] += matrixAB[i][k] * matrixCD[k][j];
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cout << multiplicationMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
