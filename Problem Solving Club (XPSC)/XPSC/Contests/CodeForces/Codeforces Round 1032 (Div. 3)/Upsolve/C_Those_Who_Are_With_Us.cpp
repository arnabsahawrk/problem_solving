/*   Author: Arnab Saha  Date: 06/18/2025 [07:18:56]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
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
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (ll)(x).size()
#define rep(i, a, b) for (ll i = (a); i < (b); ++i)
#define rrep(i, a, b) for (ll i = (a); i >= (b); --i)
#define each(x, a) for (auto &x : a)
#define out(x) cout << x << endl
#define endl '\n'
#define rin(v) each(i, v) cin >> i
#define pout(v)                  \
    each(x, v) cout << x << " "; \
    cout << endl

const ll inf = 1e9;
const ll linf = 1e18;
const ll mod = 1e9 + 7;

bool check(vector<pll> v, ll r, ll c)
{
    each(x, v)
    {
        if (x.ff != r && x.ss != c)
            return false;
    }

    return true;
}

int main()
{
    fastIO;

    auto arnabsahawrk = [&]()
    {
        ll n, m;
        cin >> n >> m;

        ll mx = 0;
        vector<vll> mat(n, vll(m, 0));
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                cin >> mat[i][j];
                mx = max(mx, mat[i][j]);
            }
        }

        vector<pll> v;
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                if (mat[i][j] == mx)
                    v.eb(i, j);
            }
        }

        if (sz(v) == 1)
        {
            out(mx - 1);
            return;
        }

        if (v[0].first == v[1].first)
        {
            ll r = v[0].first, c = -1;
            rep(i, 0, sz(v))
            {
                if (v[i].first != r && c == -1)
                {
                    c = v[i].second;
                }
                else if (v[i].first != r && v[i].second != c)
                {
                    out(mx);
                    return;
                }
            }

            out(mx - 1);
            return;
        }

        if (v[0].ss == v[1].ss)
        {
            ll c = v[0].ss, r = -1;
            rep(i, 0, sz(v))
            {
                if (v[i].ss != c && r == -1)
                {
                    r = v[i].ff;
                }
                else if (v[i].ss != c && v[i].ff != r)
                {
                    out(mx);
                    return;
                }
            }

            out(mx - 1);
            return;
        }

        if (check(v, v[0].ff, v[1].ss) || check(v, v[1].ff, v[0].ss))
            out(mx - 1);
        else
            out(mx);
    };

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}