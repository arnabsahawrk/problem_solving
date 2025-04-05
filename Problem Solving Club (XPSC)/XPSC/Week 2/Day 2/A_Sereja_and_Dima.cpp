#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sereja = 0, dima = 0, i = 0, j = n - 1;
    bool serejaTurn = true;

    while (i <= j)
    {
        if (serejaTurn)
        {
            if (v[i] >= v[j])
            {
                sereja += v[i];
                i++;
            }
            else
            {
                sereja += v[j];
                j--;
            }

            serejaTurn = false;
        }
        else
        {
            if (v[i] >= v[j])
            {
                dima += v[i];
                i++;
            }
            else
            {
                dima += v[j];
                j--;
            }

            serejaTurn = true;
        }
    }

    cout << sereja << " " << dima;

    return 0;
}