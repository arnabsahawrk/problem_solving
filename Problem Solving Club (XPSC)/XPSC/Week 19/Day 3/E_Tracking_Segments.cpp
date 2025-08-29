/*   Author: Arnab Saha  Date: 08/29/2025 [20:18:52]   */
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
int seg[4 * N];

void init(int node, int begin, int end)
{
    if (begin == end)
    {
        seg[node] = 0;
        return;
    }

    int mid = begin + (end - begin) / 2, left = 2 * node, right = 2 * node + 1;
    init(left, begin, mid);
    init(right, mid + 1, end);
    seg[node] = 0;
}

void update(int node, int begin, int end, int q)
{
    if (end < q || begin > q)
        return;
    else if (begin == end)
    {
        seg[node] = 1;
        return;
    }

    int mid = begin + (end - begin) / 2, left = 2 * node, right = 2 * node + 1;
    update(left, begin, mid, q);
    update(right, mid + 1, end, q);
    seg[node] = seg[left] + seg[right];
}

int query(int node, int begin, int end, int l, int r)
{
    if (end < l || begin > r)
        return 0;
    else if (begin >= l && end <= r)
        return seg[node];

    int mid = begin + (end - begin) / 2, left = 2 * node, right = 2 * node + 1;

    return query(left, begin, mid, l, r) + query(right, mid + 1, end, l, r);
}

void arnabsahawrk()
{
    int n, m, q;
    cin >> n >> m;

    struct M
    {
        int l, r;
    };

    vector<M> a(m);
    for (auto &x : a)
        cin >> x.l >> x.r;

    cin >> q;
    vector<int> queries(q);
    for (auto &x : queries)
        cin >> x;

    auto ok = [&](int mid)
    {
        init(1, 1, n);

        for (int i = 0; i <= mid; i++)
            update(1, 1, n, queries[i]);

        bool f = false;
        for (auto x : a)
        {
            int l = x.l, r = x.r, len = (r - l) + 1, one, zero;

            one = query(1, 1, n, l, r);
            zero = len - one;

            if (one > zero)
                return true;
        }

        return false;
    };

    int l = 0, r = q - 1, ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid + 1;
            r = mid - 1;
        }
        else
            l = mid + 1;
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