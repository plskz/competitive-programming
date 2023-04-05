function average(salary: number[]): number {
  salary.sort((a, b) => a - b);
  let n = salary.length - 1;
  let sum = salary.reduce((a, b) => a + b);
  return (sum - salary[0] - salary[n]) / (n - 1);
}

console.log(average([4000, 3000, 1000, 2000]));
