/*   Author: Arnab Saha  Date: 07/29/2025 [18:22:57]   */
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
    int n;
    cin >> n;

    int root;
    vector<int> p[n + 1], c(n, 0);
    vector<bool> beyadop(n + 1, false);

    for (int v = 1; v <= n; v++)
    {
        int u, b;
        cin >> u >> b;

        if (u != -1)
            p[u].emplace_back(v);
        else
            root = v;

        if (b == 1)
        {
            c[u]++;
            beyadop[v] = true;
        }
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (p[i].size() == c[i] && beyadop[i])
            ans.emplace_back(i);
    }

    if (ans.empty())
        out(-1);
    else
    {
        for (int x : ans)
            cout << x << " ";
        cout << endl;
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