#include <bits/stdc++.h>
using namespace std;

bool solve(int i, int target, long long dp[])
{
    if (i > target)
        return false;
    if (i == target)
        return true;

    if (dp[i] != -1)
        return dp[i];

    return dp[i] = solve(i + 3, target, dp) || solve(i + 4, target, dp);
}

int main()
{
    int t;
    cin >> t;

    long long dp[t + 1];
    for (int i = 0; i <= t; i++)
        dp[i] = -1;

    if (solve(0, t, dp))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}