// Solution 1
function strStr(haystack: string, needle: string): number {
  return haystack.indexOf(needle);
}

// Solution 2: using sliding window
function strStr2(haystack: string, needle: string): number {
  let n = haystack.length;
  let m = needle.length;

  for (let windowStart = 0; windowStart <= n - m; windowStart++) {
    for (let i = 0; i < m; i++) {
      if (needle[i] !== haystack[windowStart + i]) break;
      if (i === m - 1) return windowStart;
    }
  }

  return -1;
}
