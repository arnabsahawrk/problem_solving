/*   Author: Arnab Saha  Date: 08/19/2025 [21:23:26]   */
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
const int N = 501;
int grid[N][N];
pair<int, int> dir[] = {{0, -1}, {1, 0}};

void dfs(int i, int j, int n, int k, int m)
{
    if (m == 0)
        return;

    int x1 = i + dir[0].first, y1 = j + dir[0].second;
    int x2 = i + dir[1].first, y2 = j + dir[1].second;

    if (x1 >= 1 && y1 >= 1 && x1 <= n && y1 <= n && grid[x1][y1] == 0)
    {
        grid[x1][y1] = k;

        dfs(x1, y1, n, k, m - 1);
    }
    else
    {
        grid[x2][y2] = k;

        dfs(x2, y2, n, k, m - 1);
    }
}
void arnabsahawrk()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            grid[i][j] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> grid[i][i];

        dfs(i, i, n, grid[i][i], grid[i][i] - 1);
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            j == i ? cout << grid[i][j] << endl : cout << grid[i][j] << " ";
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