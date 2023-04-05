function minimizeArrayValue(nums: number[]): number {
  let ans = 0;
  let prefixSum = 0;

  for (let i = 0; i < nums.length; i++) {
    prefixSum += nums[i];
    ans = Math.max(ans, Math.floor((prefixSum + i) / (i + 1)));
  }

  return ans;
}
