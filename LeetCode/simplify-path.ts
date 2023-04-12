// Solution 1
function simplifyPath(path: string): string {
  let stack: string[] = [];
  let ans: string = '';
  let n = path.length;

  for (let i = 0; i < n; i++) {
    let dir = '';

    while (i < n && path[i] !== '/') {
      dir += path[i];
      i++;
    }

    if (dir === '..') {
      stack.pop();
    } else if (dir === '.' || dir === '') {
      continue;
    } else {
      stack.push(dir);
    }
  }

  for (let dir of stack) {
    ans += '/' + dir;
  }

  return ans || '/';
}

// Solution 2
function simplifyPath2(path: string): string {
  const stack: string[] = [];
  const dirs = path.split('/');

  for (const dir of dirs) {
    if (dir === '' || dir === '.') {
      continue;
    } else if (dir === '..') {
      stack.pop();
    } else {
      stack.push(dir);
    }
  }

  return '/' + stack.join('/');
}

// Solution 3
function simplifyPath3(path: string): string {
  const stack: string[] = [];

  for (const dir of path.split('/')) {
    if (dir === '..') stack.pop();
    else if (dir && dir !== '.') stack.push(dir);
  }

  return '/' + stack.join('/');
}
