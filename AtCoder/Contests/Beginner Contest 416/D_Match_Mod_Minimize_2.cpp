/*   Author: Arnab Saha  Date: 07/26/2025 [18:57:41]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define out(x) cout << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, m;
    cin >> n >> m;

    multiset<ll> a;
    vector<ll> b(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        a.insert(x);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<ll> c(n);
    for (int i = 0; i < n; i++)
    {
        ll x = m - b[i];

        auto it = a.lower_bound(x);
        if (it != a.end())
        {
            c[i] = *it;
            a.erase(it);
        }
        else
        {
            it--;
            c[i] = *it;
            a.erase(it);
        }
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ((c[i] + b[i]) % m);
    }

    out(sum);
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