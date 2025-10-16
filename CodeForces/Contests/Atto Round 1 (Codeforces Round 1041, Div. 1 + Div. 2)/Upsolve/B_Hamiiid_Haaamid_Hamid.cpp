/*   Author: Arnab Saha  Date: 08/10/2025 [00:16:16]   */
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
    int n, x;
    cin >> n >> x;
    x--;

    string s;
    cin >> s;

    int l = -1;
    for (int i = x - 1; i >= 0; i--)
    {
        if (s[i] == '#')
        {
            l = i;
            break;
        }
    }

    int r = n;
    for (int i = x + 1; i < n; i++)
    {
        if (s[i] == '#')
        {
            r = i;
            break;
        }
    }

    out(max(min(x + 1, n - r + 1), min(l + 2, n - x)));
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