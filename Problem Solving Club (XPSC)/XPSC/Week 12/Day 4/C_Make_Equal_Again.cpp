/*   Author: Arnab Saha  Date: 06/17/2025 [18:20:43]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define checkmate return 0;

using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<ll>;
using vb = vector<bool>;
using vs = vector<string>;

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (ll)(x).size()
#define rep(i, a, b) for (ll i = (a); i < (b); ++i)
#define rrep(i, a, b) for (ll i = (a); i >= (b); --i)
#define each(x, a) for (auto &x : a)
#define out(x) cout << x << endl
#define endl '\n'
#define rin(v) each(i, v) cin >> i
#define pout(v)                  \
    each(x, v) cout << x << " "; \
    cout << endl

const ll inf = 1e9;
const ll linf = 1e18;
const ll mod = 1e9 + 7;

int main()
{
    fastIO;

    auto arnabsahawrk = [&]()
    {
        ll n;
        cin >> n;

        vll arr(n);
        rin(arr);

        ll i = 0, j = n - 1;
        if (arr.front() == arr.back())
        {
            while (arr[i] == arr[j] && i < j)
            {
                i++, j--;
            }

            while (arr.back() == arr[i] && i < j)
            {
                i++;
            }

            while (arr.front() == arr[j] && i < j)
            {
                j--;
            }

            if ((i == j && arr[i] == arr.front()) || i > j)
            {
                out(0);
            }
            else
            {
                out((j - i) + 1);
            }

            return;
        }

        ll mn;
        rep(i, 0, n)
        {
            if (arr[i] != arr.front())
            {
                mn = n - i;
                break;
            }
        }

        rrep(j, n - 1, 0)
        {
            if (arr[j] != arr.back())
            {
                mn = min(mn, j + 1);
                break;
            }
        }

        out(mn);
    };

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}