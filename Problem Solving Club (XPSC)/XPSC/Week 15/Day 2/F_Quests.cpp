/*   Author: Arnab Saha  Date: 07/06/2025 [22:06:21]   */
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
    int n, d;
    long long c;
    cin >> n >> c >> d;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<long long>());
    int l = 0, r = d + 2;
    while (l < r)
    {
        int m = l + (r - l + 1) / 2;
        long long tot = 0;
        int curr = 0;
        for (int i = 0; i < d; i++)
        {
            if (i % m < n)
            {
                tot += a[i % m];
            }
        }
        if (tot >= c)
        {
            l = m;
        }
        else
        {
            r = m - 1;
        }
    }
    if (l == d + 2)
    {
        cout << "Infinity\n";
        return;
    }
    if (l == 0)
    {
        cout << "Impossible\n";
        return;
    }
    cout << l - 1 << '\n';
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