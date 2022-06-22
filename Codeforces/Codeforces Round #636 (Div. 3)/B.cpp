#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n /= 2;
        if (n & 1) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        for (int i = 1; i <= n; i++) cout << i * 2 << ' ';

        for (int i = 1; i < n; i++) cout << i * 2 - 1 << ' ';

        cout << 3 * n - 1 << '\n';
    }

    return 0;
}