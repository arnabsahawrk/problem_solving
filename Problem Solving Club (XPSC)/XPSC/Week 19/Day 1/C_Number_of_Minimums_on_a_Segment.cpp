/*   Author: Arnab Saha  Date: 08/20/2025 [18:55:05]   */
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
const int N = 100005;
int a[N];
pair<int, int> seg_t[4 * N];

void init(int n, int b, int e)
{
    if (b == e)
    {
        seg_t[n].first = a[b];
        seg_t[n].second = 1;
        return;
    }

    int m = b + (e - b) / 2;
    int l = 2 * n, r = 2 * n + 1;

    init(l, b, m);
    init(r, m + 1, e);

    seg_t[n].first = min(seg_t[l].first, seg_t[r].first);

    seg_t[n].second = 0;

    if (seg_t[n].first == seg_t[l].first)
        seg_t[n].second += seg_t[l].second;

    if (seg_t[n].first == seg_t[r].first)
        seg_t[n].second += seg_t[r].second;
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b || i > e)
        return;
    else if (e == b)
    {
        seg_t[n].first = v;
        seg_t[n].second = 1;

        return;
    }

    int m = b + (e - b) / 2;
    int l = 2 * n, r = 2 * n + 1;

    update(l, b, m, i, v);
    update(r, m + 1, e, i, v);

    seg_t[n].first = min(seg_t[l].first, seg_t[r].first);

    seg_t[n].second = 0;

    if (seg_t[n].first == seg_t[l].first)
        seg_t[n].second += seg_t[l].second;

    if (seg_t[n].first == seg_t[r].first)
        seg_t[n].second += seg_t[r].second;
}

pair<int, int> query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
        return {INT_MAX, 1};
    else if (b >= i && e <= j)
        return seg_t[n];

    int m = b + (e - b) / 2;
    int l = 2 * n, r = 2 * n + 1;

    pair<int, int> x = query(l, b, m, i, j), y = query(r, m + 1, e, i, j);
    pair<int, int> xy;
    xy.first = min(x.first, y.first);
    xy.second = 0;

    if (xy.first == x.first)
        xy.second += x.second;

    if (xy.first == y.first)
        xy.second += y.second;

    return xy;
}

void arnabsahawrk()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    init(1, 1, n);

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

            pair<int, int> xy = query(1, 1, n, l + 1, r);

            cout << xy.first << " " << xy.second << endl;
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