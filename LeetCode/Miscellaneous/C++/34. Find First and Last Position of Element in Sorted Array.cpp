#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binarySearchFirstElement(vector<int> &a, int x)
    {
        int first = -1, start = 0, end = a.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (a[mid] < x)
                start = mid + 1;
            else if (a[mid] > x)
                end = mid - 1;
            else
            {
                first = mid;
                end = mid - 1;
            }
        }

        return first;
    }

    int binarySearchLastElement(vector<int> &a, int x)
    {
        int last = -1, start = 0, end = a.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (a[mid] < x)
                start = mid + 1;
            else if (a[mid] > x)
                end = mid - 1;
            else
            {
                last = mid;
                start = mid + 1;
            }
        }

        return last;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = binarySearchFirstElement(nums, target);
        int last = binarySearchLastElement(nums, target);

        return {first, last};
    }
};