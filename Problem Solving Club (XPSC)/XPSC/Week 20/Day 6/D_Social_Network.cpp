/*   Author: Arnab Saha  Date: 09/08/2025 [21:20:05]   */
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

    int find(int node) { return parent[node] == node ? node : parent[node] = find(parent[node]); }

    bool same(int u, int v) { return find(u) == find(v); }

    void Union(int u, int v)
    {
        if ((u = find(u)) == (v = find(v)))
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
    int n, d, extraEdge = 0;
    cin >> n >> d;

    DSU D(n);
    for (int i = 1; i <= d; i++)
    {
        int u, v;
        cin >> u >> v;

        if (D.same(u, v))
            extraEdge++;
        else
            D.Union(u, v);

        vector<int> cnt(n + 1);
        for (int j = 1; j <= n; j++)
            cnt[D.find(j)]++;

        vector<int> cc;
        for (int j = 1; j <= n; j++)
            if (cnt[j] > 0)
                cc.push_back(cnt[j]);

        sort(cc.rbegin(), cc.rend());
        int ans = cc[0];

        for (int j = 1; j < min((int)cc.size(), extraEdge + 1); j++)
            ans += cc[j];

        out(ans - 1);
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