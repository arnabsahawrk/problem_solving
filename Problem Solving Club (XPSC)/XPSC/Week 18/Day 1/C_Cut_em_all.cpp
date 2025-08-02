/*   Author: Arnab Saha  Date: 08/02/2025 [00:24:06]   */
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

vector<int> adj[N];
int dp[N] = {1};

void dfs(int node, int par)
{
    for (int x : adj[node])
    {
        if (x == par)
            continue;

        dfs(x, node);
        dp[node] += dp[x];
    }
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    if (n & 1)
    {
        out(-1);
        return;
    }

    for (int i = 1; i <= n; i++)
        dp[i]++;

    dfs(1, -1);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dp[i] % 2 == 0)
            ans++;
    }

    out(ans - 1);
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