// Solution 1
function arraySign(nums: number[]): number {
  if (nums.some((x) => !x)) return 0;

  return nums.reduce((a, b) => a * b) < 0 ? -1 : 1;
}

// Solution 2
function arraySign2(nums: number[]): number {
  let ans = 1;
  for (let i in nums) {
    if (nums[i] == 0) return 0;
    if (nums[i] < 0) ans = -ans;
  }
  return ans;
}
