/*   Author: Arnab Saha  Date: 08/10/2025 [21:01:10]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define out(x) cout << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

void arnabsahawrk()
{
    int n;
    cin >> n;

    if (n & 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i & 1)
                cout << -1;
            else
                cout << 3;

            (i == n) ? cout << endl : cout << " ";
        }
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (i & 1)
                cout << -1 << " ";
            else
                cout << 3 << " ";
        }

        cout << 2 << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}