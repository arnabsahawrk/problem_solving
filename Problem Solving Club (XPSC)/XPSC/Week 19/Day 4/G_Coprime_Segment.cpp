/*   Author: Arnab Saha  Date: 08/30/2025 [19:39:35]   */
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
const int N = 1e5 + 9;
ll a[N], seg[4 * N];

ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

void init(int node, int begin, int end)
{
    if (begin == end)
    {
        seg[node] = a[begin];
        return;
    }

    int mid = begin + (end - begin) / 2, left = 2 * node, right = 2 * node + 1;
    init(left, begin, mid);
    init(right, mid + 1, end);

    seg[node] = gcd(seg[left], seg[right]);
}

ll query(int node, int begin, int end, int l, int r)
{
    if (begin > r || end < l)
        return 0;
    else if (begin >= l && end <= r)
        return seg[node];

    int mid = begin + (end - begin) / 2, left = 2 * node, right = 2 * node + 1;
    return gcd(query(left, begin, mid, l, r), query(right, mid + 1, end, l, r));
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    init(1, 1, n);

    int ans = n + 1;
    for (int i = 1; i <= n; i++)
    {
        int l = i, r = n, good = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (query(1, 1, n, i, mid) == 1)
                good = mid, r = mid - 1;
            else
                l = mid + 1;
        }

        if (good != -1)
            ans = min(ans, good - i + 1);
    }

    if (ans > n)
        out(-1);
    else
        out(ans);
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