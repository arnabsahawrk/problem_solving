/*   Author: Arnab Saha  Date: 05/24/2025 [20:40:28]   */
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

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll arr(n);
    each(i, arr) cin >> i;
    sort(all(arr));

    deque<ll> dq;
    each(x, arr) dq.eb(x);

    ll x = 0;
    rep(i, 0, n)
    {
        ll mx = *max_element(all(dq)), mn = *min_element(all(dq));

        if ((mx + mn) % 2 == 0)
            break;
        else
        {
            x++;
            dq.pop_front();
        }
    }

    deque<ll> dq2;
    each(y, arr) dq2.eb(y);

    ll y = 0;
    rep(i, 0, n)
    {
        ll mx = *max_element(all(dq2)), mn = *min_element(all(dq2));

        if ((mx + mn) % 2 == 0)
            break;
        else
        {
            y++;
            dq2.pop_back();
        }
    }

    out(min(x, y));
}

int main()
{
    fast_IO;

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}