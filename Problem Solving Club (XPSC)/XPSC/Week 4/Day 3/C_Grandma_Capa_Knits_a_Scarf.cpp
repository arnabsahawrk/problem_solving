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

    set<char> st;
    rep(i, 0, n) st.insert(s[i]);

    int ans = n + 1;
    each(x, st)
    {
        int i = 0, j = n - 1, cnt = 0;
        while (i <= j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else if (s[i] == x)
            {
                cnt++;
                i++;
            }
            else if (s[j] == x)
            {
                cnt++;
                j--;
            }
            else
            {
                cnt = n + 1;
                break;
            }
        }

        ans = min(ans, cnt);
    }

    if (ans == n + 1)
        cout << -1 << endl;
    else
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