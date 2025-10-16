/*   Author: Arnab Saha  Date: 05/14/2025 [22:42:37]   */
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
const int mod = 998244353;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll arr(n);
    rep(i, 0, n) cin >> arr[i];

    ll ans = 0;
    rep(i, 0, n)
    {
        if (arr[i] >= n)
        {
            ans = ((arr[i] - 1) * n) % mod;
        }
    }

    out((ans * 2));
}

int main()
{
    fast_IO;

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}