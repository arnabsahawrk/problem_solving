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
    int n;
    cin >> n;

    ll arr[n];
    rep(i, 0, n) cin >> arr[i];

    int i = 0, count = 0;
    ll ans = 0;
    bool flag = false;
    while (i < n)
    {
        ans += abs(arr[i]);
        if (arr[i] < 0)
            flag = true;
        else if (arr[i] > 0)
        {
            if (flag)
                count++;
            flag = false;
        }

        i++;
    }

    if (flag)
        count++;

    cout << ans << " " << count << endl;
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