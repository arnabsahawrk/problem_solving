/*   Author: Arnab Saha  Date: 06/30/2025 [13:39:33]   */
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

    ll ans = 0;
    rep(i, 6, n + 1)
    {
        ll count = 0;
        ll x = i;
        for (ll j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
                count++;

            while (x % j == 0)
                x /= j;
        }

        if (x > 1)
            count++;

        if (count == 2)
        {
            ans++;
            // cout << i << " ";
        }
    }

    // cout << endl;
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