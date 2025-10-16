/*   Author: Arnab Saha  Date: 05/17/2025 [21:21:45]   */
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
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll l = 1, r = n + m, mid = a + b, ans = 0;
    while (l < r)
    {
        ll lHalf = mid - l;
        ll rHalf = r - mid;
        ans++;
        if (lHalf >= rHalf)
        {
            l = mid;
            mid = (r + mid) / 2;
        }
        else
        {
            r = mid;
            mid = (l + mid) / 2;
        }
    }

    out(ans);
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