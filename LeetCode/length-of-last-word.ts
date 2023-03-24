function lengthOfLastWord(s: string): number {
  return s.trim().split(' ').pop()?.length || 0;
}
