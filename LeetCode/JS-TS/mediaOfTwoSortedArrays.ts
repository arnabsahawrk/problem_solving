function findMedianSortedArrays(nums1: number[], nums2: number[]): number {
  const mergedArr = [...nums1, ...nums2].sort((a, b) => a - b);
  const arrMiddle = mergedArr.length / 2;
  return mergedArr.length % 2 === 1
    ? mergedArr[arrMiddle - 0.5]
    : (mergedArr[arrMiddle] + mergedArr[arrMiddle - 1]) / 2;
}
