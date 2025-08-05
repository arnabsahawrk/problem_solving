/*   Author: Arnab Saha  Date: 08/05/2025 [18:33:54]   */
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
vector<bool> vis(N);
vector<int> leaf(N);

int dfs(int node)
{
    vis[node] = false;
    if (adj[node].size() == 1 && node != 1)
        return leaf[node] = 1;

    for (int u : adj[node])
    {
        if (vis[u])
        {
            leaf[node] += dfs(u);
        }
    }

    return leaf[node];
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = true;
        leaf[i] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        out((1LL * leaf[a] * leaf[b]));
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