function lemonadeChange(bills: number[]): boolean {
  const currentMoney = {
    5: 0,
    10: 0,
    20: 0,
  };

  for (let i = 0; i < bills.length; i++) {
    const currentBill = bills[i];

    switch (currentBill) {
      // first case - customer paid 5$ - no change needed
      case 5:
        currentMoney[5]++;
        break;

      // second case - customer paid 10$ - if we have a 5$ bill, give it. Otherwise - return false
      case 10:
        if (currentMoney[5] === 0) {
          return false;
        }
        currentMoney[5]--;
        currentMoney[10]++;
        break;

      // third case - customer paid 20$ - if we have 5$ and 10$ bills - give that.
      // else - if we have three 5$ bills - give that.
      // otherwise - return false.
      case 20:
        if (currentMoney[10] > 0 && currentMoney[5] > 0) {
          currentMoney[10]--;
          currentMoney[5]--;
          currentMoney[20]++;
        } else if (currentMoney[5] >= 3) {
          currentMoney[5] -= 3;
          currentMoney[20]++;
        } else {
          return false;
        }
        break;
    }
  }

  return true;
}
