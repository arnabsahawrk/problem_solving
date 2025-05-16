/*   Author: Arnab Saha  Date: 05/16/2025 [12:59:53]   */
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
    ll n, m;
    cin >> n >> m;

    if (n > m || (n % 2 == 0 && m & 1))
    {
        out("No");
        return;
    }

    if (n & 1)
    {
        out("Yes");
        rep(i, 1, n) cout << 1 << " ";
        out(abs(m - (n - 1)));
    }
    else
    {
        out("Yes");
        rep(i, 1, n - 1) cout << 1 << " ";

        ll x = abs(m - (n - 2));

        cout << x / 2 << " " << x / 2 << endl;
    }
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