#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> parent, size;
    DSU(int n)
    {
        parent.resize(n + 1);
        size.assign(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int x)
    {
        if (x == parent[x])
            return x;
        return parent[x] = find(parent[x]);
    }
    void unite(int a, int b)
    {
        a = find(a), b = find(b);
        if (a != b)
        {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    DSU dsu(n);
    vector<int> deg(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        dsu.unite(u, v);
        deg[u]++, deg[v]++;
    }

    unordered_map<int, vector<int>> comps;
    for (int i = 1; i <= n; i++)
    {
        comps[dsu.find(i)].push_back(i);
    }

    int ans = 0;
    for (auto &kv : comps)
    {
        bool isCycle = true;
        for (int node : kv.second)
        {
            if (deg[node] != 2)
            {
                isCycle = false;
                break;
            }
        }
        if (isCycle)
            ans++;
    }

    cout << ans << "\n";
    return 0;
}
