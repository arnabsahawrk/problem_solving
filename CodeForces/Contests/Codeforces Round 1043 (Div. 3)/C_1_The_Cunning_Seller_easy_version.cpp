/*   Author: Arnab Saha  Date: 08/21/2025 [21:00:18]   */
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

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vector<ll> arr;
    arr.push_back(1);
    while (arr.back() <= n / 3)
    {
        arr.push_back(arr.back() * 3LL);
    }

    ll x = arr.size();
    vector<ll> c(x);
    c[0] = 3;
    for (int i = 1; i < x; i++)
    {
        c[i] = 3LL * c[i - 1] + arr[i - 1];
    }

    ll ans = 0, i = 0;
    ll tmp = n;
    while (tmp > 0)
    {
        ll y = tmp % 3;
        if (y)
            ans += y * c[i];

        tmp /= 3;
        i++;
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