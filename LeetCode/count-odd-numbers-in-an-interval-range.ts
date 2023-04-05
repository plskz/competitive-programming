function countOdds(low: number, high: number): number {
  if (!(low & 1)) low++;
  if (!(high & 1)) high--;

  return (high - low) / 2 + 1;
}
