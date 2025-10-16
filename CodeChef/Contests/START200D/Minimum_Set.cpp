/*   Author: Arnab Saha  Date: 08/20/2025 [22:10:45]   */
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

unordered_map<ll, ll> mp;

ll solve(ll n)
{
    if (n <= 0)
        return 0;

    auto it = mp.find(n);
    if (it != mp.end())
        return it->second;

    ll x = 1LL << (63 - __builtin_clzll(n));
    ll ans = solve(x - 1) + solve(n - x) + x;
    mp[n] = ans;
    return ans;
}

void arnabsahawrk()
{
    ll n;
    cin >> n;

    ll x = solve(n);
    bool f = (n & (n - 1)) == 0;
    ll ans = x - (f ? 0 : 1);
    out(ans);
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