/*   Author: Arnab Saha  Date: 05/10/2025 [12:26:44]   */
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
    ll n, k;
    cin >> n >> k;

    if (n > (k + 1))
    {
        out(-1);
        return;
    }

    vll arr(n);
    rep(i, 0, n) arr[i] = inf - i;

    if (n != (k + 1))
    {
        if (n > 2)
            arr[2] = 1;

        k -= n - 2;

        arr[0] = k;
        arr[1] = k * 2;
    }

    rep(i, 0, n) cout << arr[i] << " ";

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