#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    int n;
    vector<int> parent, sz;
    DSU(int n = 0) { init(n); }
    void init(int n_)
    {
        n = n_;
        parent.resize(n + 1);
        sz.assign(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int x)
    {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }
    bool unite(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
            return false;
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
        return true;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, m1, m2;
        cin >> n >> m1 >> m2;

        vector<pair<int, int>> edgesF(m1), edgesG(m2);

        for (auto &e : edgesF)
            cin >> e.first >> e.second;
        for (auto &e : edgesG)
            cin >> e.first >> e.second;

        DSU dsuG(n);
        for (auto &e : edgesG)
            dsuG.unite(e.first, e.second);

        DSU dsuFp(n);

        int removals = 0;
        for (auto &e : edgesF)
        {
            int u = e.first, v = e.second;
            if (dsuG.find(u) != dsuG.find(v))
            {
                removals++;
            }
            else
            {
                dsuFp.unite(u, v);
            }
        }

        unordered_map<int, vector<int>> groups;
        for (int v = 1; v <= n; v++)
        {
            groups[dsuG.find(v)].push_back(v);
        }

        int additions = 0;
        for (auto &comp : groups)
        {
            auto &verts = comp.second;
            unordered_set<int> roots;
            for (int v : verts)
            {
                roots.insert(dsuFp.find(v));
            }
            int c = (int)roots.size();
            additions += c - 1;
        }

        cout << (removals + additions) << "\n";
    }
}
