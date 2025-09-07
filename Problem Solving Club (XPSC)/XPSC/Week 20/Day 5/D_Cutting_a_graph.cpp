/*   Author: Arnab Saha  Date: 09/07/2025 [20:47:23]   */
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
    vector<int> parent, rank;
    DSU(int n) : parent(n, -1), rank(n, 0)
    {
        for (int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int find(int node)
    {
        return parent[node] == node ? node : parent[node] = find(parent[node]);
    }

    void Union(int u, int v)
    {
        if ((u = find(u)) == (v = find(v)))
            return;

        if (rank[u] > rank[v])
            swap(u, v);
        else if (rank[u] == rank[v])
            rank[v]++;

        parent[u] = parent[v];
    }
};

void arnabsahawrk()
{
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
    }

    vector<tuple<string, int, int>> a;
    for (int i = 1; i <= k; i++)
    {
        string query;
        int u, v;
        cin >> query >> u >> v;

        a.push_back({query, u, v});
    }

    reverse(a.begin(), a.end());

    DSU D(n + 1);
    vector<string> ans;
    for (auto [query, u, v] : a)
    {
        if (query == "cut")
            D.Union(u, v);
        else
            ans.push_back((D.find(u) == D.find(v) ? "YES" : "NO"));
    }

    reverse(ans.begin(), ans.end());
    for (auto s : ans)
        out(s);
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