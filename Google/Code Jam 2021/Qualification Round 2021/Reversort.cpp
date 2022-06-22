#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int a[105];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    int ans = 0;
    for (int i = 1; i <= n - 1; i++) {
        int mn = i;
        for (int j = i; j <= n; j++) {
            if (a[i] > a[j]) {
                mn = min(mn, j);
            }
        }
        int pos = distance(a, find(a, a + n, mn));
        // cout << pos << '\n';
        ans += pos - i + 1;
        reverse(a + i, a + pos + 1);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int i = 1;
    while (t--) {
        cout << "Case #" << i++ << ": ";
        solve();
    }

    return 0;
}