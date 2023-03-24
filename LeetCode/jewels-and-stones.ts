function numJewelsInStones(jewels: string, stones: string): number {
  return stones.split('').filter((stone) => jewels.includes(stone)).length;
}
