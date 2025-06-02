/*   Author: Arnab Saha  Date: 06/02/2025 [20:19:23]   */
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
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        ll mx = 0;
        rep(i, 0, n)
        {
            char c = s[i];
            ll count = 0;
            while (i < n && s[i] == c)
            {
                count++, i++;
            }

            mx = max(count, mx);
            i--;
        }

        cout << mx << " ";
        string str;
        ll i = n - 1;
        char c = s[i];
        while (i >= 0 && s[i] == c)
        {
            str.push_back(c);
            i--;
        }
        ll newMx = 0;

        while (q--)
        {
            cin >> c;
            if (str.back() == c)
            {
                str.push_back(c);
                newMx = sz(str);
                mx = max(newMx, mx);
            }
            else
            {
                str = "";
                str.push_back(c);
                newMx = sz(str);
                mx = max(newMx, mx);
            }

            cout << mx << " ";
        }

        cout << endl;
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}