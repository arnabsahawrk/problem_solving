/*   Author: Arnab Saha  Date: 08/10/2025 [23:49:55]   */
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

const int N = 1e10;

void arnabsahawrk()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    int ans = N;
    auto ok = [&](int press)
    {
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (x < k)
            {
                if (arr[i] < press)
                {
                    if (arr[i] < k - x)
                        x += arr[i], y += (arr[i] + 1);
                    else
                        y += (k - x), x += arr[i];
                }
                else
                {
                    if (press < k - x)
                        x += press, y += press;
                    else
                        y += (k - x), x += press;
                }
            }
            else
                break;
        }

        if (x >= k)
        {
            ans = min(ans, y);
            return true;
        }
        else
            return false;
    };

    int l = 1, r = N;
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (ok(m))
            r = m - 1;
        else
            l = m + 1;
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