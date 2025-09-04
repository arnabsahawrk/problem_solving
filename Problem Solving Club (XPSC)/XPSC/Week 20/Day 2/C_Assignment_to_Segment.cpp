/*   Author: Arnab Saha  Date: 09/04/2025 [18:41:07]   */
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
int seg[4 * N], lazy[4 * N];

void propagation(int n, int b, int e)
{
    if (lazy[n] == -1)
        return;

    seg[n] = lazy[n];
    if (b != e)
    {
        int l = 2 * n, r = 2 * n + 1;
        lazy[l] = lazy[n], lazy[r] = lazy[n];
    }
    lazy[n] = -1;
}

void init(int n, int b, int e)
{
    lazy[n] = -1;
    if (b == e)
    {
        seg[n] = 0;
        return;
    }

    int m = b + (e - b) / 2, l = 2 * n, r = 2 * n + 1;
    init(l, b, m), init(r, m + 1, e);
    seg[n] = 0;
}

void update(int n, int b, int e, int i, int j, int v)
{
    propagation(n, b, e);
    if (e < i || b > j)
        return;
    else if (b >= i && e <= j)
    {
        lazy[n] = v;
        return;
    }

    int m = b + (e - b) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, m, i, j, v), update(r, m + 1, e, i, j, v);
    seg[n] = 0;
}

int query(int n, int b, int e, int i)
{
    propagation(n, b, e);
    if (e < i || b > i)
        return -1;
    else if (b == e)
        return seg[n];

    int m = b + (e - b) / 2, l = 2 * n, r = 2 * n + 1;
    return max(query(l, b, m, i), query(r, m + 1, e, i));
}

void arnabsahawrk()
{
    int n, m;
    cin >> n >> m;

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
            int i;
            cin >> i;

            out(query(1, 1, n, i + 1));
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