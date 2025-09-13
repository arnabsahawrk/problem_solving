/*   Author: Arnab Saha  Date: 09/14/2025 [05:49:33]   */
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

struct DSU
{
    vector<int> parent, size, rank;
    DSU(int n) : parent(n + 1, -1), size(n + 1, 1), rank(n + 1, 0)
    {
        for (int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int findParent(int node)
    {
        return parent[node] == node ? node : parent[node] = findParent(parent[node]);
    }

    int getSize(int u)
    {
        return size[findParent(u)];
    }

    void unionSet(int u, int v)
    {
        if ((u = findParent(u)) == (v = findParent(v)))
            return;

        if (rank[u] > rank[v])
            swap(u, v);
        else if (rank[u] == rank[v])
            rank[v]++;

        parent[u] = v;
        size[v] += size[u];
    }
};

void arnabsahawrk()
{
    int n, m1, m2;
    cin >> n >> m1 >> m2;

    DSU mocha(n), diana(n);
    while (m1--)
    {
        int u, v;
        cin >> u >> v;

        mocha.unionSet(u, v);
    }
    while (m2--)
    {
        int u, v;
        cin >> u >> v;

        diana.unionSet(u, v);
    }

    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (mocha.findParent(i) != mocha.findParent(j) && diana.findParent(i) != diana.findParent(j))
            {
                mocha.unionSet(i, j);
                diana.unionSet(i, j);

                v.push_back({i, j});
            }
        }
    }

    out(v.size());
    for (auto x : v)
        cout << x.first << " " << x.second << endl;
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