/*   Author: Arnab Saha  Date: 08/11/2025 [20:53:50]   */
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

bool check_bit(ll n, ll k)
{
    return (n >> k) & 1LL;
}

void arnabsahawrk()
{
    ll n, k;
    cin >> n >> k;

    k = min(k, 30LL);

    out(min(n + 1, (1LL << k)));
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