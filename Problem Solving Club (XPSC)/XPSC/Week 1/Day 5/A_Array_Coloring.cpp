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
        while (n--)
        {
            int x;
            cin >> x;

            sum += x;
        }

        if (sum & 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}