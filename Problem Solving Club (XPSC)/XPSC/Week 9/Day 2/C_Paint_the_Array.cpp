/*   Author: Arnab Saha  Date: 05/25/2025 [22:45:23]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
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
    ll n;
    cin >> n;

    vll red, blue;
    bool f = true;
    while (n--)
    {
        ll x;
        cin >> x;

        if (f)
        {
            red.eb(x);
            f = false;
        }
        else
        {
            blue.eb(x);
            f = true;
        }
    }

    ll bGcd = blue.front(), rGcd = red.front();
    each(x, blue) bGcd = __gcd(bGcd, x);
    each(x, red) rGcd = __gcd(rGcd, x);

    f = true;
    each(x, red)
    {
        if (x % bGcd == 0)
        {
            f = false;
            break;
        }
    }

    if (f)
    {
        out(bGcd);
        return;
    }

    f = true;
    each(x, blue)
    {
        if (x % rGcd == 0)
        {
            f = false;
            break;
        }
    }

    if (f)
    {
        out(rGcd);
        return;
    }

    out(0);
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