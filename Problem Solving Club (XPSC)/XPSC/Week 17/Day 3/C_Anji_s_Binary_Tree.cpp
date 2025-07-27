/*   Author: Arnab Saha  Date: 07/28/2025 [00:06:37]   */
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

const int maxN = 3e5 + 5;
vector<int> Btree[maxN], ops(maxN);
string s;

void dfs(int root)
{
    if (Btree[root][0] != 0)
    {
        int u = Btree[root][0];
        if (s[root - 1] != 'L')
            ops[u] = ops[root] + 1;
        else
            ops[u] = ops[root];

        dfs(u);
    }

    if (Btree[root][1] != 0)
    {
        int v = Btree[root][1];
        if (s[root - 1] != 'R')
            ops[v] = ops[root] + 1;
        else
            ops[v] = ops[root];

        dfs(v);
    }
}

void arnabsahawrk()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        Btree[i].clear();
        ops[i] = 0;
    }
    cin >> s;

    for (int i = 1; i <= n; i++)
    {
        int u, v;
        cin >> u >> v;

        Btree[i].push_back(u);
        Btree[i].push_back(v);
    }

    dfs(1);
    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (!Btree[i][0] && !Btree[i][1])
            ans = min(ans, ops[i]);
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