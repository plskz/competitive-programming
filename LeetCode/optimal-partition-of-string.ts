// Solution 1
function partitionString(s: string): number {
  const lastSeen: number[] = new Array(26).fill(-1);

  let count: number = 1;
  let substrStart: number = 0;

  for (let i = 0; i < s.length; i++) {
    if (lastSeen[s.charCodeAt(i) - 'a'.charCodeAt(0)] >= substrStart) {
      count++;
      substrStart = i;
    }
    lastSeen[s.charCodeAt(i) - 'a'.charCodeAt(0)] = i;
  }

  return count;
}

// Solution 2
function partitionString2(s: string): number {
  let ans: number = 1;
  const charSet: Set<string> = new Set();

  for (const ch of s) {
    if (!charSet.has(ch)) {
      charSet.add(ch);
      continue;
    }

    ans++;
    charSet.clear();
    charSet.add(ch);
  }

  return ans;
}
