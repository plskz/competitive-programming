function mergeAlternately(word1: string, word2: string): string {
  let n = word1.length;
  let m = word2.length;
  let result: string[] = [];

  for (let i = 0; i < Math.max(n, m); i++) {
    if (i < n) result.push(word1[i]);
    if (i < m) result.push(word2[i]);
  }

  return result.join('');
}
