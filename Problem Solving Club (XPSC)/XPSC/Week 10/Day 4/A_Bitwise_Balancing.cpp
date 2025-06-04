/*   Author: Arnab Saha  Date: 06/04/2025 [19:02:51]   */
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
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rrep(i, a, b) for (ll i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define endl '\n'
#define out(x) cout << x << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

bool check_bit(ll n, ll k)
{
    return (n >> k) & 1LL;
}

ll on_bit(ll n, ll k)
{
    return n | (1LL << k);
}

ll off_bit(ll n, ll k)
{
    return n & ~(1LL << k);
}

int main()
{
    fast_IO;

    auto arnabsahawrk = [&]()
    {
        ll b, c, d;
        cin >> b >> c >> d;

        ll msb = max({__lg(b), __lg(c), __lg(d)});

        ll a = b;
        rep(i, 0, msb + 1)
        {
            if ((check_bit(d, i) && check_bit(c, i)))
                a = off_bit(a, i);

            if (check_bit(d, i) && !check_bit(b, i))
                a = on_bit(a, i);
        }

        if ((b | a) - (c & a) == d)
            out(a);
        else
            out(-1);
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}