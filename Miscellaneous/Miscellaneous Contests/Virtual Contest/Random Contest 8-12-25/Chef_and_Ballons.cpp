/*   Author: Arnab Saha  Date: 08/12/2025 [23:42:12]   */
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
    ll r, g, b, k;
    cin >> r >> g >> b >> k;

    ll ans = 0;

    if (r <= (k - 1))
        ans += r;
    else
        ans += (k - 1);

    if (g <= (k - 1))
        ans += g;
    else
        ans += (k - 1);

    if (b <= (k - 1))
        ans += b;
    else
        ans += (k - 1);

    out(ans + 1);
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