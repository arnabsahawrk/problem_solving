#include <stdio.h>
int searchInsert(int *nums, int numsSize, int target)
{
    int l = 0;
    int r = numsSize - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (nums[mid] < target)
            l = mid + 1;
        else if (nums[mid] > target)
            r = mid - 1;
        else
            return mid;
    }

    return l;
}

int main()
{
    int nums[] = {1, 3, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 7;

    int result = searchInsert(nums, numsSize, target);
    printf("%d", result);

    return 0;
}
