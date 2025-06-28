/*   Author: Arnab Saha  Date: 06/27/2025 [14:11:49]   */
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

vb sieve(1e6, true);
void arnabsahawrk()
{
    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        if (sieve[x])
            cout << x << " is a Prime Number." << endl;
        else
            cout << x << " not a Prime Number." << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (ll i = 2; i * i <= sz(sieve); i++)
    {
        if (sieve[i])
        {
            for (ll j = i * i; j < sz(sieve); j += i)
                sieve[j] = false;
        }
    }

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}