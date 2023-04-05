function containsDuplicate(nums: number[]): boolean {
  let unique = new Set(nums);

  return nums.length !== unique.size;
}

// TODO: add different approach
