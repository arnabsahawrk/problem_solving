/*   Author: Arnab Saha  Date: 05/14/2025 [14:27:39]   */
#include <bits/stdc++.h>
using namespace std;

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define ld long double
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define eb emplace_back
#define sz(x) x.size()
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define endl '\n'
#define out(x) cout << x << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, k;
    cin >> n >> k;

    vector<string> vs;
    rep(i, 0, n)
    {
        string s;
        cin >> s;

        ll o = 0;
        rep(j, 0, sz(s))
        {
            if (s[j] == '1')
                o++;
        }

        if (o == 1)
            vs.eb(s);
    }

    ll cnt = 0;
    rep(i, 0, k)
    {
        rep(j, 0, sz(vs))
        {
            if (vs[j][i] == '1')
            {
                cnt++;
                break;
            }
        }
    }

    if (cnt == k)
        out("YES");
    else
        out("NO");
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