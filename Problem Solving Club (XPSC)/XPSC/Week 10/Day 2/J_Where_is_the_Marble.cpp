/*   Author: Arnab Saha  Date: 06/02/2025 [18:02:01]   */
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
    ll tc = 1;

    auto arnabsahawrk = [&]()
    {
        ll n, q;
        cin >> n >> q;

        if (n == 0 && q == 0)
            return false;

        vll arr(n);
        each(i, arr) cin >> i;
        sort(all(arr));

        cout << "CASE# " << tc++ << ":" << endl;
        while (q--)
        {
            ll x;
            cin >> x;

            auto it = find(all(arr), x);

            if (it == arr.end())
                cout << x << " not found" << endl;
            else
                cout << x << " found at " << (it - arr.begin()) + 1 << endl;
        }

        return true;
    };

    bool f = true;
    while (f)
        f = arnabsahawrk();

    return 0;
}