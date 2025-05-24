/*   Author: Arnab Saha  Date: 05/24/2025 [17:22:30]   */
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

bool check_bit(ll n, ll k)
{
    return (n >> k) & 1LL;
}

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll bits(31, 0);
    rep(i, 0, n)
    {
        ll x;
        cin >> x;

        rep(j, 0, __lg(x) + 1)
        {
            if (check_bit(x, j))
                bits[j]++;
        }
    }

    rep(i, 1, n + 1)
    {
        bool f = true;
        rep(j, 0, 31)
        {
            if (bits[j] % i)
            {
                f = false;
                break;
            }
        }

        if (f)
            cout << i << " ";
    }

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