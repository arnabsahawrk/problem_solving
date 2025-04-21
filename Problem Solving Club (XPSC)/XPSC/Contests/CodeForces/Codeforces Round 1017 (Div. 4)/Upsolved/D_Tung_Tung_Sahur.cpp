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
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size(), m = s2.size();
    vector<pair<char, int>> p, s;

    for (int i = 0; i < n; i++)
    {
        char curr = s1[i];
        int cnt = 0;
        while (i < n)
        {
            if (s1[i] != curr)
                break;

            cnt++;
            i++;
        }

        p.pb({curr, cnt});
        i--;
    }

    for (int i = 0; i < m; i++)
    {
        char curr = s2[i];
        int cnt = 0;
        while (i < m)
        {
            if (s2[i] != curr)
                break;

            cnt++;
            i++;
        }

        s.pb({curr, cnt});
        i--;
    }

    n = p.size(), m = s.size();

    if (n != m)
        cout << "NO" << endl;
    else
    {
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if ((p[i].first != s[i].first) || (s[i].second < p[i].second || s[i].second > p[i].second * 2))
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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