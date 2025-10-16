/*   Author: Arnab Saha  Date: 08/10/2025 [22:03:07]   */
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
vector<int> adj[N];
int vis[N];
int node = 1;
int ans = 0;

void dfs(int u)
{
    vis[u] = 0;

    if (adj[u].size() == 1 && u != node)
    {
        if (adj[u][0] != node)
        {
            ans++;

            // cout << adj[u][0] << " " << u << " " << ans << endl;
        }

        return;
    }

    for (int v : adj[u])
    {
        if (vis[v])
            dfs(v);
    }
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() > mx)
            node = i, mx = adj[i].size();
    }

    dfs(node);

    // cout << node << " ";
    out(ans);

    // cout << endl;
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