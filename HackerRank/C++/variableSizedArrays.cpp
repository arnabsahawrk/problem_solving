#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, s = 0;
    cin >> x >> y;

    int *array[x];

    while (x--)
    {
        int n;
        cin >> n;
        array[s] = new int[n];

        for (int i = 0; i < n; i++)
            cin >> array[s][i];
        s++;
    }

    while (y--)
    {
        int i, j;
        cin >> i >> j;
        cout << array[i][j] << endl;
    }

    return 0;
}