/*   Author: Arnab Saha  Date: 08/31/2025 [20:56:58]   */
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
const int N = 2e5 + 7;
int a[N], seg[4 * N];

void init(int n, int b, int e)
{
    if (b == e)
    {
        seg[n] = a[b];
        return;
    }

    int m = b + (e - b) / 2, l = 2 * n, r = 2 * n + 1;
    init(l, b, m), init(r, m + 1, e);
    seg[n] = seg[l] & seg[r];
}

int query(int n, int b, int e, int i, int j)
{
    if (e < i || b > j)
        return (1 << 30) - 1;
    else if (b >= i && e <= j)
        return seg[n];

    int m = b + (e - b) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, m, i, j) & query(r, m + 1, e, i, j);
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    init(1, 1, n);

    int q;
    cin >> q;
    while (q--)
    {
        int L, k;
        cin >> L >> k;

        int l = L, r = n, ans = -1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;

            if (query(1, 1, n, L, m) >= k)
            {
                ans = m;
                l = m + 1;
            }
            else
                r = m - 1;
        }

        (q == 0 ? cout << ans << endl : cout << ans << " ");
    }
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