#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

void solve() {
    int n, b;
    cin >> n >> b;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    sort(all(v));
    int tmp = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (tmp + v[i] <= b) {
            tmp += v[i];
            cnt++;
        }
    }
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}