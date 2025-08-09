/*   Author: Arnab Saha  Date: 08/08/2025 [19:38:56]   */
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

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    ll mnPress = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] * n >= k)
        {
            mnPress = arr[i];
            break;
        }
    }

    ll ans = 0, t = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= mnPress || arr[i] >= k - t)
        {
            if (arr[i] >= k - t)
            {
                ans += k - t;
                t += k - t;
            }
            else
                t += mnPress, ans += mnPress;
        }
        else
            t += arr[i], ans += (arr[i] + 1);

        if (t == k)
            break;
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