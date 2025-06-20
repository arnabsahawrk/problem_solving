/*   Author: Arnab Saha  Date: 06/20/2025 [14:36:55]   */
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

const ll inf = 2e9;
const ll linf = 1e18;
const ll mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, k;
    cin >> n >> k;

    vll arr(n);
    rin(arr);
    sort(all(arr));
    ll h = (n / 2);

    auto ok = [&](ll m) -> bool
    {
        ll c = 0;
        rep(i, h, n)
        {
            if (m > arr[i])
                c += (m - arr[i]);

            if (c > k)
                return false;
        }

        return true;
    };

    ll l = 1, r = inf, ans = arr[h];
    while (l <= r)
    {
        ll m = l + (r - l) / 2;
        if (ok(m))
        {
            ans = m;
            l = m + 1;
        }
        else
            r = m - 1;
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