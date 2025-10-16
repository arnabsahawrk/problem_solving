/*   Author: Arnab Saha  Date: 05/31/2025 [22:16:36]   */
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

bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    fast_IO;

    auto arnabsahawrk = [&]()
    {
        ll n;
        cin >> n;

        ll one = 0, odd = 0, even = 0;
        bool f = false;
        set<ll> st;
        rep(i, 0, n)
        {
            ll x;
            cin >> x;

            if (x == 1)
                one++;
            else if (!f && isPrime(x))
                f = true;

            if (x & 1)
                odd++;
            else
                even++;

            st.insert(x);
        }
        if (st.size() == 1)
            out(0);
        else if (one != 0)
            out((n - one));
        else if (f || (odd != 0 && even != 0))
            out((n));
        else
            out((n + 1));
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}