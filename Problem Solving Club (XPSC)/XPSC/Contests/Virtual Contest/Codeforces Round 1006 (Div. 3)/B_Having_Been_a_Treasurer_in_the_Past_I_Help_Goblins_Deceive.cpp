/*   Author: Arnab Saha  Date: 07/15/2025 [20:22:10]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define out(x) cout << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

void arnabsahawrk()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
            x++;
        else
            y++;
    }

    if (x < 2 || y < 1)
    {
        out(0);
        return;
    }

    bool f = false;
    if (x & 1)
        f = true;

    ll extra = 0;

    x /= 2;

    if (f)
        extra = (x * y);

    x = pow(x, 2);
    x *= y;

    out(x + extra);
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