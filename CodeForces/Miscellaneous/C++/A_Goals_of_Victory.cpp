#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        int sum = 0;

        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        cout << -1 * sum << endl;
    }

    return 0;
}