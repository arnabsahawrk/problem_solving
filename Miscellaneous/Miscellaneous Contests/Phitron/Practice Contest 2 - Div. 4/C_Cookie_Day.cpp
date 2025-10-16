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
    ll n, k;
    cin >> n >> k;

    ll remain = INT_MAX;
    while (n--)
    {
        ll x;
        cin >> x;

        if (x >= k)
            remain = min(remain, x % k);
    }

    if (remain == INT_MAX)
        cout << -1 << endl;
    else
        cout << remain << endl;
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