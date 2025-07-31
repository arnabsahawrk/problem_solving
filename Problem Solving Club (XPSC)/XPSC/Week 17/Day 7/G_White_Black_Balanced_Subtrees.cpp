/*   Author: Arnab Saha  Date: 07/31/2025 [19:06:13]   */
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

string s;
int ans = 0;

int dp(vector<int> v[], int node)
{
    int b = s[node - 1] == 'B' ? -1 : 1;

    if (v[node].empty())
        return b;
    for (int u : v[node])
    {
        b += dp(v, u);
    }

    if (b == 0)
        ans++;

    return b;
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    ans = 0;

    vector<int> v[n + 1];

    for (int i = 2; i <= n; i++)
    {
        int u;
        cin >> u;

        v[u].emplace_back(i);
    }

    cin >> s;

    dp(v, 1);

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