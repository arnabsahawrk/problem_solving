/*   Author: Arnab Saha   Date: 04/25/2025 [00:59:18]   */
#include <bits/stdc++.h>
using namespace std;

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi first
#define se second

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    int f = n;
    rep(i, 0, n)
    {
        if (s[i] == '1')
        {
            f = i;
            break;
        }
    }

    bool isGood = true;
    rep(i, 0, f + 1)
    {
        if (s[i] != t[i])
        {
            cout << -1 << endl;
            isGood = false;
            break;
        }
    }

    if (isGood)
    {
        vll ans;

        rep(i, f + 1, n)
        {
            if (s[i] == '0')
            {
                ans.pb(i);
                s[i] = '1';
            }
        }

        rrep(i, n - 1, f)
        {
            if (s[i] != t[i])
                ans.pb(i);
        }

        cout << ans.size() << endl;
        each(x, ans) cout << x << " ";

        cout << endl;
    }
}

int main()
{
    fast_IO;

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}