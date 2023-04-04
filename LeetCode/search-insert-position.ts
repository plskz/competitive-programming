// Solution 1
function searchInsert(nums: number[], target: number): number {
  let l = 0;
  let r = nums.length - 1;

  while (l < r) {
    let mid = Math.floor(l + (r - l) / 2);

    if (nums[mid] === target) return mid;

    if (nums[mid] < target) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }

  return nums[l] < target ? l + 1 : l;
}

// Solution 2
function searchInsert2(nums: number[], target: number): number {
  let l = 0;
  let r = nums.length - 1;

  while (l <= r) {
    let mid = Math.floor(l + (r - l) / 2);

    if (nums[mid] === target) return mid;

    if (nums[mid] < target) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }

  return l;
}
