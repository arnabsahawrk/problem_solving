/*   Author: Arnab Saha  Date: 04/30/2025 [20:38:12]   */
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

    if (n == 1)
        cout << -1 << endl;
    else
    {
        vll arr;
        ll a = 0;
        if (n % 2 == 1)
        {
            arr.eb(1);
            arr.eb(2);
            arr.eb(-3);
            a = 2;
        }

        for (int i = a; i < n; i += 2)
        {
            arr.eb(3);
            arr.eb(-3);
        }

        rep(i, 0, n) cout << arr[i] << " ";

        cout << endl;
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