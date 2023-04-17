function validateStackSequences(pushed: number[], popped: number[]): boolean {
  let stack: number[] = [];
  let i = 0;

  for (let cur of pushed) {
    stack.push(cur);

    while (stack.length && stack[stack.length - 1] === popped[i]) {
      stack.pop();
      i++;
    }
  }

  return !stack.length;
}

console.log(validateStackSequences([1, 2, 3, 4, 5], [4, 5, 3, 2, 1]));
