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

int main()
{
    fast_io;

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        if (n == m)
            cout << l << " " << r << endl;
        else
        {
            if (m <= r)
                cout << 0 << " " << m << endl;
            else if (m <= l)
                cout << -m << " " << 0 << endl;
            else
            {
                m -= r;

                cout << -m << " " << r << endl;
            }
        }
    }

    return 0;
}