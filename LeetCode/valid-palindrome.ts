function isPalindrome(s: string): boolean {
  let str = s.replace(/[^a-z0-9]/gi, '').toLowerCase();

  return str === str.split('').reverse().join('');
}

// using two pointers
function isPalindrome2(s: string): boolean {
  let str = s.replace(/[^a-z0-9]/gi, '').toLowerCase();

  let l = 0;
  let r = str.length - 1;

  while (l < r) {
    if (str[l] !== str[r]) return false;
  }
  return true;
}

console.log(isPalindrome('A man, a plan, a canal: Panama')); // true
console.log(isPalindrome('ace a car')); // false
console.log(isPalindrome(' ')); // true
console.log(isPalindrome('ab_a')); // true
