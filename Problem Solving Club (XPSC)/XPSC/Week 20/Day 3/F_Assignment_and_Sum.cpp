/*   Author: Arnab Saha  Date: 09/05/2025 [23:25:49]   */
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

const int N = 100007;
ll seg[4 * N], lazy[4 * N];

void propagation(int n, int b, int e)
{
    if (lazy[n] == -1)
        return;

    seg[n] = 1LL * (e - b + 1) * lazy[n];
    if (b != e)
        lazy[2 * n] = lazy[n], lazy[2 * n + 1] = lazy[n];

    lazy[n] = -1;
}

void init(int n, int b, int e)
{
    lazy[n] = -1;
    if (b == e)
        return;

    int m = b + (e - b) / 2;
    init(2 * n, b, m), init(2 * n + 1, m + 1, e);
}

void update(int n, int b, int e, int l, int r, int v)
{
    propagation(n, b, e);
    if (l > e || b > r)
        return;
    else if (b >= l && e <= r)
    {
        lazy[n] = v;
        propagation(n, b, e);
        return;
    }

    int m = b + (e - b) / 2;
    update(2 * n, b, m, l, r, v), update(2 * n + 1, m + 1, e, l, r, v);
    seg[n] = seg[2 * n] + seg[2 * n + 1];
}

ll query(int n, int b, int e, int l, int r)
{
    propagation(n, b, e);
    if (l > e || b > r)
        return 0;
    else if (b >= l && e <= r)
        return seg[n];

    int m = b + (e - b) / 2;
    return query(2 * n, b, m, l, r) + query(2 * n + 1, m + 1, e, l, r);
}

void arnabsahawrk()
{
    int n, m;
    cin >> n >> m;

    init(1, 1, n);

    while (m--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int l, r, v;
            cin >> l >> r >> v;

            update(1, 1, n, l + 1, r, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;

            out(query(1, 1, n, l + 1, r));
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}