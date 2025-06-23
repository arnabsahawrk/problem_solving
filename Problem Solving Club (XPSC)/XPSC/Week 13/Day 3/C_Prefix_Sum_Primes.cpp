/*   Author: Arnab Saha  Date: 06/23/2025 [14:10:23]   */
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

void arnabsahawrk()
{
    ll n;
    cin >> n;

    ll one = 0, two = 0;
    rep(i, 0, n)
    {
        ll x;
        cin >> x;

        if (x == 1)
            one++;
        else
            two++;
    }

    while (one != 0 || two != 0)
    {
        if (two != 0)
            cout << 2 << " ", two--;

        if (one != 0)
            cout << 1 << " ", one--;

        while (two != 0)
            cout << 2 << " ", two--;

        while (one != 0)
            cout << 1 << " ", one--;
    }

    // The solution is to how can implement the prime numbers using two and one prefix sum, now the question is when there is possibility that I can make most prime numbers when there is most of them are odd numbers. How can we make most odd number but doing that first 2 then 1 after that all 2 because we odd + even = odd so, with this we can make most odd numbers and then all the 1.
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