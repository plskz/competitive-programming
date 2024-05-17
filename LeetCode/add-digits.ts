// Solution 1
function addDigits(num: number): number {
  while (num > 9) {
    let res = 0;
    while (num > 0) {
      let lastDigit = num % 10;
      res += lastDigit;
      num = Math.floor(num / 10);
    }
    num = res;
  }
  return num;
}

// Solution 2
function addDigits2(num: number): number {
  return ((num - 1) % 9) + 1;
}
