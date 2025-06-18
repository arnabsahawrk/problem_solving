/*   Author: Arnab Saha  Date: 06/18/2025 [10:32:22]   */
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

        ll mn = *min_element(all(arr)), mx = *max_element(all(arr));
        if (mn == mx)
        {
            out(0);
        }
        else if (arr.front() == arr.back())
        {
            ll i = 0, j = n - 1;
            while (arr.front() == arr[j] || arr.back() == arr[i])
            {
                if (arr.front() == arr[j])
                    j--;

                if (arr.back() == arr[i])
                    i++;
            }

            out((j - i) + 1);
        }
        else
        {
            ll i = 0, j = n - 1;
            while (arr.front() == arr[i] || arr.back() == arr[j])
            {
                if (arr.front() == arr[i])
                    i++;

                if (arr.back() == arr[j])
                    j--;
            }

            out(min((n - i), (j + 1)));
        }
    };

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}