/*   Author: Arnab Saha  Date: 05/08/2025 [19:47:31]   */
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
#define yes(opt) cout << opt << endl
#define no(opt) cout << opt << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, k;
    cin >> n >> k;

    vll s(n + 1, 0);
    rep(i, n - k + 1, n + 1) cin >> s[i];

    if (k == 1)
    {
        yes("Yes");
        return;
    }

    vll a(n + 1, 0);
    rrep(i, n, n - k + 2)
    {
        a[i] = (s[i] - s[i - 1]);
    }

    if (!is_sorted(a.begin() + n - k + 2, a.end()))
    {
        no("No");
        return;
    }

    rrep(i, n - k + 1, 1)
    {
        a[i] = a[i + 1];
        s[i - 1] = s[i] - a[i];
    }

    a[1] = s[1];

    if (is_sorted(a.begin() + 1, a.end()))
        yes("Yes");
    else
        no("No");
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