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
        vector<int> v(n);
        for (auto &x : v) cin >> x;
        sort(all(v));
        int ans = 1e9;
        for (int i = 0; i + 1 < n; i++) ans = min(ans, v[i + 1] - v[i]);
        cout << ans << '\n';
    }

    return 0;
}