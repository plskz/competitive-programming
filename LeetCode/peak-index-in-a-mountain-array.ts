function peakIndexInMountainArray(arr: number[]): number {
  let l = 0;
  let r = arr.length - 1;

  while (l < r) {
    let mid = Math.floor(l + (r - l) / 2);

    if (arr[mid] < arr[mid + 1]) {
      l = mid + 1;
    } else {
      r = mid;
    }
  }

  return l;
}
