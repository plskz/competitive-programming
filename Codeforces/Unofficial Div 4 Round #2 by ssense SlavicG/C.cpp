#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    sort(all(v));
    int mid = n & 1 ? v[((n + 1) / 2) - 1] : (v[(n / 2) - 1] + v[((n + 1) / 2) - 1]) / 2;
    ll ans = 0;
    for (auto x : v) ans += abs(x - mid);
    cout << ans;

    return 0;
}