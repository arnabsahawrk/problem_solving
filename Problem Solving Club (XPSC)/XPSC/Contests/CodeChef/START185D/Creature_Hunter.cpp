/*   Author: Arnab Saha  Date: 05/07/2025 [21:28:16]   */
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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, h;
    cin >> n >> h;

    ll onePower = 0, twoPower = 0;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        if (x == 1)
            onePower = max(y, onePower);
        else
            twoPower = max(y, twoPower);
    }

    ll count = 0;
    if ((onePower * 2) >= twoPower)
    {
        cout << (h + onePower - 1) / onePower << endl;
    }
    else
    {
        ll k = (h - onePower + twoPower - 1) / twoPower;
        ll remaining = h - k * twoPower;
        cout << (remaining > 0 ? 2 * k + 1 : 2 * k) << endl;
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