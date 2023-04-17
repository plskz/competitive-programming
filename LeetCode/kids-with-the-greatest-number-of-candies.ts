function kidsWithCandies(candies: number[], extraCandies: number): boolean[] {
  let mx = 0;

  for (const candy of candies) {
    mx = Math.max(mx, candy);
  }

  let result: boolean[] = [];

  for (const candy of candies) {
    result.push(candy + extraCandies >= mx);
  }

  return result;
}
