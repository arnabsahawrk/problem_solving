/*   Author: Arnab Saha  Date: 05/01/2025 [18:54:04]   */
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
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 998244353;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll freq(n, 0);
    rep(i, 0, n)
    {
        ll x;
        cin >> x;

        x = min(x, n - 1 - x);
        freq[x]++;
    }

    rep(i, 0, n / 2)
    {
        if (freq[i] != 2)
        {
            cout << 0 << endl;
            return;
        }
    }

    ll ans = 1;
    rep(i, 0, n / 2)
    {
        ans *= 2;
        ans %= mod;
    }

    cout << ans << endl;
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