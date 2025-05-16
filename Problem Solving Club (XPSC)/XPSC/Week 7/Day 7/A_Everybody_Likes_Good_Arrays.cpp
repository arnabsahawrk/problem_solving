/*   Author: Arnab Saha  Date: 05/17/2025 [01:17:04]   */
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

    ll l = 0, r = 0, cnt = 0, ans = 0;
    while (r < n)
    {
        if (((arr[l] & 1) && (arr[r] % 2 == 0)) || ((arr[l] % 2 == 0) && (arr[r] & 1)))
        {
            if (cnt > 1)
                ans += (cnt - 1);

            cnt = 0;
            l = r;
        }

        cnt++;
        r++;
    }

    if (cnt > 1)
        ans += (cnt - 1);

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