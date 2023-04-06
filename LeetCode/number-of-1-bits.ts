// https://leetcode.com/problems/number-of-1-bits/solutions/3385115/javascript-typescript-solution-explanation/

function hammingWeight(n: number): number {
  let count = 0;
  let binaryString = n.toString(2); // convert number to its binary (base 2)

  for (const char of binaryString) {
    if (char === '1') count++;
  }

  return count;
}
