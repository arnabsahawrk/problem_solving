function removeDuplicates(nums: number[]): number {
  let k = 1;

  for (let i = k; i < nums.length; i++) {
    if (nums[i] !== nums[i - 1]) {
      nums[k] = nums[i];
      k++;
    }
  }

  return k;
}
