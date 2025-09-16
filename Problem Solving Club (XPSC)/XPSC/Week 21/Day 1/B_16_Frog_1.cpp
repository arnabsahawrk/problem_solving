/*   Author: Arnab Saha  Date: 09/16/2025 [09:47:43]   */
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
int n, h[N], dp[N];

int f(int i)
{
    if (i == n)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int ans = INT_MAX;
    if (i + 1 <= n)
        ans = min(ans, abs(h[i] - h[i + 1]) + f(i + 1));

    if (i + 2 <= n)
        ans = min(ans, abs(h[i] - h[i + 2]) + f(i + 2));

    return dp[i] = ans;
}

void arnabsahawrk()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> h[i], dp[i] = -1;

    /*dp[1] = 0;
    dp[2] = abs(h[1] - h[2]);

    for (int i = 3; i <= n; i++)
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));

    out(dp[n]);*/

    out(f(1));
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