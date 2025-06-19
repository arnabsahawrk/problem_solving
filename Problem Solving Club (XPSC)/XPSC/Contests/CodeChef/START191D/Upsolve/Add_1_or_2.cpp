/*   Author: Arnab Saha  Date: 06/20/2025 [01:17:20]   */
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
    ll n;
    cin >> n;

    vll a(n), b(n);
    rin(a);
    rin(b);
    ll mx = *max_element(all(a));
    ll low = mx, high = 1e14, ans = low;

    auto isPossible = [&](ll mid) -> bool
    {
        vll gapValue;
        ll eventsRemain = 0;

        rep(i, 0, n)
        {
            ll gap = mid - a[i];

            if (gap > b[i])
                gapValue.eb(gap - b[i]);
            else
                eventsRemain += b[i] - gap;
        }

        each(x, gapValue)
        {
            eventsRemain -= x / 2;
        }

        if (eventsRemain <= 0)
            return true;
        else
            return false;
    };

    while (low <= high)
    {
        ll mid = low + (high - low) / 2;

        if (isPossible(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    out(ans);
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}