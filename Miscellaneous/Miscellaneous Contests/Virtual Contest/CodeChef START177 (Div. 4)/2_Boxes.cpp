/*   Author: Arnab Saha  Date: 05/10/2025 [17:41:29]   */
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
    ll x, y, k;
    cin >> x >> y >> k;

    ll ans = 0, a = x, b = y, mini = inf;

    while (b >= 0)
    {
        if (abs(a - b) == k)
            mini = min(mini, ans);

        a++;
        b--;
        ans++;
    }

    ans = 0, a = x, b = y;

    while (a >= 0)
    {
        if (abs(a - b) == k)
            mini = min(mini, ans);

        a--;
        b++;
        ans++;
    }

    if (mini != inf)
        out(mini);
    else
        out(-1);
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