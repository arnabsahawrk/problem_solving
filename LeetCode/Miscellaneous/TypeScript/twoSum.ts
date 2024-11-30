function twoSum(nums: number[], target: number): number[] {
  const numbsMap = new Map();
  for (let i = 0; i < nums.length; i++) {
    const difference = target - nums[i];

    if (numbsMap.has(difference)) return [numbsMap.get(difference), i];

    numbsMap.set(nums[i], i);
  }

  return [0, 1];
}
