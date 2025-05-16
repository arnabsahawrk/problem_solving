/*   Author: Arnab Saha  Date: 05/16/2025 [18:03:04]   */
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
    ll n;
    cin >> n;

    vll b(n - 1);
    rep(i, 0, n - 1) cin >> b[i];

    vll a(n);
    a[0] = b[0];
    rep(i, 1, n - 1)
        a[i] = b[i - 1] | b[i];

    a[n - 1] = b.back();

    rep(i, 1, n)
    {
        ll x = a[i] & a[i - 1];
        if (x != b[i - 1])
        {
            out(-1);
            return;
        }
    }

    rep(i, 0, n) cout << a[i] << " ";

    cout << endl;
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