#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int> pq;

        while (!nums.empty())
        {
            pq.push(nums.back());
            nums.pop_back();
        }

        while (--k)
            pq.pop();

        return pq.top();
    }
};