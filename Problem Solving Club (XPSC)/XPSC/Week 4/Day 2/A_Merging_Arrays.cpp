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
    int n, m;
    cin >> n >> m;

    vi arr(n), arr2(m), v;
    rep(i, 0, n) cin >> arr[i];
    rep(j, 0, m) cin >> arr2[j];

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] <= arr2[j])
        {
            v.pb(arr[i]);
            i++;
        }
        else
        {
            v.pb(arr2[j]);
            j++;
        }
    }

    if (i < n)
    {
        while (i < n)
        {
            v.pb(arr[i]);
            i++;
        }
    }
    else
    {
        while (j < m)
        {
            v.pb(arr2[j]);
            j++;
        }
    }

    rep(i, 0, n + m) cout << v[i] << " ";
}

int main()
{
    fast_io;

    solve();

    return 0;
}