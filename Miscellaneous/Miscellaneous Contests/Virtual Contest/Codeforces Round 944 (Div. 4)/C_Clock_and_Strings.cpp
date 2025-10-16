/*   Author: Arnab Saha  Date: 06/26/2025 [18:47:54]   */
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll x = max(a, b), y = min(a, b);

    ll xy = abs(x - y);

    bool clockWise = false;
    if (xy <= 6)
        clockWise = true;

    vll arr;
    if (clockWise)
    {
        for (int i = y; i <= x; i++)
        {
            arr.eb(i);
        }
    }
    else
    {
        for (int i = 1; i <= y; i++)
            arr.eb(i);
        for (int i = x; i <= 12; i++)
            arr.eb(i);
    }

    bool f = false, r = false;
    rep(i, 0, sz(arr))
    {
        if (arr[i] == c)
        {
            // cout << arr[i] << " " << c << " ";
            f = true;
        }
        if (arr[i] == d)
        {
            // cout << arr[i] << " " << d << " ";
            r = true;
        }

        // cout << arr[i] << " ";
    }
    // cout << endl;

    if ((f && !r) || (!f && r))
        out("YES");
    else
        out("NO");
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