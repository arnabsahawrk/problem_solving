/*   Author: Arnab Saha  Date: 08/09/2025 [19:26:27]   */
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

void arnabsahawrk()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n), pref(n, 0);
    ll mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        mx = max(mx, v[i]);
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            pref[i] += v[i];
        else
            pref[i] = pref[i - 1] + v[i];
    }

    while (q--)
    {
        ll x;
        cin >> x;

        if (x > mx)
        {
            out(-1);
            continue;
        }
        else if (x == 1)
        {
            out(1);
            continue;
        }

        auto it = lower_bound(v.begin(), v.end(), x - 1);

        if (it - v.begin() == n - 1)
            out(pref[it - v.begin()]);
        else
        {
            ll ans = 0;
            ll i = it - v.begin();

            if (i != 0)
            {
                ans += pref[i - 1];

                ans += ((n - i) * (x - 1)) + 1;
            }
            else
            {
                ans += ((n) * (x - 1)) + 1;
            }

            out(ans);
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}