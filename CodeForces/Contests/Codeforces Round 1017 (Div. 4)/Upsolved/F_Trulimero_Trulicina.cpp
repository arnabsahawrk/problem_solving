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
    int n, m, k;
    cin >> n >> m >> k;

    int grid[n][m], x = 1;
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if (x > k)
                x = 1;

            grid[i][j] = x;
            x++;
        }
    }

    if (m % k == 0)
    {
        int nxt = 0;
        for (int i = 0; i < n; i++)
        {
            rotate(grid[i], grid[i] + nxt, grid[i] + m);

            nxt++;
            if (nxt == m)
                nxt = 0;
        }
    }

    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            cout << grid[i][j] << " ";
        }

        cout << endl;
    }
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