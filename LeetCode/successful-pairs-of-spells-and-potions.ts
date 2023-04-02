function successfulPairs(
  spells: number[],
  potions: number[],
  success: number
): number[] {
  let ans: number[] = [];

  potions.sort((a, b) => a - b);

  for (let spell of spells) {
    let left = 0;
    let right = potions.length;

    while (left < right) {
      let mid = Math.floor(left + (right - left) / 2);
      if (potions[mid] * spell < success) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    ans.push(potions.length - left);
  }

  return ans;
}
