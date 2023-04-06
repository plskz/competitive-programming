// Solution 1: using brute force O(n^2)
function twoSum(nums: number[], target: number): number[] {
  for (let i = 0; i < nums.length; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      if (nums[i] + nums[j] === target) return [i, j];
    }
  }

  return [];
}

// Solution 2: sort + two pointers O(nlogn)
function twoSum2(nums: number[], target: number): number[] {
  const sortedNums = [...nums].sort((a, b) => a - b);

  let l = 0;
  let r = sortedNums.length - 1;

  while (l < r) {
    const sum = sortedNums[l] + sortedNums[r];

    if (sum === target) {
      const leftIndex = nums.indexOf(sortedNums[l]);
      const rightIndex = nums.lastIndexOf(sortedNums[r]);
      return [leftIndex, rightIndex];
    }

    if (sum < target) {
      l++;
    } else {
      r--;
    }
  }

  return [];
}

// TODO: add another approach
