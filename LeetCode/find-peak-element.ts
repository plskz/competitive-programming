// https://leetcode.com/problems/find-peak-element/solutions/3349821/javascript-typescript-solution/

// Solution 1: O(log n)
function findPeakElement(nums: number[]): number {
  let l = 0;
  let r = nums.length - 1;

  while (l < r) {
    let mid = Math.floor(l + (r - l) / 2);
    if (nums[mid] < nums[mid + 1]) {
      l = mid + 1;
    } else {
      r = mid;
    }
  }

  return l;
}

// Solution 2: O(n)
function findPeakElement2(nums: number[]): number {
  return nums.indexOf(Math.max(...nums));
}
