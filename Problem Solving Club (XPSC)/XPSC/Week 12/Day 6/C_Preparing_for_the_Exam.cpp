/*   Author: Arnab Saha  Date: 06/19/2025 [10:47:13]   */
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
    ll n, m, k;
    cin >> n >> m >> k;

    vll arr(m), ar(k);
    rin(arr);
    rin(ar);

    if (n == k)
    {
        rep(i, 0, m)
        {
            cout << 1;
        }
        cout << endl;
        return;
    }

    if (n - k >= 2)
    {
        rep(i, 0, m)
        {
            cout << 0;
        }
        cout << endl;
        return;
    }

    sort(all(ar));

    ll missing = 1;
    each(x, ar)
    {
        if (missing != x)
            break;
        else
            missing++;
    }

    rep(i, 0, m)
    {
        if (arr[i] == missing)
            cout << 1;
        else
            cout << 0;
    }

    cout << endl;
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