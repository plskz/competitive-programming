#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    int best = INT_MAX;
    int ans = 0;
    v[n] = v[0];
    for (int i = 0; i < n; i++) {
        int tmp = abs(v[i] - v[i + 1]);
        if (tmp < best) best = tmp, ans = i;
    }
    cout << ans + 1 << ' ' << (ans + 1) % n + 1;

    return 0;
}