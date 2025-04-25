/*   Author: Arnab Saha  Date: 25/04/2025 [18:47:14]   */
#include <bits/stdc++.h>
using namespace std;

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi first
#define se second

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll x, y, k;
    cin >> x >> y >> k;

    if (x > y)
    {
        ll ans = x / k;
        ll e = ans;

        if (x % k == 0)
            ans = (ans * 2) - 1;
        else
            ans = (ans * 2) + 1;

        if ((e * k < y) || (y != 0 && ans==1))
            ans++;
        cout << ans << endl;
    }
    else if (x < y)
    {
        ll ans = y / k;
        if (y % k == 0)
            cout << (ans * 2) << endl;
        else
            cout << (ans * 2) + 2 << endl;
    }
    else
    {
        ll ans = x / k;
        if (x % k == 0)
            cout << ans * 2 << endl;
        else
            cout << (ans * 2) + 2 << endl;
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