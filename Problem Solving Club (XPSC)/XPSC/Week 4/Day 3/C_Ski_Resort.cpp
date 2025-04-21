#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    vi arr(n);
    rep(i, 0, n) cin >> arr[i];

    ll l = 0, r = 0, count = 0, ans = 0;
    while (r < n)
    {
        if (arr[r] > q)
        {
            l = r + 1;
            ans += (count * (count + 1)) / 2;
            count = 0;
        }

        if (r - l + 1 == k)
        {
            count++;
            l++;
        }

        r++;
    }

    ans += (count * (count + 1)) / 2;

    cout << ans << endl;
}

int main()
{
    fast_io;

    int tc;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}