/*   Author: Arnab Saha  Date: 09/16/2025 [11:59:30]   */
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

const int N = 1e5 + 7;
ll n, happiness[N][4], dp[N][4];

ll f(int i, int l)
{
    if (i > n)
        return 0;

    if (dp[i][l] != -1)
        return dp[i][l];

    ll ans = 0;
    for (int k = 1; k <= 3; k++)
    {
        if (k == l)
            continue;

        if (k == 1)
            ans = max(ans, happiness[i][1] + f(i + 1, k));
        else if (k == 2)
            ans = max(ans, happiness[i][2] + f(i + 1, k));
        else
            ans = max(ans, happiness[i][3] + f(i + 1, k));
    }

    return dp[i][l] = ans;
}

void arnabsahawrk()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> happiness[i][1] >> happiness[i][2] >> happiness[i][3], dp[i][1] = dp[i][2] = dp[i][3] = -1;

    /* dp[1][0] = -1;
     out(f(1, 0));*/

    for (int i = 1; i <= 3; i++)
        dp[1][i] = happiness[1][i];

    for (int d = 1; d <= n; d++)
    {
        for (int c = 1; c <= 3; c++)
        {
            ll mx = 0;
            for (int l = 1; l <= 3; l++)
            {
                if (l != c)
                    mx = max(mx, dp[d - 1][l] + happiness[d][c]);
            }

            dp[d][c] = mx;
        }
    }

    out(max({dp[n][1], dp[n][2], dp[n][3]}));
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