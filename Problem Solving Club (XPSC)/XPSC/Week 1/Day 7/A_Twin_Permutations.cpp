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

        int x = n + 1;

        while (n--)
        {
            int y;
            cin >> y;

            cout << abs(y - x) << " ";
        }

        cout << endl;
    }

    return 0;
}