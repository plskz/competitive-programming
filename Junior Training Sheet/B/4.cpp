#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t[105] = {0};

    int n, a;
    cin >> n >> a;
    for (int i = 1; i <= n; i++) cin >> t[i];

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (t[i]) {
            int j = a * 2 - i;
            if (j <= 0 || j > n || t[j]) ans++;
        }
    }
    cout << ans;

    return 0;
}