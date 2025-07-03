/*   Author: Arnab Saha  Date: 07/03/2025 [14:07:07]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<pll, null_type, less<pll>, rb_tree_tag, tree_order_statistics_node_update>
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
#define sz(x) (ll)(x).size()
#define rep(i, a, b) for (ll i = (a); i < (b); ++i)
#define rrep(i, a, b) for (ll i = (a); i >= (b); --i)
#define each(x, a) for (auto &x : a)
#define rin(v) each(i, v) cin >> i
#define out(x) cout << x << endl
#define endl '\n'

const ll inf = 1e9;
const ll linf = 1e18;
const ll mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, k;
    cin >> n >> k;

    vll arr(n);
    rin(arr);

    ll l = 0, r = 0;
    pbds p;
    while (r < n)
    {
        p.insert({arr[r], r});

        if ((r - l + 1) == k)
        {
            ll pos = k / 2;
            if (k % 2 == 0)
                pos--;

            cout << (*p.find_by_order(pos)).ff << " ";
            p.erase({arr[l], l});
            l++;
        }

        r++;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}