#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> distinctDifferenceArray(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> prefix;
        unordered_map<int, int> suffix;
        vector<int> deff;

        for (int i = 0; i < n; i++)
            suffix[nums[i]]++;

        for (int i = 0; i < n; i++)
        {
            suffix[nums[i]]--;

            if (suffix[nums[i]] == 0)
                suffix.erase(nums[i]);

            prefix[nums[i]]++;

            deff.push_back(prefix.size() - suffix.size());
        }

        return deff;
    }
};