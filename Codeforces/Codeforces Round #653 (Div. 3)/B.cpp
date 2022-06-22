#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k2 = 0, k3 = 0;
        while (n % 2 == 0) n /= 2, k2++;
        while (n % 3 == 0) n /= 3, k3++;
        cout << (n == 1 && k2 <= k3 ? 2 * k3 - k2 : -1) << '\n';
    }

    return 0;
}