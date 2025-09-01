/*   Author: Arnab Saha  Date: 09/01/2025 [20:40:44]   */
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
ll a[N], seg[4 * N], n, m;

void init(int node, int b, int e)
{
    if (b == e)
    {
        seg[node] = a[b];
        return;
    }

    int mid = b + (e - b) / 2, l = 2 * node, r = 2 * node + 1;
    init(l, b, mid), init(r, mid + 1, e);

    seg[node] = (seg[l] * seg[r]) % m;
}

ll query(int node, int b, int e, int i, int j)
{
    if (e < i || j < b)
        return 1;
    else if (b >= i && e <= j)
        return seg[node] % m;

    int mid = b + (e - b) / 2, l = 2 * node, r = 2 * node + 1;

    return (query(l, b, mid, i, j) * query(r, mid + 1, e, i, j)) % m;
}

void arnabsahawrk()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    string s;
    cin >> s;

    init(1, 1, n);
    int l = 1, r = n;
    for (int i = 0; i < n; i++)
    {
        cout << query(1, 1, n, l, r) << " ";
        if (s[i] == 'L')
            l++;
        else
            r--;
    }
    cout << endl;
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