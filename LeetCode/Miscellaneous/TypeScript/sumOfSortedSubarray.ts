function rangeSum(
  nums: number[],
  n: number,
  left: number,
  right: number
): number {
  if (
    nums.length !== n ||
    !nums.every((value) => Number.isInteger(value) && value > 0)
  )
    throw new Error("False input");

  let MOD = 10 ** 9 + 7;
  const subArraySum: number[] = [];

  for (let i = 0; i < n; i++) {
    let sum = 0;
    for (let j = i; j < n; j++) {
      sum += nums[j];
      subArraySum.push(sum);
    }
  }

  subArraySum.sort((a, b) => a - b);

  let result = 0;
  for (let l = left - 1; l < right; l++) {
    result = (result + subArraySum[l]) % MOD;
  }

  return result;
}
