/*   Author: Arnab Saha  Date: 07/01/2025 [12:46:47]   */
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

ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

/*
Why did I fail?
-> first of all I don't read the problem statement properly and failed to recognize that the increase number x is must be > 0, then I tried to matching the approach with given test cases so, I failed to get that n+1 can be always less than the maximum number so, the conclusion is first take out the gcd of all elements 'g' then add the n+1 element that can divide by 'g'.
*/

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll arr(n);
    rin(arr);

    if (n == 1)
    {
        out(1);
        return;
    }

    sort(all(arr));

    ll g = 0;
    rep(i, 0, n)
        g = gcd(g, (abs(arr[0] - arr[i])));

    ll x = g;
    while (true)
    {
        if (binary_search(all(arr), (arr.back() - x)))
            x += g;
        else
        {
            arr.eb((arr.back() - x));
            break;
        }
    }

    ll diff = 0;
    each(x, arr) diff += (abs(arr[n - 1] - x) / g);
    out(diff);
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