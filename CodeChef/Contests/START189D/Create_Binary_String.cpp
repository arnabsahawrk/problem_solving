/*   Author: Arnab Saha  Date: 06/04/2025 [21:34:59]   */
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
        ll n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        if (n == 1)
            out((max(a, b)));
        else
        {
            ll mx = max(a, b);
            ll mn = min(a, b);
            ll maxi = max(c, d);

            ll ans = 0;

            rep(i, 0, n / 2)
            {
                ll x = 0, y = 0, z = 0;
                // x = ((n - (i + 1)) * mx);
                x = (n - (i + 1));

                // y = ((i + 1) * mn);
                y = (i + 1);

                z = (x * y);
                x *= mx;
                y *= mn;

                // z = (((n - (i - 1)) * (i + 1)) * maxi);
                // z = ((n - (i - 1)) * (i + 1));
                z *= maxi;

                cout << x << " " << y << " " << z << endl;

                ans = max(ans, (x + y + z));

                // cout << ans << " ";
            }

            out(ans);
        }

        // else if (n % 2 == 0)
        // {
        //     a *= (n / 2), b *= (n / 2);
        //     c = max(c, d);
        //     c *= ((n / 2) * (n / 2));

        //     out((a + b + c));
        // }
        // else
        // {
        //     ll mx = max(a, b), mn = min(a, b);
        //     a = mx, b = mn;

        //     ll e = (n + 2 - 1) / 2, o = n / 2;

        //     a *= e, b *= o;
        //     c = max(c, d);
        //     c *= (e * o);

        //     out((a + b + c));
        // }
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}