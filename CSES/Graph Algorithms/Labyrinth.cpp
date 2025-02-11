#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> adj_mat(n, vector<char>(m));
    pair<int, int> A;
    pair<int, int> B;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> adj_mat[i][j];

            if (adj_mat[i][j] == 'A')
                A = {i, j};
            else if (adj_mat[i][j] == 'B')
                B = {i, j};
        }
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<int>> level(n, vector<int>(m, -1));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    vector<vector<char>> movesTaken(n, vector<char>(m, ' '));
    queue<pair<int, int>> q;

    q.push(A);
    visited[A.first][A.second] = true;
    level[A.first][A.second] = 0;

    int dRow[4] = {0, 1, 0, -1};
    int dCol[4] = {-1, 0, 1, 0};
    char moveDir[4] = {'L', 'D', 'R', 'U'};

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ni = par.first + dRow[i];
            int nj = par.second + dCol[i];

            bool valid = (ni >= 0 && ni < n) && (nj >= 0 && nj < m);

            if (valid && !visited[ni][nj] && adj_mat[ni][nj] != '#')
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                parent[ni][nj] = {par.first, par.second};
                movesTaken[ni][nj] = moveDir[i];
                level[ni][nj] = level[par.first][par.second] + 1;
            }
        }
    }

    if (visited[B.first][B.second])
    {
        cout << "YES" << endl;
        cout << level[B.first][B.second] << endl;

        int i = B.first, j = B.second;
        string path;

        while (i != A.first || j != A.second)
        {
            path.push_back(movesTaken[i][j]);
            auto temp = parent[i][j];
            i = temp.first;
            j = temp.second;
        }

        reverse(path.begin(), path.end());

        cout << path << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
