/*   Author: Arnab Saha  Date: 06/23/2025 [21:16:35]   */
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

    vll arr(n);
    rin(arr);

    /* ll mn = inf;
     bool f = false;
     rep(i, 0, n)
     {
         rep(j, 0, n)
         {
             if (j == i)
                 continue;

             if (abs(arr[i] - arr[j]) <= 1)
             {
                 mn = min(mn, (abs(i - j) - 1));
                 f = true;
             }
         }
     }

     if (f)
         out(mn);
     else
         out(-1);*/

    vector<pll> v;
    rep(i, 0, n)
    {
        v.eb(arr[i], i);
    }

    sort(all(v));

    ll mn = inf;
    bool f = false;

    rep(i, 1, n)
    {
        if (abs(v[i - 1].ff - v[i].ff) <= 1)
        {
            mn = min(mn, (abs(v[i - 1].ss - v[i].ss) - 1));
            f = true;
        }
    }

    if (f)
        out(mn);
    else
        out(-1);
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