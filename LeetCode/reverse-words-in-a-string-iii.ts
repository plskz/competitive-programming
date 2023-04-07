const reverseString = (word: string): string => word.split('').reverse().join('');

function reverseWords(s: string): string {
  return s.split(' ').map(reverseString).join(' ');
}

console.log(reverseWords("Let's take LeetCode contest")); // s'teL ekat edoCteeL tsetnoc
console.log(reverseWords("God Ding")); // doG gniD
