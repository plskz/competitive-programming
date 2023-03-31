// Solution 1
function generate(numRows: number): number[][] {
  let triangle: number[][] = [];

  for (let i = 0; i < numRows; i++) {
    let row: number[] = [];

    for (let j = 0; j <= i; j++) {
      if (j === 0 || j === i) {
        row.push(1);
      } else {
        row.push(triangle[i - 1][j - 1] + triangle[i - 1][j]);
      }
    }

    triangle.push(row);
  }

  return triangle;
}

// Solution 2
function generate2(numRows: number): number[][] {
  let ans: number[][] = [];

  for (let i = 0; i < numRows; i++) {
    ans[i] = [1];

    for (let j = 1; j < i; j++) {
      ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
    }

    ans[i][i] = 1;
  }

  return ans;
}
