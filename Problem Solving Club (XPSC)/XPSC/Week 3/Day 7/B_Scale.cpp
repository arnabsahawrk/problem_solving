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
    int n, k;
    cin >> n >> k;

    int arr[n][n];
    string s;
    rep(i, 0, n)
    {
        cin >> s;
        rep(j, 0, n)
        {
            arr[i][j] = s[j] - '0';
        }
    }

    if (n == k)
        cout << arr[0][0] << endl;
    else if (k == 1)
    {
        rep(i, 0, n)
        {
            rep(j, 0, n)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        int r = n / k;
        int arr2[r][r];

        for (int i = 0, a = 0; i < r; i++, a += k)
        {
            for (int j = 0, b = 0; j < r; j++, b += k)
            {
                arr2[i][j] = arr[a][b];
            }
        }

        rep(i, 0, r)
        {
            rep(j, 0, r)
            {
                cout << arr2[i][j];
            }

            cout << endl;
        }
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