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
const int mod = 998244353;

ll po[100001];

int main()
{
    fast_IO;

    auto arnabsahawrk = [&]()
    {
        ll n;
        cin >> n;

        vll p(n), q(n);
        each(i, p) cin >> i;
        each(i, q) cin >> i;

        vll posP(n), posQ(n);
        rep(i, 0, n)
        {
            posP[p[i]] = i;
            posQ[q[i]] = i;
        }

        set<ll> x, y;
        rep(i, 0, n)
        {
            x.insert(p[i]);
            y.insert(q[i]);

            ll a = *x.rbegin(), b = *y.rbegin();

            pll rp = {a, q[i - posP[a]]}, rq = {b, p[i - posQ[b]]};

            pll ans = max(rp, rq);

            cout << (po[ans.first] + po[ans.second]) % mod << " ";
        }

        cout << endl;
    };

    po[0] = 1;
    rep(i, 1, 100001)
    {
        po[i] = 2 * po[i - 1] % mod;
    }

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}