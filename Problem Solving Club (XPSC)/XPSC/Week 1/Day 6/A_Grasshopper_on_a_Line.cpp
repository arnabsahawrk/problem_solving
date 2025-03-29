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
        int x, k;
        cin >> x >> k;

        if (x % k != 0 || x < k)
            cout << 1 << endl
                 << x << endl;
        else
        {
            if (k & 1)
                cout << 2 << endl
                     << x - 2 << " " << 2 << endl;
            else
                cout << 2 << endl
                     << x - 3 << " " << 3 << endl;
        }
    }

    return 0;
}