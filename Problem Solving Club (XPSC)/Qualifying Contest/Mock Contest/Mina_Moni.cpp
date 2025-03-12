#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<int> &c, vector<int> &dp, int i)
{
    if (i < 0)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int takeOne = knapsack(c, dp, i - 1) + c[i];
    int takeTwo = knapsack(c, dp, i - 2) + c[i];

    return dp[i] = abs(takeOne - takeTwo);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> dp(n, -1);

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << knapsack(arr, dp, n - 1) << endl;
    }

    return 0;
}