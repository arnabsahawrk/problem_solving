/*   Author: Arnab Saha  Date: 05/31/2025 [21:50:18]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define ld long double
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define eb emplace_back
#define sz(x) x.size()
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rrep(i, a, b) for (ll i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define endl '\n'
#define out(x) cout << x << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

int main()
{
    fast_IO;

    auto arnabsahawrk = [&]()
    {
        ll n;
        cin >> n;

        vll p(n), q(n);
        rep(i, 0, n)
        {
            ll x;
            cin >> x;
            ll b = 2;
            ll a = pow(b, x);

            p[i] = a % mod;
        }

        rep(i, 0, n)
        {
            ll x;
            cin >> x;
            ll b = 2;
            ll a = pow(b, x);

            q[i] = a % mod;
        }

        ll mxP = 0, mxQ = 0, a = 0, b = 0;
        rep(i, 0, n)
        {
            if (mxP != max(mxP, p[i]))
            {
                mxP = max(mxP, p[i]);
                a = 0;
            }

            if (mxQ != max(mxQ, q[i]))
            {
                mxQ = max(mxQ, q[i]);
                b = 0;
            }

            cout << max(((mxP % mod + q[a] % mod) % mod), ((mxQ % mod + p[b] % mod) % mod)) << " ";

            a++, b++;
        }
        cout << endl;
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}