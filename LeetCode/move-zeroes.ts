/**
 Do not return anything, modify nums in-place instead.
 */

// Solution 1
function moveZeroes(nums: number[]): void {
  let pos = 0; // last non zero index

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] !== 0) nums[pos++] = nums[i];
  }

  for (let i = pos; i < nums.length; i++) nums[i] = 0;

  console.log(nums);
}

// Solution 2
function moveZeroes2(nums: number[]): void {
  let pos = 0;

  for (let i = 0; i < nums.length; i++) {
    if (nums[i]) {
      [nums[i], nums[pos]] = [nums[pos], nums[i]];
      pos++;
    }
  }

  console.log(nums);
}

moveZeroes([0, 1, 0, 3, 12]); // [1,3,12,0,0]
moveZeroes([0]); // [0]
moveZeroes([0, 0, 1]); // [1, 0, 0]
