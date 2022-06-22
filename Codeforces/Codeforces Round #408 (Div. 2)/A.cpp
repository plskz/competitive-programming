#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    int ans = 1e9;
    // cout << ans; // i forgot to uncout this shit
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x > 0 && x <= k) ans = min(ans, abs(i - m));
    }
    cout << ans * 10;

    return 0;
}