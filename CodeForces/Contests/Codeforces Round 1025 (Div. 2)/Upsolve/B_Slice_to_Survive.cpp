/*   Author: Arnab Saha  Date: 05/18/2025 [00:52:03]   */
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

ll ans(ll n)
{
    ll cnt = 0;

    while (n > 1)
    {
        n = (n + 1) / 2;
        cnt++;
    }

    return cnt;
}

void arnabsahawrk()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    if (n + 1 - a < a)
        a = n + 1 - a;
    if (m + 1 - b < b)
        b = m + 1 - b;

    out(min(1 + ans(n) + ans(b), 1 + ans(m) + ans(a)));
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