/*   Author: Arnab Saha  Date: 07/01/2025 [10:25:35]   */
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

// vb sieve(1e5 + 2, true);
// vll primes;

/*
Why did I fail with first approach?
-> Okay, So I extract all prime numbers first, with O(nloglogn) complexity then the total prime numbers are 9600 and the n value maximum 1e5. 9600 * 1e5 = 960,000,000 it is more than 1e8 in worst case it will become 10s that's I got tle.

-> let's approach with prime factorization.
*/

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll arr(n);
    rin(arr);

    /*out(sz(primes));

    ll ans = 1;
    rep(i, 0, sz(primes))
    {
        ll count = 0;
        rep(j, 0, n)
        {
            if (arr[j] % primes[i] == 0)
                count++;
        }

        ans = max(ans, count);
    }

    out(ans);*/

    // 2nd approach
    map<ll, ll> mp;
    rep(i, 0, n)
    {
        ll x = arr[i];
        for (ll j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
                mp[j]++;

            while (x % j == 0)
            {
                x /= j;
            }
        }

        if (x > 1)
            mp[x]++;
    }

    ll ans = 1;
    each(x, mp)
    {
        ans = max(x.ss, ans);
    }

    out(ans);
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /*for (ll i = 2; i * i <= sz(sieve); i++)
    {
        if (sieve[i])
        {
            for (ll j = i * i; j < sz(sieve); j += i)
                sieve[j] = false;
        }
    }

    rep(i, 2, sz(sieve))
    {
        if (sieve[i])
        {
            primes.eb(i);
        }
    }*/

    ll tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}