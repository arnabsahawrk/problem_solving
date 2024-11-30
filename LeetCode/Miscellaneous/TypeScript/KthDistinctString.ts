function kthDistinct(arr: string[], k: number): string {
  // to speed up for corner cases
  if (arr.length === 1 && k === 1) return arr[0];
  if (arr.length < k) return "";

  let distinct = 0; // number of distinct elements
  const map = new Map();

  for (let i = 0; i < arr.length; i++) {
    if (!map.has(arr[i])) map.set(arr[i], 1);
    else map.set(arr[i], map.get(arr[i]) + 1);
  }

  for (let [key, value] of map) {
    if (value === 1) distinct += 1; // element is distinct
    if (distinct === k) return key;
  }

  return "";
}
