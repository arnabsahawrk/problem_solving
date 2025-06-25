/*   Author: Arnab Saha  Date: 06/25/2025 [10:20:35]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<ll>;
using vb = vector<bool>;
using vs = vector<string>;

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define rep(i, a, b) for (ll i = (a); i < (b); ++i)
#define rrep(i, a, b) for (ll i = (a); i >= (b); --i)
#define each(x, a) for (auto &x : a)
#define rin(v) each(i, v) cin >> i
#define out(x) cout << x << endl
#define endl '\n'

const ll inf = 1e9;
const ll linf = 1e18;
const ll mod = 1e9 + 7;

void arnabsahawrk()
{
    string str;
    cin >> str;

    vll x(3);
    rin(x);

    vll y(3);
    rin(y);

    ll r;
    cin >> r;

    ll b = 0, s = 0, c = 0;
    rep(i, 0, sz(str))
    {
        if (str[i] == 'B')
            b++;
        else if (str[i] == 'S')
            s++;
        else
            c++;
    }

    auto ok = [&](ll m) -> bool
    {
        ll tb = b * m, ts = s * m, tc = c * m;
        ll cost = r;

        // bread
        if (tb > x[0])
        {
            tb -= x[0];

            ll lagbe = (tb * y[0]);
            if (lagbe <= cost)
                cost -= lagbe;
            else
                return false;
        }

        // sauce
        if (ts > x[1])
        {
            ts -= x[1];

            ll lagbe = (ts * y[1]);
            if (lagbe <= cost)
                cost -= lagbe;
            else
                return false;
        }

        // cheese
        if (tc > x[2])
        {
            tc -= x[2];

            ll lagbe = (tc * y[2]);
            if (lagbe <= cost)
                cost -= lagbe;
            else
                return false;
        }

        return true;
    };

    ll l = 1, h = 1e13, ans = 0, mid;
    while (l <= h)
    {
        mid = l + (h - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
    }

    out(ans);
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}