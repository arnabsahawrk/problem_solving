/*   Author: Arnab Saha  Date: 09/07/2025 [22:22:37]   */
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
    DSU(int n) : parent(n, -1), size(n, 1), rank(n, 0)
    {
        for (int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int find(int node)
    {
        return parent[node] == node ? node : parent[node] = find(parent[node]);
    }

    int getSize(int u)
    {
        return size[find(u)];
    }

    void Union(int u, int v)
    {
        if ((u = find(u)) == (v = (find(v))))
            return;

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

    DSU D(n + 1);
    for (int j = 1; j <= m; j++)
    {
        int k;
        cin >> k;

        vector<int> v(k);
        for (int i = 0; i < k; i++)
            cin >> v[i];

        for (int i = 0; i < k - 1; i++)
            D.Union(v[i], v[i + 1]);
    }

    for (int i = 1; i <= n; i++)
        cout << D.getSize(i) << " ";
    cout << endl;
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