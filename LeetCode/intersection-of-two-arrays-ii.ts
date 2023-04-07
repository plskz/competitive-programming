function intersect(nums1: number[], nums2: number[]): number[] {
  let map: Record<number, number> = {};
  const ans: number[] = [];

  for (const num of nums1) {
    map[num] = (map[num] || 0) + 1;
  }

  for (const num of nums2) {
    if (map[num]) {
      ans.push(num);
      map[num]--;
    }
  }
  return ans;
}

console.log(intersect([1, 2, 2, 1], [2, 2])); // [2, 2]
console.log(intersect([4, 9, 5], [9, 4, 9, 8, 4])); // [9, 4]
