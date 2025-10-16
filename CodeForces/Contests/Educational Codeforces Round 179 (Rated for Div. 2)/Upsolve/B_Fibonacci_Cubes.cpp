/*   Author: Arnab Saha  Date: 06/04/2025 [01:38:33]   */
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

ll f[11];

int main()
{
    fast_IO;

    f[0] = 1;
    f[1] = 2;
    rep(i, 2, 11)
        f[i] = f[i - 1] + f[i - 2];

    auto arnabsahawrk = [&]()
    {
        ll n, m;
        cin >> n >> m;

        while (m--)
        {
            vll dim(3);
            rep(i, 0, 3) cin >> dim[i];
            sort(all(dim));

            cout << (dim.front() >= f[n - 1] && dim.back() >= f[n]);
        }

        cout << endl;
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}