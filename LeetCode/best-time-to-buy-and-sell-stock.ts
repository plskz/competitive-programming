// Solution 1
function maxProfit(prices: number[]): number {
  let l = 0;
  let r = 0;
  let maxProfit = 0;

  while (l < prices.length) {
    if (prices[l] < prices[r]) {
      maxProfit = Math.max(maxProfit, prices[r] - prices[l]);
    } else {
      l = r;
    }
    r++;
  }

  return maxProfit;
}

// Solution 2
function maxProfit2(prices: number[]): number {
  let mn = prices[0];
  let mx = 0;

  for (let i = 0; i < prices.length; i++) {
    mn = Math.min(mn, prices[i]);
    mx = Math.max(mx, prices[i] - mn);
  }

  return mx;
}

console.log(maxProfit([7, 1, 5, 3, 6, 4])); // 5
