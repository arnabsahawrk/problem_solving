/*   Author: Arnab Saha  Date: 05/14/2025 [20:37:41]   */
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
    vector<ld> arr(5);
    ld t = 0;
    rep(i, 0, 5)
    {
        cin >> arr[i];
        t += arr[i];
    }
    if (t / 5 >= 7)
        out(0);
    else
    {
        sort(all(arr));
        ll ans = 0;
        rep(i, 0, 5)
        {
            t -= arr[i];

            t += 10;
            ans += 100;

            if (t / 5 >= 7)
            {
                out(ans);
                return;
            }
        }
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