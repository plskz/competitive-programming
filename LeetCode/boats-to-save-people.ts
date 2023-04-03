function numRescueBoats(people: number[], limit: number): number {
  people.sort((a, b) => a - b); // from lightest to heaviest

  let ans = 0;

  let l = 0;
  let r = people.length - 1;

  while (l <= r) {
    ans++;
    l = people[l] + people[r] <= limit ? l + 1 : l;
    r--;
  }

  return ans;
}

console.log(numRescueBoats([1], 3)); // 1
console.log(numRescueBoats([1, 2], 3)); // 1
console.log(numRescueBoats([3, 2, 2, 1], 3)); // 3
console.log(numRescueBoats([3, 5, 3, 4], 4)); // 4
