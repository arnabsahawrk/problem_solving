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

        int one = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                one++;
        }

        if (one & 1)
            cout << (n - one) + (one / 2) + 1 << endl;
        else
            cout << (n - one) + (one / 2) << endl;
    }

    return 0;
}