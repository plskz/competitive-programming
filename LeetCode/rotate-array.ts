/**
 Do not return anything, modify nums in-place instead.
 */

// I just woke up, yes i know
function rotate(nums: number[], k: number): void {
  let n = nums.length;
  let copyArr = [...nums];

  for (let i = 0; i < n; i++) {
    nums[(i + k) % n] = copyArr[i];
  }

  console.log(nums);
}

rotate([1, 2, 3, 4, 5, 6, 7], 3); // [5,6,7,1,2,3,4]
rotate([-1, -100, 3, 99], 2); // [3,99,-1,-100]
