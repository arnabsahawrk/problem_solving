#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int valueAfterKSeconds(int n, int k)
    {
        const int MOD = 1e9 + 7;
        vector<long long> prev(n, 1), cur(n, 1);

        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j < n; j++)
                cur[j] = (prev[j] + cur[j - 1]) % MOD;

            prev = cur;
        }

        return cur.back();
    }
};