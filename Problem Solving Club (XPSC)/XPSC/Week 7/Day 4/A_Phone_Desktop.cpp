/*   Author: Arnab Saha  Date: 05/13/2025 [21:22:36]   */
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
    ll x, y;
    cin >> x >> y;

    if (x == 0)
        out(((y + 2 - 1) / 2));
    else if (y == 0)
        out((x + 15 - 1) / 15);
    else
    {
        ll ys = (y + 2 - 1) / 2;
        ll l = ys * 7;

        if (y & 1)
            l += 4;

        if (l >= x)
            out(ys);
        else
            out((ys + (((x - l) + 15 - 1) / 15)));
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