function findMin(nums: number[]): number {
  let lo = 0;
  let hi = nums.length - 1;

  while (lo < hi) {
    let mid = Math.floor(lo + (hi - lo) / 2);
    if (nums[mid] < nums[hi]) {
      hi = mid;
    } else {
      lo = mid + 1;
    }
  }

  return nums[lo];
}
