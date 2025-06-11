/*   Author: Arnab Saha  Date: 06/11/2025 [09:42:31]   */
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
        ll n = sz(s);

        ll maxi, mini = inf;

        for (char c = 'a'; c <= 'z'; c++)
        {
            ll i = 0, maxi = 0;
            rep(j, 0, n)
            {
                if (s[j] != c)
                {
                    i++;

                    if (i > maxi)
                        maxi = i;
                }
                else
                    i = 0;
            }

            mini = min(maxi, mini);
        }

        if (mini)
        {
            maxi = 0;
            while (mini)
            {
                mini /= 2;
                maxi++;
            }

            out(maxi);
        }
        else
            out(0);
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}