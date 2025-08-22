/*   Author: Arnab Saha  Date: 08/22/2025 [21:55:57]   */
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
const int N = (1 << 17);
int a[N], seg_t[2 * N];

void init(int node, int begin, int end, int ops)
{
    if (begin == end)
    {
        seg_t[node] = a[begin];
        return;
    }

    int mid = begin + (end - begin) / 2, left = 2 * node, right = 2 * node + 1;

    init(left, begin, mid, ops ^ 1);
    init(right, mid + 1, end, ops ^ 1);

    if (ops)
        seg_t[node] = seg_t[left] ^ seg_t[right];
    else
        seg_t[node] = seg_t[left] | seg_t[right];
}

void update(int node, int begin, int end, int ops, int p, int b)
{
    if (end < p || begin > p)
        return;
    if (begin == end)
    {
        seg_t[node] = b;
        return;
    }

    int mid = begin + (end - begin) / 2, left = 2 * node, right = 2 * node + 1;

    update(left, begin, mid, ops ^ 1, p, b);
    update(right, mid + 1, end, ops ^ 1, p, b);

    if (ops)
        seg_t[node] = seg_t[left] ^ seg_t[right];
    else
        seg_t[node] = seg_t[left] | seg_t[right];
}

void arnabsahawrk()
{
    int n, m;
    cin >> n >> m;

    int x = 1;
    if (n & 1)
        x = 0;
    n = (1 << n);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    init(1, 1, n, x);

    while (m--)
    {
        int p, b;
        cin >> p >> b;

        update(1, 1, n, x, p, b);
        out(seg_t[1]);
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