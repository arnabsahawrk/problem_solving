/*   Author: Arnab Saha  Date: 06/04/2025 [21:06:43]   */
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
        ll n, c;
        cin >> n >> c;

        vll a(n), b(n);
        each(i, a) cin >> i;
        each(i, b) cin >> i;

        map<ll, ll> mp;
        rep(i, 0, n)
        {
            if (mp.find(a[i]) == mp.end())
                mp[a[i]] = b[i];
            else
                mp[a[i]] = min(mp[a[i]], b[i]);
        }

        vll arr;
        each(x, mp) arr.eb(x.ss);

        sort(all(arr));

        ll ans = 0, sum = 0;
        rep(i, 0, sz(arr))
        {
            sum += arr[i];
            ans = max(ans, ((c * (i + 1)) - sum));
        }

        out(ans);
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}