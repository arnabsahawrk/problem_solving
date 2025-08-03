/*   Author: Arnab Saha  Date: 08/02/2025 [20:48:51]   */
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
bool vis[N];
ll cnt[2] = {0, 0};
int level[N];

void bfs(int node)
{
    vis[node] = true;
    level[node] = level[node] + 1;
    cnt[(level[node] & 1)]++;

    queue<int> q;
    q.push(node);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (!vis[v])
            {
                q.push(v);
                level[v] = level[u] + 1;
                vis[v] = true;

                cnt[(level[v] & 1)]++;
            }
        }
    }
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    for (int i = 1; i <= n; i++)
        vis[i] = false, level[i] = 0;

    bfs(1);
    out((cnt[0] * cnt[1]) - (n - 1));
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