/*   Author: Arnab Saha  Date: 06/03/2025 [01:12:33]   */
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
        string s;
        cin >> s;
        ll n = sz(s), odd = 0;
        map<char, ll> mp;
        sort(all(s));

        rep(i, 0, n)
        {
            char c = s[i];
            while (i < n && s[i] == c)
            {
                mp[c]++;
                i++;
            }

            if (mp[c] & 1)
                odd++;
            i--;
        }

        if ((n % 2 == 0 && odd > 0) || odd > 1)
            out("NO SOLUTION");
        else
        {
            string str;
            char c;
            each(x, mp)
            {
                if (x.ss & 1)
                {
                    c = x.ff;
                    continue;
                }

                rep(i, 0, x.ss / 2)
                    str += x.ff;
            }

            s = str;
            rep(i, 0, mp[c])
                s += c;

            reverse(all(str));

            s += str;

            out(s);
        }
    };

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}