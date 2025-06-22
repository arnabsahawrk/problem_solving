/*   Author: Arnab Saha  Date: 06/21/2025 [15:26:49]   */
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
    ll m, n;
    cin >> m >> n;

    vll t(n), z(n), y(n);
    rep(i, 0, n) cin >> t[i] >> z[i] >> y[i];

    vll ans(n);
    auto ok = [&](ll totalMin) -> bool
    {
        ll balloons = m;
        vll v(n);
        rep(i, 0, n)
        {
            ll fullSeg = totalMin / ((t[i] * z[i]) + y[i]);
            ll availableMin = totalMin % ((t[i] * z[i]) + y[i]);
            ll partialSeg = min(z[i], (availableMin / t[i]));

            ll total = (fullSeg * z[i]) + partialSeg;

            total = min(balloons, total);
            v[i] = total;
            balloons -= total;
        }

        if (balloons == 0)
        {
            rep(i, 0, n) ans[i] = v[i];
        }

        return (balloons == 0);
    };

    ll l = 0, r = inf, mid, ansD = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ansD = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    out(ansD);
    rep(i, 0, n) cout << ans[i] << " ";
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