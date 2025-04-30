/*   Author: Arnab Saha  Date: 04/30/2025 [13:54:27]   */
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
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fst first
#define snd second

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll k, n, m;
    cin >> k >> n >> m;

    vll a(n), b(m);
    rep(i, 0, n) cin >> a[i];
    rep(j, 0, m) cin >> b[j];

    vll ans;
    ll i = 0, j = 0, c = k;
    while (i < n || j < m)
    {
        if (i < n && a[i] == 0)
        {
            ans.eb(0);
            i++;
            c++;
        }
        else if (j < m && b[j] == 0)
        {
            ans.eb(0);
            j++;
            c++;
        }
        else if (i < n && a[i] <= c)
            ans.eb(a[i++]);
        else if (j < m && b[j] <= c)
            ans.eb(b[j++]);
        else
            break;
    }

    if (ans.size() < n + m)
        cout << -1;
    else
        each(x, ans) cout << x << " ";

    cout << endl;
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