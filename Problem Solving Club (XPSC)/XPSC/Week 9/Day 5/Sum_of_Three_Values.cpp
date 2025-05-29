/*   Author: Arnab Saha  Date: 05/29/2025 [18:52:09]   */
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

int main()
{
    fast_IO;

    auto arnabsahawrk = [&]()
    {
        ll n, x;
        cin >> n >> x;

        vector<pll> arr(n);
        rep(i, 0, n)
        {
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }

        if (n <= 2)
        {
            out("IMPOSSIBLE");
            return;
        }

        sort(all(arr));

        rep(i, 0, n - 2)
        {
            ll sum = 0, l = i + 1, r = n - 1;
            sum = arr[i].first + arr[l].first + arr[r].first;

            while (l < r)
            {
                if (sum == x)
                {
                    cout << arr[i].second << " " << arr[l].second << " " << arr[r].second << endl;
                    return;
                }
                else if (sum > x)
                {
                    sum -= arr[r].first;
                    r--;
                    sum += arr[r].first;
                }
                else
                {
                    sum -= arr[l].first;
                    l++;
                    sum += arr[l].first;
                }
            }
        }

        out("IMPOSSIBLE");
    };

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}