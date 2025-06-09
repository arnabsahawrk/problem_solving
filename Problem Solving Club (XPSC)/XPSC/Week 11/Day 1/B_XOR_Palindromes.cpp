/*   Author: Arnab Saha  Date: 06/09/2025 [01:53:03]   */
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

int main()
{
    fast_IO;

    auto arnabsahawrk = [&]()
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll one = 0, zero = 0;
        rep(i, 0, n)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }

        bool f = true;
        ll i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                f = false;
                break;
            }
            i++, j--;
        }

        if (f)
            cout << 0;

        rep(i, 1, n + 1)
        {
            if (i & 1)
            {
                if (i <= one)
                {
                    ll x = one - i;

                    if()
                }
                else
                {
                }
            }
            else
            {
                if (i <= one)
                {
                    if ((zero & 1 && n & 1) || (zero % 2 == 0 && n % 2 == 0))
                        cout << 1;
                }
                else
                {
                    if ((zero & 1 && n & 1) || (zero % 2 == 0 && n % 2 == 0))
                        cout << 1;
                }
            }
        }
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}