function reverseVowels(s: string): string {
  const vowels = 'aeiouAEIOU';
  let res = s.split('');

  let l = 0;
  let r = s.length - 1;

  while (l < r) {
    if (!vowels.includes(res[l])) l++;
    if (!vowels.includes(res[r])) r--;

    if (!vowels.includes(res[l]) || !vowels.includes(res[r])) continue;

    [res[l], res[r]] = [res[r], res[l]];
    l++, r--;
  }

  return res.join('');
}
