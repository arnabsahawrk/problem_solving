#include <stdio.h>
int removeElement(int *nums, int numsSize, int val)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            numsSize--;
            for (int j = i; j < numsSize; j++)
            {
                nums[j] = nums[j + 1];
            }
            i--;
        }
    }

    return numsSize;
}

int main()
{
    int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 2;

    int result = removeElement(nums, numsSize, target);
    printf("%d", result);

    return 0;
}
