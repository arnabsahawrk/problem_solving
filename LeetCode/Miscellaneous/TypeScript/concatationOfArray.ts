function getConcatenation(nums: number[]): number[] {
  let array: number[] = [...nums];
  for (let i = 0; i < nums.length; i++) {
    array.push(nums[i]);
  }

  return array;
}
