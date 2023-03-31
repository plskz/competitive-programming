// Solution 1
function subtractProductAndSum(n: number): number {
  let sum = 0, product = 1;

  while (n > 0) {
    let lastDigit = n % 10;
    sum += lastDigit;
    product *= lastDigit;
    n = Math.floor(n / 10);
  }

  return product - sum;
}

// Solution 2
function subtractProductAndSum2(n: number): number {
  //   let x = Array.from(String(n), Number);
  let x = String(n).split('').map(Number); // same above

  let sum = x.reduce((a, b) => a + b);
  let product = x.reduce((a, b) => a * b);

  return product - sum;
}

console.log('sol:', subtractProductAndSum(12345));
