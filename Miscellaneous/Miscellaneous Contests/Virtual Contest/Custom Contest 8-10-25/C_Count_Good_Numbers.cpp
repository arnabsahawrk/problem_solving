/*   Author: Arnab Saha  Date: 08/10/2025 [19:55:05]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define out(x) cout << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

const ll N = sqrt(1000000000);

bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void arnabsahawrk()
{
    ll l, r;
    cin >> l >> r;

    ll ans = 0;
    if (r < 11)
    {
        out(ans);
        return;
    }
    else if (l < 11)
        l = 11;

    for (int i = l; i <= N; i++)
    {
        if (isPrime(i))
        {
            ll x = i;

            while (x <= r)
            {
                ans++;

                x *= i;
            }
        }
    }

    out(ans);
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}