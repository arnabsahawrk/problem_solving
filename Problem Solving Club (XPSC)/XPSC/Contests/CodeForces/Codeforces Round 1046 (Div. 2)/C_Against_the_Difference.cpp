/*   Author: Arnab Saha  Date: 08/28/2025 [21:09:38]   */
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

void arnabsahawrk()
{
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int maxv = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > maxv)
            maxv = a[i];
    }

    vector<vector<int>> pos(maxv + 1);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] <= maxv)
            pos[a[i]].push_back(i);
    }

    struct Intv
    {
        int s, e, w;
    };
    vector<Intv> iv;
    for (int i = 1; i <= maxv; i++)
    {
        int m = pos[i].size();
        if (m < i)
            continue;
        for (int j = 0; j + i - 1 < m; j++)
        {
            int s = pos[i][j];
            int e = pos[i][j + i - 1];
            iv.push_back({s, e, i});
        }
    }

    if (iv.empty())
    {
        out(0);
        return;
    }

    sort(iv.begin(), iv.end(), [](const Intv &A, const Intv &B)
         {
            if (A.e != B.e) return A.e < B.e;
            return A.s < B.s; });

    int m = iv.size();
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
        arr[i] = iv[i].e;

    vector<ll> ans(m);
    for (int i = 0; i < m; i++)
    {
        int s = iv[i].s;
        int j = (upper_bound(arr.begin(), arr.end(), s - 1) - arr.begin()) - 1;
        ll t = iv[i].w + (j >= 0 ? ans[j] : 0LL);
        ans[i] = max((i ? ans[i - 1] : 0LL), t);
    }

    out(ans[m - 1]);
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