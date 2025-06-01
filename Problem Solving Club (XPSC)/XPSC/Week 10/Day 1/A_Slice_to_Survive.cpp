/*   Author: Arnab Saha  Date: 06/01/2025 [14:31:54]   */
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
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rrep(i, a, b) for (ll i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define endl '\n'
#define out(x) cout << x << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

int main()
{
    fast_IO;

    auto ans = [](ll n)
    {
        ll cnt = 0;

        while (n > 1)
        {
            n = (n + 1) / 2;

            cnt++;
        }

        return cnt;
    };

    auto arnabsahawrk = [&]()
    {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;

        if (n + 1 - a < a)
            a = n + 1 - a;
        if (m + 1 - b < b)
            b = m + 1 - b;

        out(min((1 + ans(n) + ans(b)), (1 + ans(m) + ans(a))));
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}