/**
 Do not return anything, modify s in-place instead.
 */
function reverseString(s: string[]): void {
  let l = 0;
  let r = s.length - 1;

  while (l < r) {
    [s[l], s[r]] = [s[r], s[l]];
    l++, r--;
  }
}

reverseString(['h', 'e', 'l', 'l', 'o']); // [ 'o', 'l', 'l', 'e', 'h' ]
