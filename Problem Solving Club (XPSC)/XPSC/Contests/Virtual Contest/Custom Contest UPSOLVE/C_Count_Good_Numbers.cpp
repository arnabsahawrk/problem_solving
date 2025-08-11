/*   Author: Arnab Saha  Date: 08/11/2025 [18:14:55]   */
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
    ll l, r;
    cin >> l >> r;

    auto good = [](ll x)
    {
        int ok = 0;
        for (int i = 0; i < x; i++)
            if (i % 2 && i % 3 && i % 5 && i % 7)
                ok++;

        return ok;
    };

    ll left = (l / 210) * good(210) + good(l % 210);
    ll right = ((r + 1) / 210) * good(210) + good((r + 1) % 210);

    out(right - left);
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