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

    string s, rslt;
    cin >> s;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            int a = s[--i] - '0', b = s[--i] - '0';
            int x = (b * 10) + a - 1;

            rslt.pb('a' + x);
        }
        else
        {
            int x = s[i] - '0' - 1;

            rslt.pb('a' + x);
        }
    }

    reverse(all(rslt));

    cout << rslt << endl;
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