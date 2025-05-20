/*   Author: Arnab Saha  Date: 05/20/2025 [13:25:06]   */
#include <bits/stdc++.h>
using namespace std;

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
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define endl '\n'
#define out(x) cout << x << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, m, k;
    cin >> n >> m >> k;

    vll arr(m + 1);
    each(i, arr) cin >> i;

    ll ans = 0;
    rep(i, 0, m)
    {
        ll x = arr[i] ^ arr[m];

        ll count = 0;
        while (x)
        {
            count += (x & 1);
            x >>= 1;
        }

        if (count <= k)
            ans++;
    }

    out(ans);
}

int main()
{
    fast_IO;

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}