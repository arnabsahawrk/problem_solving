/*   Author: Arnab Saha  Date: 06/25/2025 [14:59:00]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

void arnabsahawrk()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(k + 1);
    for (int i = 1; i <= k; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    auto ok = [&](int m) -> bool
    {
        long long sum = 0;
        for (int i = k; i >= m; i--)
        {
            if (((n - arr[i]) + sum) < n)
                sum += (n - arr[i]);
            else
                return false;
        }

        return true;
    };

    int l = 1, r = k, ans = 0, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << k - ans + 1 << endl;
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