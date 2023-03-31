function canConstruct(ransomNote: string, magazine: string): boolean {
  const map: Record<string, number> = {};

  for (let letter of magazine) {
    map[letter] = ++map[letter] || 1;
  }

  for (let letter of ransomNote) {
    if (!map[letter]) return false;
    map[letter]--;
  }

  return true;
}

console.log(canConstruct('a', 'b')); // false
console.log(canConstruct('aa', 'ab')); // false
console.log(canConstruct('aa', 'aab')); // true
