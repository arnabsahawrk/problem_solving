/*   Author: Arnab Saha  Date: 08/04/2025 [20:45:36]   */
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

const int N = 1001, M = 1001;
int mat[N][M] = {0};
bool vis[N][M] = {false};

int dfs(int u, int v, int n, int m)
{
    if (vis[u][v] || u > n || u < 1 || v > m || v < 1 || mat[u][v] == 0)
        return 0;

    vis[u][v] = true;

    return mat[u][v] + dfs(u - 1, v, n, m) + dfs(u, v + 1, n, m) + dfs(u + 1, v, n, m) + dfs(u, v - 1, n, m);
}

void arnabsahawrk()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mat[i][j];
            vis[i][j] = false;
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (mat[i][j] > 0 && !vis[i][j])
                ans = max(dfs(i, j, n, m), ans);
        }
    }

    out(ans);
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