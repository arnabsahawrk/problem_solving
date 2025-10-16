/*   Author: Arnab Saha  Date: 08/21/2025 [21:52:06]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define out(x) cout << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

unordered_map<ll, ll> mp;
ll solve(ll n)
{
    if (n <= 0)
        return 0;

    if (mp.count(n))
        return mp[n];

    if (n < 10)
        return n * (n + 1) / 2;

    ll d = 1;
    while (d * 10 <= n)
    {
        d *= 10;
    }

    ll f = n / d, r = n % d;

    ll ans = f * solve(d - 1) + solve(r) + f * (r + 1) + (f * (f - 1)) / 2 * d;

    mp[n] = ans;
    return ans;
}

void arnabsahawrk()
{
    ll k;
    cin >> k;

    ll td = 0, ts = 0;
    for (int d = 1;; d++)
    {
        ll x = 1;
        for (int i = 1; i < d; i++)
            x *= 10;

        ll y = x * 10 - 1, gd = 9 * x * d;
        if (td + gd < k)
        {
            ts += solve(y) - solve(x - 1);
            td += gd;
        }
        else
        {
            ll r = k - td, fn = r / d, num = x + fn - 1;
            if (fn > 0)
            {
                ts += solve(num) - solve(x - 1);
            }

            ll rx = r % d;
            if (rx > 0)
            {
                ll nn = num + 1;
                string s = to_string(nn);
                for (int i = 0; i < rx; i++)
                {
                    ts += s[i] - '0';
                }
            }
            break;
        }
    }

    out(ts);
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}