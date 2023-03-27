function thirdMax(nums: number[]): number {
  const s = [...new Set<number>(nums)].sort((a, b) => b - a);

  // return s.length >= 3 ? s[2] : s[0];
  return s[2] ?? s[0]; // same above
}

console.log(thirdMax([3, 2, 1])); // 1
console.log(thirdMax([1, 2])); // 2
console.log(thirdMax([2, 2, 3, 1])); // 1
console.log(thirdMax([1, 1, 2])); // 2
