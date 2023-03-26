function isRectangleOverlap(rec1: number[], rec2: number[]): boolean {
  let x1 = Math.max(rec1[0], rec2[0]);
  let y1 = Math.max(rec1[1], rec2[1]);
  let x2 = Math.min(rec1[2], rec2[2]);
  let y2 = Math.min(rec1[3], rec2[3]);

  return x1 < x2 && y1 < y2;
}
