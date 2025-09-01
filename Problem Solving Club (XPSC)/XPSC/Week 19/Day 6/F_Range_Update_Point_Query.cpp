/*   Author: Arnab Saha  Date: 09/01/2025 [19:25:39]   */
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

    seg[n] = max(seg[l], seg[r]);
}

void update(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
        return;
    else if (seg[n] < 10)
        return;
    else if (b == e)
    {
        string d = to_string(seg[n]);
        int x = 0;
        for (int k = 0; k < d.size(); k++)
            x += (d[k] - '0');

        seg[n] = x;
        return;
    }

    int m = b + (e - b) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, m, i, j), update(r, m + 1, e, i, j);
    seg[n] = max(seg[l], seg[r]);
}

void query(int n, int b, int e, int x)
{
    if (e < x || x < b)
        return;
    else if (b == e)
    {
        out(seg[n]);
        return;
    }

    int m = b + (e - b) / 2, l = 2 * n, r = 2 * n + 1;

    query(l, b, m, x);
    query(r, m + 1, e, x);
}

void arnabsahawrk()
{
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    init(1, 1, n);

    while (q--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int l, r;
            cin >> l >> r;

            update(1, 1, n, l, r);
        }
        else
        {
            int x;
            cin >> x;

            query(1, 1, n, x);
        }
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