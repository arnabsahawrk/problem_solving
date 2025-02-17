#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>> adj, vector<vector<bool>> &vis, int i, int j, int &c)
{
    if (i < 0 || i >= adj.size() || j < 0 || j >= adj[0].size() || vis[i][j] || adj[i][j] == '#')
        return;

    c++;
    vis[i][j] = true;

    dfs(adj, vis, i + 1, j, c);
    dfs(adj, vis, i - 1, j, c);
    dfs(adj, vis, i, j + 1, c);
    dfs(adj, vis, i, j - 1, c);
}

int main()
{
    int tc;
    cin >> tc;

    int i = 0;
    while (tc--)
    {
        int col, row;
        cin >> col >> row;
        vector<vector<char>> adj_mat(row, vector<char>(col));
        int srcI, srcJ;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> adj_mat[i][j];
                if (adj_mat[i][j] == '@')
                {
                    srcI = i;
                    srcJ = j;
                }
            }
        }

        vector<vector<bool>> visited(row, vector<bool>(col, false));
        int numberOfCell = 0;
        dfs(adj_mat, visited, srcI, srcJ, numberOfCell);

        cout << "Case " << ++i << ": " << numberOfCell << endl;
    }

    return 0;
}