/*   Author: Arnab Saha  Date: 05/21/2025 [23:50:46]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define ld long double
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define eb emplace_back
#define sz(x) x.size()
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define endl '\n'
#define out(x) cout << x << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 998244353;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    vll dp(n + 1, 0);
    dp[0] = 1;

    auto check = [&](ll i)
    {
        if (i + 3 >= n)
            return false;

        return s[i] == s[i + 2] && s[i + 1] == s[i + 3] && s[i] != s[i + 1];
    };

    for (int i = 0; i < n; i++)
    {
        dp[i + 1] = (dp[i + 1] + dp[i]) % mod;

        if (check(i))
        {
            dp[i + 3] = (dp[i + 3] + dp[i]) % mod;
        }
    }

    out(dp[n]);
}

int main()
{
    fast_IO;

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}