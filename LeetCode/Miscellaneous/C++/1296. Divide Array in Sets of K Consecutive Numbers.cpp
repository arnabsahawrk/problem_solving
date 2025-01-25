#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPossibleDivide(vector<int> &nums, int k)
    {
        if (nums.size() % k != 0)
            return false;

        map<int, int> mp;
        for (int val : nums)
            mp[val]++;

        while (!mp.empty())
        {
            int value = mp.begin()->first;

            for (int i = value; i < value + k; i++)
            {
                if (mp.find(i) == mp.end())
                    return false;
                mp[i]--;
                if (mp[i] == 0)
                    mp.erase(i);
            }
        }

        return true;
    }
};