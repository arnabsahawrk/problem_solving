/*   Author: Arnab Saha  Date: 09/16/2025 [19:06:10]   */
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

const int N = 1e2 + 7, M = 1e5 + 7;
int n, a[N], dp[N][M];

int f(int i, int sum)
{
    if (i > n)
        return (sum == 0);

    if (dp[i][sum] != -1)
        return dp[i][sum];

    int ans = 0;
    if (a[i] <= sum)
        ans += f(i + 1, sum - a[i]);
    ans += f(i + 1, sum);

    return dp[i][sum] = ans;
}

void arnabsahawrk()
{
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i], sum += a[i];

    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= sum; j++)
            dp[i][j] = -1;

    vector<int> ans;
    for (int i = 1; i <= sum; i++)
    {
        if (f(1, i))
            ans.emplace_back(i);
    }

    out(ans.size());
    for (auto x : ans)
        cout << x << " ";

    cout << endl;
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