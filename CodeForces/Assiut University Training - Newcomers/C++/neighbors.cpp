#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }

    int a, b;
    cin >> a >> b;

    for (int i = a - 2; i <= a; i++)
    {
        for (int j = b - 2; j <= b; j++)
        {

            if (i == a - 1 && j == b - 1 || i == -1 || j == -1 || i == n || j == m)
                continue;

            if (matrix[i][j] != 'x')
            {
                cout << "no";
                return 0;
            }
        }
    }

    cout << "yes";

    return 0;
}