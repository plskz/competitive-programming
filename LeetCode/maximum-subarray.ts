function maxSubArray(nums: number[]): number {
  let curMax = 0;
  let maxSoFar = -Infinity;

  for (let num of nums) {
    curMax = Math.max(num, curMax + num);
    maxSoFar = Math.max(maxSoFar, curMax);
  }

  return maxSoFar;
}
