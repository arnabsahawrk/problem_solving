/*   Author: Arnab Saha  Date: 09/06/2025 [20:46:13]   */
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
    vector<int> parent, rank, size;
    int components;

    DSU(int n) : parent(n + 1, -1), rank(n + 1, 0), size(n + 1, 1), components(n)
    {
        for (int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int findParent(int node)
    {
        return parent[node] == node ? node : parent[node] = findParent(parent[node]);
    }

    bool isParentSame(int u, int v)
    {
        return findParent(u) == findParent(v);
    }

    int getSize(int u)
    {
        return size[findParent(u)];
    }

    int totalComponents()
    {
        return components;
    }

    void Union(int u, int v)
    {
        if ((u = findParent(u)) == (v = findParent(v)))
            return;
        else
            components--;

        if (rank[u] > rank[v])
            swap(u, v);
        else if (rank[u] == rank[v])
            rank[v]++;

        parent[u] = parent[v];
        size[v] += size[u];
    }
};

void arnabsahawrk()
{
    int n, m;
    cin >> n >> m;

    DSU D(n);

    while (m--)
    {
        string query;
        cin >> query;
        int u, v;
        cin >> u >> v;

        if (query == "union")
            D.Union(u, v);
        else
            out((D.isParentSame(u, v) ? "YES" : "NO"));
    }
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