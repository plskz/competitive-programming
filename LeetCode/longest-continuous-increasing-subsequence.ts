// https://leetcode.com/problems/longest-continuous-increasing-subsequence/solutions/3359434/javascript-typescript-solution/

function findLengthOfLCIS(nums: number[]): number {
  let cur = 1;
  let ans = 1;

  for (let i = 1; i < nums.length; i++) {
    // if (nums[i] > nums[i - 1]) {
    //   cur += 1
    //   ans = Math.max(cur, ans)
    // } else {
    //   cur = 1;
    // }

    // same above. using ternary operator
    cur = nums[i] > nums[i - 1] ? cur + 1 : 1;
    ans = Math.max(cur, ans);
  }

  return ans;
}

// cur=1, ans=1

// [1,3,5,4,7] 3 > 1
//  0 1 2 3 4  < i=1

// cur=2, ans=2

// [1,3,5,4,7] 5 > 3
//  0 1 2 3 4  < i=2

// cur=3, ans=3

// [1,3,5,4,7] 4 > 5
//  0 1 2 3 4  < i=3

// cur=1, ans=3

// [1,3,5,4,7] 7 > 4
//  0 1 2 3 4  < i=4

// cur=2, ans=3

// using DP
function findLengthOfLCIS2(nums: number[]): number {
  const dp = new Array(nums.length).fill(1);

  for (let i = 1; i < nums.length; i++) {
    if (nums[i] > nums[i - 1]) {
      dp[i] = dp[i - 1] + 1;
    }
  }

  return Math.max(...dp);
}
