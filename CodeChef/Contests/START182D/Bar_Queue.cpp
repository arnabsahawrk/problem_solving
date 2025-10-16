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

    string s;
    cin >> s;

    if (s[0] == 'B')
        cout << 1 << endl;
    else
    {
        int g = 1, b = 0, total = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'G')
            {
                g++;
                total++;
            }
            else
            {
                b++;
                total++;
            }

            if (g * 2 < b)
                break;
        }

        cout << total << endl;
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