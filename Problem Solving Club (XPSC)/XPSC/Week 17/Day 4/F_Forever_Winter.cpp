/*   Author: Arnab Saha  Date: 07/28/2025 [18:34:04]   */
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

void arnabsahawrk()
{
    int n, m;
    cin >> n >> m;

    vector<int> snowflake[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        snowflake[u].emplace_back(v);
        snowflake[v].emplace_back(u);
    }

    int x = 0, y = 0;
    for (int i = 1; i <= n; i++)
    {
        if (snowflake[i].size() == 1)
        {
            y = snowflake[i][0];

            for (int z : snowflake[y])
            {
                if (snowflake[z].size() != 1)
                {
                    x = snowflake[z].size();
                }
            }

            break;
        }
    }
    cout << x << " " << snowflake[y].size() - 1 << endl;
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