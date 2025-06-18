/*   Author: Arnab Saha  Date: 06/17/2025 [22:42:10]   */
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

int main()
{
    fastIO;

    auto arnabsahawrk = [&]()
    {
        ll n;
        cin >> n;

        vll a(n), b(n);
        rin(a);
        rin(b);

        vector<pll> ans;
        rep(i, 0, n - 1)
        {
            ll min_idx = i;
            rep(j, i + 1, n)
            {
                if (a[j] > a[min_idx])
                {
                    min_idx = j;
                }
            }

            swap(arr[i])
        }

        // rep(i, 0, n - 1)
        // {
        //     rep(j, i + 1, n)
        //     {
        //         if (b[j] > b[i])
        //         {
        //             ans.pb({2, {i + 1, j + 1}});
        //             swap(b[i], b[j]);
        //         }
        //     }
        // }

        // rep(i, 0, n)
        // {
        //     if (a[i] > b[i])
        //     {
        //         swap(a[i], b[i]);
        //         ans.pb({3, {i + 1, j + 1}});
        //     }
        // }
    };

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}