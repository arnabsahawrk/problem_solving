#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> adj, int src, vector<int> &level)
{
    int nodes = adj.size();
    vector<bool> visited(nodes, false);
    queue<int> q;

    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : adj[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}

int main()
{
    int tc;
    cin >> tc;

    int i = 0;
    while (tc--)
    {
        int nodes, edges;
        cin >> nodes >> edges;
        vector<vector<int>> adj_list(nodes);

        while (edges--)
        {
            int a, b;
            cin >> a >> b;
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }

        int src, des;
        cin >> src >> des;

        vector<int> srcLevel(nodes, -1);
        vector<int> desLevel(nodes, -1);

        bfs(adj_list, src, srcLevel);
        bfs(adj_list, des, desLevel);

        int ans = INT_MIN;
        for (int j = 0; j < nodes; j++)
            ans = max(ans, srcLevel[j] + desLevel[j]);

        cout << "Case " << ++i << ": " << ans << endl;
    }

    return 0;
}