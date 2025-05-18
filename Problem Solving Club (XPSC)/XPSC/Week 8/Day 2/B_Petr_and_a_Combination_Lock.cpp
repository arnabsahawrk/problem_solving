/*   Author: Arnab Saha  Date: 05/18/2025 [18:11:08]   */
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
    ll n;
    cin >> n;

    vll arr(n);
    rep(i, 0, n) cin >> arr[i];

    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll sum = 0;
        for (ll k = 0; k < n; k++)
        {
            if ((mask >> k) & 1)
                sum += arr[k];
            else
                sum -= arr[k];
        }

        if (sum % 360 == 0)
        {
            out("YES");
            return;
        }
    }

    out("NO");
}

int main()
{
    fast_IO;

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}