/*   Author: Arnab Saha  Date: 07/14/2025 [01:23:52]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
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

/*
My solution was right every time, I just overlook one observation. Since, after sort the array my solution was always either largest element or the second largest element I just check it in simple ways but I overlook this (largest element or the second largest element).
x==y = 0
x>y = <x
x<y = x
*/

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll arr(n);
    rin(arr);

    sort(all(arr));

    ll ans = arr[n - 2];
    rep(i, 0, n - 1)
    {
        rep(j, i + 1, n - 1)
        {
            ans = max(ans, arr[n - 1] % (arr[i] + arr[j]));
        }
    }

    out(ans);
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}