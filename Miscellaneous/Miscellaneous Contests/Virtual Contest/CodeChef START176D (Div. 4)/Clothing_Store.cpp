/*   Author: Arnab Saha  Date: 05/02/2025 [23:24:50]   */
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
    ll x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;

    ll total = 0;
    if (z >= c)
        total += c, z -= c;
    else
        total += z, z = 0;

    if (y >= b)
        total += b, y -= b;
    else
    {
        total += y;
        b -= y;
        if (b <= z)
            total += b, z -= b;
        else
            total += z, z = 0;
        y = 0;
    }

    ll left = z + y;

    if (x >= a)
        total += a;
    else
    {
        total += x;
        a -= x;

        if (a >= left)
            total += left;
        else
            total += a;
    }

    cout << total << endl;
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