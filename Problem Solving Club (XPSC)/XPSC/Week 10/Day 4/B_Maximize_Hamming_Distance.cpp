/*   Author: Arnab Saha  Date: 06/04/2025 [19:28:39]   */
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

    auto arnabsahawrk = [&]()
    {
        ll n, m;
        cin >> n >> m;

        vector<string> v(m);
        each(i, v) cin >> i;

        ll ans = 0;
        rep(i, 0, n)
        {
            ll o = 0, z = 0, q = 0;
            rep(j, 0, m)
            {
                if (v[j][i] == '1')
                    o++;
                else if (v[j][i] == '0')
                    z++;
                else
                    q++;
            }

            ll count = 0;
            rep(k, 0, q + 1)
            {
                count = max(count, ((o + k) * (z + (q - k))));
            }

            ans += count;
        }

        out(ans);
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}