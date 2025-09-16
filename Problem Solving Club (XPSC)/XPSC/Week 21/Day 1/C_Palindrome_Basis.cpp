/*   Author: Arnab Saha  Date: 09/16/2025 [22:41:54]   */
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

const int maxN = 4e4, N = 5e2, M = 4e4 + 7;
ll dp[N][M];
vector<int> palindrome;

void preCalculate()
{
    for (int i = 1; i <= maxN; i++)
    {
        string s = to_string(i), t = s;
        reverse(t.begin(), t.end());

        if (t == s)
            palindrome.emplace_back(i);
    }
}

ll f(int i, int sum)
{
    if (i >= palindrome.size())
        return (sum == 0);

    if (dp[i][sum] != -1)
        return dp[i][sum];

    ll ans = 0;
    if (palindrome[i] <= sum)
        ans += f(i, sum - palindrome[i]) % mod;
    ans += f(i + 1, sum) % mod;

    return dp[i][sum] = ans % mod;
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    out(f(0, n));
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    cin >> tc;
    preCalculate();
    memset(dp, -1, sizeof(dp));
    while (tc--)
        arnabsahawrk();

    checkmate;
}