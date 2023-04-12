function removeStars(s: string): string {
  let stack: string[] = [];

  for (let char of s) {
    if (char !== '*') {
      stack.push(char);
    } else {
      stack.pop();
    }
  }

  return stack.join('');
}

console.log(removeStars('leet**cod*e'));
console.log(removeStars('erase*****'));

// TODO: add other approach
