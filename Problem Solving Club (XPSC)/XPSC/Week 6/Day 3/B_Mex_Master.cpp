/*   Author: Arnab Saha  Date: 05/04/2025 [15:02:31]   */
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
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    ll z = 0;
    bool f = false;
    rep(i, 0, n)
    {
        ll x;
        cin >> x;

        if (x == 0)
            z++;
        else if (x >= 2)
            f = true;
    }

    if (z <= (n + 1) / 2)
        cout << 0 << endl;
    else if (f || z == n)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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