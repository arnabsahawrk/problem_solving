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

        int blank = 0, zero = 0;

        while (n--)
        {
            int x;
            cin >> x;

            if (x == 0)
                zero++;
            else
            {
                blank = max(blank, zero);
                zero = 0;
            }
        }

        cout << max(zero, blank) << endl;
    }

    return 0;
}