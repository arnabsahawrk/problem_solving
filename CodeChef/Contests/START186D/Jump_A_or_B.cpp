/*   Author: Arnab Saha  Date: 05/14/2025 [20:59:20]   */
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
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    if (n > m || n * b < m)
        out("No");
    else if (n * a == m || n * b == m)
        out("Yes");
    else
    {
        ll x = b * n;
        ll c = n, d = 0;

        while (x >= m)
        {
            x -= b;
            x += a;

            c--, d++;

            if (x == m && (c + d == n))
            {
                out("Yes");
                return;
            }

            if (c == 0)
                break;
        }

        out("No");
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