/*   Author: Arnab Saha  Date: 09/02/2025 [21:45:31]   */
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

void propagation(int node, int begin, int end)
{
    seg[node] += (1LL * (end - begin + 1) * lazy[node]);

    if (begin != end)
    {
        int left = 2 * node, right = 2 * node + 1;
        lazy[left] += lazy[node], lazy[right] += lazy[node];
    }

    lazy[node] = 0;
}

void init(int node, int begin, int end)
{
    if (begin == end)
    {
        seg[node] = 0;
        return;
    }

    int mid = begin + (end - begin) / 2, left = 2 * node, right = 2 * node + 1;
    init(left, begin, mid), init(right, mid + 1, end);
    seg[node] = 0;
}

void update(int node, int begin, int end, int l, int r, int v)
{
    propagation(node, begin, end);
    if (end < l || begin > r)
        return;
    else if (begin >= l && end <= r)
    {
        lazy[node] = v;
        propagation(node, begin, end);
        return;
    }

    int mid = begin + (end - begin) / 2, left = 2 * node, right = 2 * node + 1;
    update(left, begin, mid, l, r, v), update(right, mid + 1, end, l, r, v);
    seg[node] = seg[left] + seg[right];
}

ll query(int node, int begin, int end, int l, int r)
{
    propagation(node, begin, end);
    if (end < l || begin > r)
        return 0;
    else if (begin >= l && end <= r)
        return seg[node];

    int mid = begin + (end - begin) / 2, left = 2 * node, right = 2 * node + 1;
    return query(left, begin, mid, l, r) + query(right, mid + 1, end, l, r);
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