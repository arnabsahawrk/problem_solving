/*   Author: Arnab Saha  Date: 06/15/2025 [12:06:29]   */
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

        vll arr(n);
        rin(arr);

        ll equalityCheck = 0, l = 0, r = 1;
        bool f = true;
        rep(i, 0, n - 1)
        {
            if (arr[i] == arr[i + 1])
            {
                equalityCheck++;
                if (f)
                {
                    l = i;
                    f = false;
                }
                r = i + 1;
            }
        }

        if (equalityCheck == 0 || equalityCheck == 1)
        {
            out(0);
        }
        else
        {
            ll ans = -1;
            while (l < r - 1)
            {
                ans++;
                l++;
            }

            if (ans == 0)
                ans++;

            out(ans);
        }
    };

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}