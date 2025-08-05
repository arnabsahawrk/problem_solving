/*   Author: Arnab Saha  Date: 08/05/2025 [23:55:19]   */
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
bool vis[N];
int cats[N];
int ans = 0;

void dfs(int node, int cat, int m)
{
    vis[node] = false;

    if (cat > m)
        return;
    else if (adj[node].size() == 1 && node != 1)
    {
        ans++;
        return;
    }

    for (int u : adj[node])
    {
        if (vis[u])
        {
            if (cats[u])
                dfs(u, cat + 1, m);
            else
                dfs(u, 0, m);
        }
    }
}

void arnabsahawrk()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> cats[i];
        vis[i] = true;
    }

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    dfs(1, cats[1], m);

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