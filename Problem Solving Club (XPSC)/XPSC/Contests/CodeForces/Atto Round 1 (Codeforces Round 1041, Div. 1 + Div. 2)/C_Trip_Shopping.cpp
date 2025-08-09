/*   Author: Arnab Saha  Date: 08/07/2025 [23:04:45]   */
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
    int n, k;
    cin >> n >> k;

    ll a[n + 1], b[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    pair<ll, ll> diff[n + 1];
    for (int i = 1; i <= n; i++)
    {
        diff[i] = {a[i] + b[i], i};
    }

    sort(diff + 1, diff + n + 1);

    ll curr = LLONG_MAX, i = 1, j = 2;
    for (int l = 1; l <= n - 1; l++)
    {
        if (diff[l + 1].first - diff[l].first < curr && diff[l].second < diff[l + 1].second)
        {
            curr = diff[l + 1].first - diff[l].first;
            i = diff[l].second;
            j = diff[l + 1].second;
        }
    }

    ll arr[4];
    arr[0] = a[i];
    arr[1] = b[i];
    arr[2] = a[j];
    arr[3] = b[j];
    sort(arr, arr + 4);

    a[i] = arr[0];
    a[j] = arr[1];

    b[i] = arr[2];
    b[j] = arr[3];

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += abs(a[i] - b[i]);
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