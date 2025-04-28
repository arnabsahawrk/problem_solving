/*   Author: Arnab Saha  Date: 28/04/2025 [12:10:40]   */
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
    ll n, k;
    cin >> n >> k;

    vll a(n), h(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> h[i];

    ll l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += a[r];

        if (l == r && sum <= k)
            ans = max(ans, r - l + 1);
        else if (l != r && sum <= k && h[r - 1] % h[r] == 0)
            ans = max(ans, r - l + 1);
        else
        {
            if (l != r && h[r - 1] % h[r] != 0)
            {
                l = r;
                sum = a[l];
            }

            while (sum > k)
                sum -= a[l++];
        }

        r++;
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