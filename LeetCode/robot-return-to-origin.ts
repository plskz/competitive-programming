function judgeCircle(moves: string): boolean {
  let x = 0;
  let y = 0;

  for (let move of moves) {
    if (move === 'R') x++;
    if (move === 'L') x--;
    if (move === 'U') y++;
    if (move === 'D') y--;
  }

  return x === 0 && y === 0;
}
