/*   Author: Arnab Saha  Date: 07/31/2025 [00:15:24]   */
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

int ans = 0;
vector<int> arr;

void call(int l1, int r1, int l2, int r2)
{

    int mx = INT_MIN;
    for (int i = l1; i <= r1; i++)
        mx = max(mx, arr[i]);

    int mn = INT_MAX;
    for (int i = l2; i <= r2; i++)
        mn = min(mn, arr[i]);

    if (mx > mn)
    {
        for (int i = l1, j = l2; i <= r1 && j <= r2; i++, j++)
            swap(arr[i], arr[j]);

        ans++;
    }

    if (l1 == r1 || l2 == r2)
        return;

    int mid1 = (l1 + r1) / 2;
    int mid2 = (l2 + r2) / 2;

    call(l1, mid1, mid1 + 1, r1);
    call(l2, mid2, mid2 + 1, r2);
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    arr.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    ans = 0;

    if (is_sorted(arr.begin() + 1, arr.begin() + n + 1))
    {
        out(ans);
        return;
    }

    int mid = n / 2;
    call(1, mid, mid + 1, n);

    if (is_sorted(arr.begin() + 1, arr.begin() + n + 1))
        out(ans);
    else
        out(-1);
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