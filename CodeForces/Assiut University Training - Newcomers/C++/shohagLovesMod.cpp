#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> result;
        int current = 1;

        for (int i = 0; i < n; i++)
        {
            result.push_back(current);
            current += 2;
            if (current > 100)
                current = 1;
        }

        for (int x : result)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
