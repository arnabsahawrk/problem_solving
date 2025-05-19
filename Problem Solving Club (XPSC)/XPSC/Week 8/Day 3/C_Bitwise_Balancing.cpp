/*   Author: Arnab Saha  Date: 05/19/2025 [14:16:09]   */
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
    ll b, c, d;
    cin >> b >> c >> d;

    ll msb = max({__lg(b), __lg(c), __lg(d)});

    ll a = b;

    rep(i, 0, msb + 1)
    {
        if (((d >> i) & 1) && ((c >> i) & 1))
            a = (a & (~(1LL << i)));

        if (!((b >> i) & 1) && ((d >> i) & 1))
            a = (a | (1LL << i));
    }

    if (((a | b) - (a & c)) == d)
        out(a);
    else
        out(-1);
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