/*   Author: Arnab Saha  Date: 08/18/2025 [18:36:21]   */
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
map<pair<int, int>, int> mp;
bool vis[N];

void dfs(int node, int w)
{
    vis[node] = false;

    for (int child : adj[node])
    {
        if (vis[child])
        {
            int x = min(child, node);
            int y = max(child, node);
            int ans;

            if (w == 2)
                ans = 5;
            else
                ans = 2;

            w = ans;
            mp[{x, y}] = ans;
            dfs(child, w);
        }
    }
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = true;
    }
    mp.clear();

    bool f = false;
    vector<pair<int, int>> ans;
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        int x = min(u, v);
        int y = max(u, v);

        ans.emplace_back(x, y);

        adj[u].emplace_back(v);
        adj[v].emplace_back(u);

        if (adj[u].size() > 2)
            f = true;
        if (adj[v].size() > 2)
            f = true;
    }

    if (f)
    {
        out(-1);
        return;
    }

    dfs(1, 2);

    for (auto x : ans)
        cout << mp[x] << " ";
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