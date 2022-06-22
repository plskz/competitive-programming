#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

bool win(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if ((n & (n - 1)) == 0) return 0;
    if (n % 4 == 2) {
        n /= 2;
        for (int i = 3; i * i <= n; i++) {
            if (n % i == 0) return 1;
        }
        return 0;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (win(n) ? "Ashishgup" : "FastestFinger") << '\n';
    }

    return 0;
}