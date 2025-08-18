/*   Author: Arnab Saha  Date: 08/18/2025 [20:54:56]   */
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
const int N = 1e5 + 7;
ll a[N], seg_t[4 * N];

void build(int node, int begin, int end)
{
    if (begin == end)
    {
        seg_t[node] = a[begin];
        return;
    }

    int mid = begin + (end - begin) / 2, left = node * 2, right = node * 2 + 1;

    build(left, begin, mid);
    build(right, mid + 1, end);

    seg_t[node] = seg_t[left] + seg_t[right];
}

void update(int node, int begin, int end, int i, int v)
{
    if (i < begin || i > end)
        return;
    else if (begin == end)
    {
        seg_t[node] = v;
        return;
    }

    int mid = begin + (end - begin) / 2, left = node * 2, right = node * 2 + 1;
    update(left, begin, mid, i, v);
    update(right, mid + 1, end, i, v);

    seg_t[node] = seg_t[left] + seg_t[right];
}

ll query(int node, int begin, int end, int l, int r)
{
    if (end < l || r < begin)
        return 0;
    else if (begin >= l && end <= r)
        return seg_t[node];

    int mid = begin + (end - begin) / 2, left = node * 2, right = node * 2 + 1;
    return query(left, begin, mid, l, r) + query(right, mid + 1, end, l, r);
}

void arnabsahawrk()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);
    while (m--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int i, v;
            cin >> i >> v;

            update(1, 1, n, i + 1, v);
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